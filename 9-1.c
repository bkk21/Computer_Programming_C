/*Ex09_08.c*/
#include<stdio.h>

int ILY(int year);

int main(void)
{

	int Y;

	printf("�⵵ �Է� : ");
	scanf("%d", &Y);

	if(ILY(Y))
		printf("����");
	else
		printf("���� �ƴ�");
	
	return 0;
}

int ILY(int year)
{
	int re;
	
	re = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? 1 : 0 ;

	return re;
}