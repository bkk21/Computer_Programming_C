#include<stdio.h>

int main(void)
{
	int a, b, c; // ���� ������ ����
	int sum; //�հ�
	float ave; // ���
	int max; // �ִ�
	int min; //�ּ�

	printf("���� 3���� �Է��ϼ��� :"); // ���� �Է� �ޱ�
	scanf(" %d %d %d", &a, &b, &c); // ���� �Է� �ޱ�

	sum = a + b + c; // �հ� ���ϱ�
	
	ave = ( (float) a + (float) b + (float) c ) / 3; // ��� ���ϱ�

	min = a < b ? a : b; // a�� b ���ؼ� �� �ֱ�
	min = min < c ? min : c; // min�� ����� ���� c ���ؼ� �� �ֱ�

	max = a > b ? a : b; // a�� b ���ؼ� �� �ֱ� 
	max = max > c ? max : c; // max�� ����� ���� c ���ؼ� �� �ֱ� 

	printf("���� %d %d %d�� �հ�� %d �Դϴ�.\n", a, b, c, sum); // �հ� ���
	printf("���� %d %d %d�� ����� %.2f �Դϴ�.\n", a, b, c, ave); // ��� ���
	printf("���� %d %d %d �� �ּҰ��� %d �Դϴ�.\n", a, b, c, min); //min �� ���
	printf("���� %d %d %d �� �ִ밪�� %d �Դϴ�.\n", a, b, c, max); // max �� ���

	return 0;
}