#include <stdio.h>

// Global Variable
int count,count3= 0;
int *stack;
int top = -1;

void stack_visualize() {
	int i,j = 0;
	printf("[");
	for (j = 0; j < count; j++) {
		printf("%d ", stack[j]);
	}
	printf("]\n");
}

int push(int num) {
	if (isFull()) {
		int count2=0;
		printf("---------------------Stack is full---------------------\n");
		printf("                   ");
		stack_visualize();
		printf("-----------------Can't add the stack-----------------\n");
		printf("1.add? \n");
		printf("2.stop? \n");
		scanf_s("%d", &count2);

		if (count2 == 1) {
			int r;
			printf("How much more? \n");
			scanf_s("%d", &count2);
			count += count2;
			stack = (int*)realloc(stack, sizeof(int) * count);
			for (r = count-count2; r < count; r++) {
				stack[r] = 0;
			}
		}


		return -1;
	}
	
	else {
		top++;
		stack[top] = num;
		return num;
	}
}

int pop() {
	int temp = 0;
	if (isEmpty())
	{
		printf("-------------------Stack is empty-------------------\n");
		printf("                ");
		stack_visualize();
		printf("---------------------Can't pop---------------------\n");
		return -1;
	}
	else {
		temp = stack[top];
		stack[top] = 0;
		top--;
		return temp;
	}
}

int isFull() {
	if (top >=count-1) {
		return 1;
	}
	else {
		return 0;
	}
}

int isEmpty() {
	if (top <= -1) {
		return 1;
	}
	else {
		return 0;
	}
}
		/*
			printf("넣고 싶은 개수를 적으시오: \n");
			scanf_s("%d", &num);


			for (i = 0; i < num; i++) {
				printf("값을 적으시오: \n");
				scanf_s("%d", &count);
				top++;
				array[top] = count;
			}
			int c = 0;
			for (j = num; j > 0; j--) {
				c = c + 1;
				printf("%d번째 pop값: %d \n",c, array[j-1]);


			}
			*/


int main() {
	int num = 0;
	int i, j,option=0;
	printf("원하는 배열의 크기를 적으시오: \n");
	scanf_s("%d", &count);
	stack = (int*)calloc(count, sizeof(int));
	while (1) {
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Show Stack\n");
		printf("4. Exit\n");
		printf("> ");
		scanf_s("%d", &option);

		if (option == 1) {
			printf("Write Number: ");
			scanf_s("%d", &num);
			push(num);
		}
		else if (option == 2) {
			pop();
		}
		else if (option == 3) {
			stack_visualize();
		}
		else if (option == 4) {
			printf("Terminate the program\n");
			break;
		}

		else {
			printf("Wrong option\n\n");
		}
	}

	free(stack);
	return 0;
}