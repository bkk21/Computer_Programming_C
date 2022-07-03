/* 연도와 월을 인자로 받아서 그 달의 날짜 수를 리턴하는 GetDaysOfMonth 함수를 정의하시오. 
1,3,5,7,8,10,12월은 31일이고 2,4,6,9,11월은 30일이다. 단, 2월은 윤년이면 29일, 윤년이 아니면 28일이다. 
윤년인지 확인 하려면 위에서 만든 IsLeapYear 함수를 이용한다. 
GetDaysOfMonth를 정의한 다음 사용자로 부터 연도와 월을 입력받아서 
그 달의 날짜 수를 출력하는 프로그램을 작성하시오. */

#include<stdio.h>

int IsLeapYear(int ILY); 
int GetDaysOfMonth(int Year, int Month); 

int main(void)
{
	int Y1, M1;  
	int DAY; 

	printf("연도와 월을 입력하세요 : ");
	scanf("%d %d", &Y1, &M1);

	DAY = GetDaysOfMonth(Y1, M1);

	printf("%d년도 %d월의 날짜 수는 %d입니다.\n", Y1, M1, DAY);

	return 0;
}


int IsLeapYear(int ILY)
{

	if (ILY % 4 == 0 && ILY % 100 != 0 || ILY % 100 == 0 && ILY % 400 == 0)
		return 29;
	else
		return 28;
}

int GetDaysOfMonth(int Year, int Month)
{
	int D;

	if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
		return 31;

	else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
		return 30;

	else if (Month == 2)
		D = IsLeapYear(Year);
	return D;
}
