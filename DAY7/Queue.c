/*Write a programme to implement queue operations*/
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
    return (rear == MAX - 1);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Inserted to queue: %d\n", value);
    }
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        printf("Dequeued element is: %d\n", queue[front]);
        int dequeuedValue = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        return dequeuedValue;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Dequeued element is: %d\n", dequeue());
    display();
    return 0;
}