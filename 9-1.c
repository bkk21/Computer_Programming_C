/*Ex09_08.c*/
#include<stdio.h>

int ILY(int year);

int main(void)
{

	int Y;

	printf("³âµµ ÀÔ·Â : ");
	scanf("%d", &Y);

	if(ILY(Y))
		printf("À±³â");
	else
		printf("À±³â ¾Æ´Ô");
	
	return 0;
}

int ILY(int year)
{
	int re;
	
	re = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? 1 : 0 ;

	return re;
}