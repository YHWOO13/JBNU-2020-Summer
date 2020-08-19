#include <stdio.h>

// Global Variable
int stack[10] = { 0, };
int top = -1;

void stack_visualize() {
	int j = 0;
	printf("[");
	for (j = 0; j < 10; j++) {
		printf("%d ", stack[j]);
	}
	printf("]\n");
}

int push(int num) {
	top++;
	stack[top] = num;
	return num;
}

int pop() {
	int temp = stack[top];
	stack[top] = 0;
	top--;
	return temp;
}

int isFull() {
	if (top >= 9) {
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
			if (isFull()) {
				printf("---------------------Stack is full---------------------\n");
				printf("                   ");
				stack_visualize();
				printf("-----------------Can't add the stack-----------------\n");
			}
			else {
				push(num);
			}
		}
		else if (option == 2) {
			if (isEmpty()) 
			{
				printf("-------------------Stack is empty-------------------\n");
				printf("                ");
				stack_visualize();
				printf("---------------------Can't pop---------------------\n");
			}
			else { pop(); }
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
	return 0;
}