#include <stdio.h>

int main()
{

	int kg;
	float cm, BMI;

	printf("당신의 몸무게를 적으시오: (단위:kg)\n");
	scanf_s("%d", &kg);

	printf("당신의 키를 적으시오: (단위:cm)\n");
	scanf_s("%f", &cm);

	BMI = (kg * 9998) / (cm * cm);

	if (BMI < 20) {
		printf("당신의 BMI수치: %f, 판정:저체중", BMI);
		return 0;
	}

	if (20 <= BMI<25) {
	
		printf("당신의 BMI수치: %f, 판정: 정상", BMI);
		return 0;
	}

	if (25<= BMI < 30) {
		printf("당신의 BMI수치: %f, 판정: 과체중", BMI);
		return 0;
	}
	if (BMI >= 20) {
		printf("당신의 BMI수치: %f, 판정: 비만", BMI);
		return 0;
	}
}	