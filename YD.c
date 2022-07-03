/* ������ ���� ���ڷ� �޾Ƽ� �� ���� ��¥ ���� �����ϴ� GetDaysOfMonth �Լ��� �����Ͻÿ�. 
1,3,5,7,8,10,12���� 31���̰� 2,4,6,9,11���� 30���̴�. ��, 2���� �����̸� 29��, ������ �ƴϸ� 28���̴�. 
�������� Ȯ�� �Ϸ��� ������ ���� IsLeapYear �Լ��� �̿��Ѵ�. 
GetDaysOfMonth�� ������ ���� ����ڷ� ���� ������ ���� �Է¹޾Ƽ� 
�� ���� ��¥ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include<stdio.h>

int IsLeapYear(int ILY); 
int GetDaysOfMonth(int Year, int Month); 

int main(void)
{
	int Y1, M1;  
	int DAY; 

	printf("������ ���� �Է��ϼ��� : ");
	scanf("%d %d", &Y1, &M1);

	DAY = GetDaysOfMonth(Y1, M1);

	printf("%d�⵵ %d���� ��¥ ���� %d�Դϴ�.\n", Y1, M1, DAY);

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
