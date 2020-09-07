#include <stdio.h>

int main()
{
	int menu = 0;
	float dollar, won, rate;

	printf("1달러 기준 환율을 입력하세요: \n");
	scanf_s("%f", &rate);


	printf("1. 기준 환율 출력 \n");
	printf("2. 원화를 달러화로 출력 \n");
	printf("3. 달러화를 원화로 출력 \n");
	printf("메뉴를 선택하세요. \n");
	
	scanf_s("%d",&menu);
	if (menu == 1) {
		printf("현제 환율: %4.2f", rate);
		return 0;
	}

	if (menu == 2) {
		printf("원화를 입력하세요: ");
		scanf_s("%f", &won);
		printf("입력하신 원화의 달러화: $%f", won/rate);
		return 0;
	}
	if (menu == 3) {
		printf("달러화를 입력하세요: ");
		scanf_s("%f", &dollar);
		printf("입력하신 원화의 달러화: \%f", rate*dollar);
		return 0;
	}

	return 0;
}