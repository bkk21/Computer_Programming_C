/*�Է¹��� ���ڿ��� �빮�ڴ� �ҹ��ڷ�, 
�ҹ��ڴ� �빮�ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include<stdio.h>

int main(void)
{
	char s1[100];
	char s2[100];
	int i;
	int chlen;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(s1);
	chlen = strlen(s1);
	strcpy(s2, s1);

	for(i=0; i < chlen; i++)
	{
		if(s2[i] >= 'A' && s2[i] <= 'Z')
			s2[i] = s2[i] + 32;
		
		else if(s2[i] >= 'a' && s2[i] <= 'z')
			s2[i] = s2[i] - 32;
	}

	printf("�Է��� ���ڿ� : %s\n",s1);
	printf("��ȯ�� ���ڿ� : %s\n",s2);
	
	return 0;
}