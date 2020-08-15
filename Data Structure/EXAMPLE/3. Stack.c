#include <stdio.h>

int main() {
	int count = 0;
	int array[10] = {0, };
	int top = -1;
	int temp = 0;

	// 연산 프로세스
	// Push
	for (count = 1; count <= 7; count++) {
		printf("숫자출력: ");
		scanf_s("%d", &temp);
		top++;
		array[top] = temp;
	}

	// 출력 프로세스
	printf("[");
	for (count = 0; count <= 9; count++) {
		printf("%d, ", array[count]);
	}
	printf("]\n");

	// Pop
	for (count = 1; count <= 7; count++) {
		
		printf("%d\n", array[top]);
		array[top] = 0;
		top--;
	}
	// 출력 프로세스
	printf("[");
	for (count = 0; count <= 9; count++) {
		printf("%d, ", array[count]);
	}
	printf("]");

	return 0;

}

