/* 실수 값을 인자로 받아서 절대값을 구하는 Absolute 함수를 정의 하여
음수 또는 양수 입력시 절대값을 출력하는 프로그램을 작성하시오.
(math 라이브러리함수(abs)를 사용하지 말것) */

#include<stdio.h>

float Absolute(float a) //함수 정의
{
	float num1;
	if (a < 0) //실수가 음수일 때
	{
		num1 = (-1) * a;
	}
	else //실수가 양수일 때
	{
		num1 = a;
	}
	return num1; //값 반환
}

int main(void) //mian 함수
{
	float num2;
	float abs;
	printf("실수를 입력하세요 : "); //실수 입력
	scanf("%f", &num2);

	abs = Absolute(num2); //함수 호출
	printf("%g의 절댓값은 %g입니다", num2, abs); //값 출력

	return 0;
}