#include <stdio.h>

int main() {
	int count = 0;
	int array[10] = {0, };
	int top = -1;
	int temp = 0;

	// ���� ���μ���
	// Push
	for (count = 1; count <= 7; count++) {
		printf("�������: ");
		scanf_s("%d", &temp);
		top++;
		array[top] = temp;
	}

	// ��� ���μ���
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
	// ��� ���μ���
	printf("[");
	for (count = 0; count <= 9; count++) {
		printf("%d, ", array[count]);
	}
	printf("]");

	return 0;

}

