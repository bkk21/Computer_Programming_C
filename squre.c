/* X�� y���� ���ϴ� �Լ��� �����Ͻÿ�. �̶� X, y, X�� y���� ��� �����̴�.
( X, y�� �Է��ϸ� X�� y���� ����Ѵ�.) (math ���̺귯���Լ�(pow)�� ������� ����) */

#include<stdio.h>

int Square(int a, int b)
{
	int num;
	int i;

	num = a; // �Է� ���� a �� ����, 1���� ���� num �� ���
	for (i=2; i <= b; i++) //2�� �� �� ���� �Է¹��� ���� �� ������ ���ϱ� ���
		num *= a; //num�� ����� ���� a�� ����

	return num; // �� ��ȯ
}

int main(void)
{
	int x,y, result; 

	printf("������ ���� �Է����ּ���(x^y�� �� x y ������ �Է��� ��) : "); // �Է¹ޱ�
	scanf("%d %d", &x, &y);
	
	result = Square(x, y); //�Լ� ȣ��
	printf("%d�� %d���� ���� %d�Դϴ�.\n", x, y, result); // �� ���

	return 0;
}