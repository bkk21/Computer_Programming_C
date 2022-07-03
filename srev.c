/*입력받은 문자열에 대하여 역순으로 된 문자열을 만들어서 출력하시오.
(원본 문자열은 변경하지 말고, 역순으로 된 문자열을 새로 만드시오.)*/

#include<stdio.h>

int main(void)
{
	int i; 
	int str1_len;
	int j;
	char str1[100];
	char str2[100];
	
	printf("문자열을 입력하세요 : ");
	gets(str1);
	str1_len = strlen(str1);
	
	for (i = str1_len-1, j=0; i >= 0; i--) 
	{
		str2[j] = str1[i];
		j++;
	}

	str2[str1_len] = '\0';
	printf("입력받은 값 : %s\n", str1);
	printf("역순변경 값 : %s\n", str2);

	return 0;
}