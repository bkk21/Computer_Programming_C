/*�Է¹��� ���ڿ��� ���Ͽ� �������� �� ���ڿ��� ���� ����Ͻÿ�.
(���� ���ڿ��� �������� ����, �������� �� ���ڿ��� ���� ����ÿ�.)*/

#include<stdio.h>

int main(void)
{
	int i; 
	int str1_len;
	int j;
	char str1[100];
	char str2[100];
	
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str1);
	str1_len = strlen(str1);
	
	for (i = str1_len-1, j=0; i >= 0; i--) 
	{
		str2[j] = str1[i];
		j++;
	}

	str2[str1_len] = '\0';
	printf("�Է¹��� �� : %s\n", str1);
	printf("�������� �� : %s\n", str2);

	return 0;
}