#include <stdio.h>

int main()
{

	int kg;
	float cm, BMI;

	printf("����� �����Ը� �����ÿ�: (����:kg)\n");
	scanf_s("%d", &kg);

	printf("����� Ű�� �����ÿ�: (����:cm)\n");
	scanf_s("%f", &cm);

	BMI = (kg * 9998) / (cm * cm);

	if (BMI < 20) {
		printf("����� BMI��ġ: %f, ����:��ü��", BMI);
		return 0;
	}

	if (20 <= BMI<25) {
	
		printf("����� BMI��ġ: %f, ����: ����", BMI);
		return 0;
	}

	if (25<= BMI < 30) {
		printf("����� BMI��ġ: %f, ����: ��ü��", BMI);
		return 0;
	}
	if (BMI >= 20) {
		printf("����� BMI��ġ: %f, ����: ��", BMI);
		return 0;
	}
}	