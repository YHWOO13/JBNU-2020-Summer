#include <stdio.h>

int function1(int num) {
	int i, j;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int function2(int num) {
	int i, j;
	for (i = 0; i < num; i++)
	{
		for (j = num; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

int function3(int num) {
	int i, j,k=0;
	for (i = 0; i < num; i++)
	{
		for (j = num; j > i+1; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= j; k++) {
			printf("*");
		}
		printf("\n");
	}
}

int function4(int num) {
	int i, j, k = 0;
	for (i = num; i > 0; i--)
	{
		for (k = num; i < k; k--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int function5(float num) {
	int row1, col1, col2, col3, row2, col4, col5=0;
	for (row1 = 0; row1 < ((num / 2) - 0.5); row1++) {
		for (col1 = ((num / 2) - 0.5); col1>row1; col1--) {
			printf(" ");
		}
		for (col2 = 0; col2 < 2*row1+1; col2++) {
			printf("*");
		}
			/*for (col3 = 0; col3 < ((num / 2) + 0.5)-1; col3++) {
				printf(" ");
			}*/
			printf("\n");
		}
	// �߰�
		for (row1 = 0; row1 < num; row1++) {
			printf("*");
		}
		printf("\n");
	// �غκ�
		for (row2 = ((num / 2) - 0.5); row2 >0 ; row2--) {
			for (col4 = row2; col4 <((num / 2) + 0.5); col4++) {
				printf(" ");
			}
			for (col5 = 2*row2-1; col5 >0 ; col5--) {
				printf("*");
			}
			printf("\n");
		}
	}

int function6(int num) {
	int row, col1, col2, col3 = 0;
	if (num%2==1) {
		for (col1 = 0; col1 < num; col1++) {
			printf("*");
		}
		printf("\n");
	for (row = ((num / 2) - 0.5); row >= 0; row--) {
		for (col2 = row; col2 <= ((num / 2) + 0.5)-1; col2++) {
			printf(" ");
		}
		for (col3 = 2 * row + 1; col3 > 0; col3--) {
			printf("*");
		}
		printf("\n");
	}
}
	else if (num % 2 == 0) {
		int row, col1, col2 = 0;
		for (row = num / 2; row >=0 ; row--) {
			for (col1 = row; col1 <= (num/2)-1; col1++) {
				printf(" ");
			}
			for (col2 = 2*row; col2 > 0; col2--) {
				printf("*");
			}
			printf("\n");
		}
	}

}

int function7(int num) {
	if (num % 2 == 1) {
		int row, col1, col2 = 0;
		for (row = 0; row < ((num / 2) - 0.5); row++) {
			for (col1 = ((num / 2) - 0.5); col1 >=row; col1--) {
				printf(" ");
			}
			for (col2 = 0; col2 < 2 * row + 1; col2++) {
				printf("*");
			}
			printf("\n");
		}
		for (row = 0; row < num; row++) {
			printf("*");
		}
	}
	else if (num%2==0) {
		int row, col1, col2 = 0;
		for (row = 0; row <= num/2; row++) {
			for (col1 = (num/2); col1 > row; col1--) {
				printf(" ");
			}
			for (col2 = 0; col2 < 2 * row; col2++) {
				printf("*");
			}
			printf("\n");
		}
	}

}


	


int main() {
	int option,input;
	printf("���ϴ� �ɼ��� �����ϼ���. \n");
	
	printf("1.�⺻\n");
	printf("2.1�� ��\n");
	printf("3.�����ﰢ\n");
	printf("4.3�� ��\n");
	printf("5.���̾Ƹ��(Ȧ���� �Է�)\n");
	printf("6.Ȧ��/¦������ ��\n");
	printf("7.Ȧ��/¦������ \n");
	scanf_s("%d", &option);
	printf("�ɼ�: %d \n",option);

	if (option == 1) {
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function1(input);
	}

	else if (option == 2) {
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function2(input);
	}

	else if (option == 3) {
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function3(input);
	}

	else if (option == 4) {
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function4(input);
	}

	else if (option == 5) {
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function5(input);
	}
	else if (option == 6) {
		int addoption = 0;
		printf("1.Ȧ����: \n");
		printf("2.¦����: \n");
		scanf_s("%d", &addoption);
		printf("���ϴ� ù��°���� ���� ������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function6(input);
	}

	else if (option == 7) {
		int addoption = 0;
		printf("1.Ȧ����: \n");
		printf("2.¦����: \n");
		scanf_s("%d", &addoption);
		printf("���ϴ� ���������� ���� ������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		function7(input);
	}

	else printf("There is no the option.");

	return 0;
}
	 
