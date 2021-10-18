#include <stdio.h>

int Q[10], front = -1, rear = -1;

void enqueue(int y);
void dequeue();
void display();
void clear();
void front();

int main() {
    int c = -1, x;
    printf("1 - Enqueue\n2 - Dequeue\n3 - Display queue\n4 - Empty queue\n5 - Front element");
    printf("0 - Exit\n");
    while (c != 0) {
        printf("Choose an option ");
        scanf("%d", &c);
        switch (c) {
        case 1:
            printf("Enter the element to be enqueued ");
            scanf("%d", &x);
            enqueue(x);
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            clear();
            break;
            
        case 5:
            front();
            break;    

        case 0:
            break;            

        default:
            printf("Enter a correct option value\n");
            break;
        }
    }
}

void enqueue(int y) {
    if (rear == (sizeof(Q)/sizeof(int) - 1)) {
        printf("Queue overflow occured\n");
    } else {
        rear++;
        Q[rear] = y;
    }
}

void dequeue() {
    if (front == rear) {
        printf("Queue underflow occured\n");
    } else {
        front++;
        printf("The dequeued element is %d\n", Q[front]);
    }
}

void display() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("The elements in the queue are ");
        for (int i = front + 1; i <= rear; i++) {
            printf("%d ", Q[i]);
        }
        printf("\n");
    }    
}

void clear() {
    front = -1;
    rear = -1;
    printf("The queue has been cleared\n");
}

void front() {
    printf("The element at the front of the queue: %d\n", Q[front + 1]);
}
