#include <stdio.h>

int main()
{
	int menu = 0;
	float dollar, won, rate;

	printf("1�޷� ���� ȯ���� �Է��ϼ���: \n");
	scanf_s("%f", &rate);


	printf("1. ���� ȯ�� ��� \n");
	printf("2. ��ȭ�� �޷�ȭ�� ��� \n");
	printf("3. �޷�ȭ�� ��ȭ�� ��� \n");
	printf("�޴��� �����ϼ���. \n");
	
	scanf_s("%d",&menu);
	if (menu == 1) {
		printf("���� ȯ��: %4.2f", rate);
		return 0;
	}

	if (menu == 2) {
		printf("��ȭ�� �Է��ϼ���: ");
		scanf_s("%f", &won);
		printf("�Է��Ͻ� ��ȭ�� �޷�ȭ: $%f", won/rate);
		return 0;
	}
	if (menu == 3) {
		printf("�޷�ȭ�� �Է��ϼ���: ");
		scanf_s("%f", &dollar);
		printf("�Է��Ͻ� ��ȭ�� �޷�ȭ: \%f", rate*dollar);
		return 0;
	}

	return 0;
}