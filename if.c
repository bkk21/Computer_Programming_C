/*����ڷκ��� ������� ��,��,�ʸ� �Է� �޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include<stdio.h>

int main(void)
{
	int h1; // �Է¹��� �� 
	int h2; // ����� ��
	int m1; // �Է¹��� ��
	int m2; // ����� �� 
	int s1; // �Է¹��� ��
	int seconds; // ���� ��

	printf("������� ��, ��, �ʸ� �Է� �ϼ��� : ");
	scanf("%d %d %d", &h1, &m1, &s1);

	h2 = h1*3600;
	m2 = m1 * 60;
	seconds = h2 + m2 + s1;

	printf("%d�� %d�� %d�ʴ� %d�� �Դϴ�.", h1, m1, s1, seconds);

	return 0;
}