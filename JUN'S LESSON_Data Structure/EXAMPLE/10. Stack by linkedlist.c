#include<stdio.h>
#include<stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
	int data;
	listPointer link;
}listNode;

listPointer top = NULL;

int size() {
	int count = 0;
	listPointer s = top;
	while (s->link)
	{
		s = s->link;
		count++;
	}
	return count;
}

void full()
{
	printf("-------------Stack is full.-------------\n");
}

void empty()
{
	printf("-------------Stack is empty.-------------\n");
	printf("---------------Can't pop.---------------\n");
}

int push(int num) 
{
	listPointer temp = (listNode*)malloc(sizeof(listNode));
	listPointer trace = top;

	temp->data = num;
	temp->link = NULL;
	if (top)
	{
		for (; trace->link; trace = trace->link) {}
		trace->link = temp;
	}
	else
		top = temp;
}


int pop()
{
	listPointer pop = top;
	listPointer temp = NULL;
	int count = 0;
	if (top!=NULL)
	{
		if (size() == 0) 
		{
			temp = pop;
			printf("%d", temp->data);
			top = NULL;;
		}

		else 
		{
			for (count = 0; count < size() - 1; count++)
			{
				pop = pop->link;
			}
			temp = pop->link;
			printf("%d", temp->data);
			pop->link = NULL;;
		}
	}
	else empty();
}

void visualize()
{
	//새로운 포인터변수로 top을 안가져오면 top이 초기화가 된다.
	listPointer visual = top;
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
		printf("1. push \n");
		printf("2. pop \n");
		printf("3. visualize \n");
		printf("4. stop \n");
		printf("Write option: ");
		scanf_s("%d", &option);

		if (option == 1)
		{
			printf("Write a number: ");
			scanf_s("%d", &num);
			push(num);
		}

		else if (option == 2)
		{
			pop();
			printf("\n");
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