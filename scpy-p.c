/* ���ڹ迭���Է¹޾� �� �ٸ� ���� �迭�� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, ���ڿ��� ������ �� ���� �迭�� ���Ҹ� ����Ű�� �����͸� �̿��Ͻÿ�.
(���ǻ���:���̺귯�� �Լ��� strcpy �Լ��� �̿����� ���� �����Ͻÿ�.) */

#include<stdio.h>

int main(void)

{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };
	int i;
	int chlen;

	printf("�Է��ϼ��� : ");	

	gets(ch1);

	chlen = strlen(ch1);

	for (i = 0; i < chlen; i++)
	{
		ch2[i] = *(ch1 + i);
	}

	printf("�Է� : %s\n", ch1);
	printf("���� : %s\n", ch2);


	return 0;
}