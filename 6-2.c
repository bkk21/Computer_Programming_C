/*������ ���ڷ� �޾Ƽ� �������� ���θ� �Ǵ��ϴ� IsLeapYear �Լ��� �����Ͻÿ�. 
IsLeapYear �Լ��� �����̸� 1��, �׷��� ������ 0�� �����ؾ��Ѵ�. 
(����� ������ 4�� ������ �������� ����, 4�� ������ �������� ���� �߿��� 100���� ������ �������� ������ ������ �ƴϰ�, 
100���� ������ �������� ���� �� �ٽ� 400���� ������ �������� ������ �����̴�.)*/

#include<stdio.h>

int IsLeapYear(int ILY);

int main(void)
{

	int year1;
	int year2;
	
	printf("������ �Է��ϼ��� :");
	scanf("%d",&year1);

	year2 = IsLeapYear(year1);

	if(year2 == 1)
	printf("%d�⵵�� �����Դϴ�.\n", year1);
	
	else
	printf("%d�⵵�� ������ �ƴմϴ�.\n", year1);

	return 0;
}

int IsLeapYear(int ILY)
{

	if(ILY % 4 == 0 && ILY % 100 != 0 || ILY % 100 == 0 && ILY % 400 == 0)
	return 1;
	else
	return 0;
}