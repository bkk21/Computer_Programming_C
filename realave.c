/* 실수값10개를 사용자로부터 입력 받아 배열에 넣고 
평균을 구하는 프로그램을 작성하시오. */

#include<stdio.h>
int main(void)
{
	int i;
	float real[10];
	float sum = 0;
	float ave = 0;
	
	printf("실수 10개를 입력하세요 : ");
	
	for(i=0; i<=9; i++)
	{
		scanf("%f", &real[i]);
	}

	for(i=0; i<=9; i++)
	{
		sum += real[i];
	}

	ave = sum / (float) 10;

	printf("실수 값 10개의 평균 : %f", ave);
	
	return 0;
}