#include <stdio.h>
#include <stdlib.h>

int count,size = 0;
int front, rear = 0;
int *Queue;
void visualizeQ() {
	int i = 0;
	printf("[");
	for (i = 1; i <= size+1; i++) {
		printf("%d ", Queue[(i+front)%(size+1)]);
	}
	printf("]\n");
}


int addQ(int num) {
	if (isFull()) {
		printf("---------------------Queue is full---------------------\n");
		printf("                   ");
		visualizeQ();
		printf("-----------------Can't add the queue anymore-----------------\n");
	}
	else {
		if (rear >= size && front != 0 && front <= size) 
		{
			rear = 0;
			Queue[rear] = num;
		}
		else if (rear == front && front <= size)
		{
			rear++;
			Queue[rear] = num;

		}
		else 
		{
			rear++;
			Queue[rear] = num;
		}
	}
}

int deleteQ() {
	int temp=0;
	if (isEmpty())
	{
		printf("---------------------Queue is empty---------------------\n");
		printf("                   ");
		visualizeQ();
		printf("-----------------Add the queue-----------------\n");
		return -1;
	}
	else {
		if (front >= size) {
			front = 0;
			temp = Queue[front];
			Queue[front] = 0;
			return temp;
		}
		else if (rear == front && front != 0 && front <= size) 
		{
			temp = Queue[front];
			front++;
			Queue[front] = 0;
			return temp;
		}
		else {
			temp = Queue[front];
			front++;
			Queue[front] = 0;
			return temp;
		}
	}

}

int isFull() {
	if(rear >= size && front == 0) {
		return 1;
	}
	
	else if (front==rear+1 && front != 0 && front <= size) {
		return 1;
	}
	else return 0;
}

int isEmpty() {
	if ((rear == 0) && (front == 0)) {
		return 1;
	}
	if (rear == front && front != 0 && front <= size) 
	{
		return 1;
	}
	else return 0;

}

int main() {
	int option = 0;
	printf("Write the size of Queue: ");
	scanf_s("%d", &size);
	Queue = (int*)calloc(size+1,sizeof(int));
	while (1) {
		printf("1. addQ\n");
		printf("2. deleteQ\n");
		printf("3. show Queue\n");
		printf("4. Finish\n");
	
		printf("Choose an option: ");
	scanf_s("%d", &option);
	
	if (option == 1) {
		printf("Write a number you want:");
		scanf_s("%d", &count);
		addQ(count);
	}

	else if (option == 2) {
		deleteQ();
	}

	else if (option == 3) {
		visualizeQ();
	}

	else if (option == 4) {
		printf("--------------------------Finish the Queue.--------------------------");
		break;
	}

	else printf("There is no the option.\n");
	
	}
	
	return 0;
}