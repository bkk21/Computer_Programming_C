/*연도를 인자로 받아서 윤년인지 여부를 판단하는 IsLeapYear 함수를 정의하시오. 
IsLeapYear 함수는 윤년이면 1을, 그렇지 않으면 0을 리턴해야한다. 
(참고로 연도를 4로 나누어 떨어지면 윤년, 4로 나누어 떨어지는 연도 중에서 100으로 나누어 떨어지는 연도는 윤년이 아니고, 
100으로 나누어 떨어지는 연도 중 다시 400으로 나누어 떨어지는 연도는 윤년이다.)*/

#include<stdio.h>

int IsLeapYear(int ILY);

int main(void)
{

	int year1;
	int year2;
	
	printf("연도를 입력하세요 :");
	scanf("%d",&year1);

	year2 = IsLeapYear(year1);

	if(year2 == 1)
	printf("%d년도는 윤년입니다.\n", year1);
	
	else
	printf("%d년도는 윤년이 아닙니다.\n", year1);

	return 0;
}

int IsLeapYear(int ILY)
{

	if(ILY % 4 == 0 && ILY % 100 != 0 || ILY % 100 == 0 && ILY % 400 == 0)
	return 1;
	else
	return 0;
}