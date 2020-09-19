/*Author: Yoonhyuck WOO / JBNU_Industrial Information system Engineering
  Date; Sep. 19 2020
  Title:  Que by linkedlist*/

#include<stdio.h>
#include<stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
	int data;
	listPointer link;
}listNode;

listPointer front = NULL;
listPointer rear = NULL;

void empty()
{
	printf("-------------Stack is empty.-------------\n");
	printf("---------------Can't pop.---------------\n");
}

int addQ(int num) 
{
	listPointer temp = (listNode*)malloc(sizeof(listNode));
	temp->data = num;
	temp->link = NULL;
	listPointer trace = front;

	if (front && rear)
	{
		if (front->link == NULL)
		{
			front->link = temp;
		}
		else 
		{
			for (; trace->link; trace = trace->link) {}
			trace->link = temp;
		}
	}
	else if (front == NULL && rear)
	{
		front = temp;
	}
	else {
		front = temp;
		rear = front;
	} 
}


int deleteQ()
{
	listPointer temp = front;
	listPointer trace = NULL;
	if (front)
	{
		if (front->link == NULL)
		{
			trace = front;
			front = front->link;
			free(trace);
			printf("-------------Delete Q.-------------\n");

		}
		else 
		{
			trace = front;
			front = front->link;
			free(trace);

			printf("-------------Delete Q.-------------\n");
		}
	}
	else {
		printf("-----------There is nothing.-----------\n");
		printf("-------------Please addQ-------------\n");
	}
}

void visualize()
{
	//새로운 포인터변수로 top을 안가져오면 top이 초기화가 된다.
	listPointer visual = front;
	printf("[");
	for (; visual; visual=visual->link)
	{
		printf("%d ",visual->data);
	}
	printf("]\n");
}

int main() {
	int option, num = 0;

	while (1) {
		printf("1. addQ \n");
		printf("2. deleteQ \n");
		printf("3. visualize \n");
		printf("4. stop \n");
		printf("Write option: ");
		scanf_s("%d", &option);
		if (option == 1)
		{
			printf("Write a number: ");
			scanf_s("%d", &num);
			addQ(num);
		}

		else if (option == 2)
		{
			deleteQ();
		}

		else if (option == 3)
		{
			visualize();
		}

		else if (option == 4)
		{

			printf("-------------Quit the stack.-------------\n");
			break;
		}

		else
		{
			printf("-------------Out of oder.-------------\n");
		}
	}
	return 0;
}