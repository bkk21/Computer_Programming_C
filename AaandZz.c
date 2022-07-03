/*입력받은 문자열을 대문자는 소문자로, 
소문자는 대문자로 변환하는 프로그램을 작성하시오.*/

#include<stdio.h>

int main(void)
{
	char s1[100];
	char s2[100];
	int i;
	int chlen;

	printf("문자열을 입력하세요 : ");
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

	printf("입력한 문자열 : %s\n",s1);
	printf("변환한 문자열 : %s\n",s2);
	
	return 0;
}