#include<stdio.h>

int main(void)
{
	int h1, h2;
	int m1, m2;
	int s1, s2;

	printf("�ú��ʸ� �Է��ϼ��� : ");
	scanf("%d %d %d", &h1, &m1, &s1);

	h2 = h1 * 3600;
	m2 = m1 * 60;

	s2 = h2 + m2 + s1;

	printf("%d�� %d�� %d�ʴ� %d�� �Դϴ�.\n", h1, m1, s1, s2);

	return 0;
}