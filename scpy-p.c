/* 문자배열을입력받아 또 다른 문자 배열로 복사하는 프로그램을 작성하시오.
단, 문자열을 복사할 때 문자 배열의 원소를 가리키는 포인터를 이용하시오.
(주의사항:라이브러리 함수인 strcpy 함수를 이용하지 말고 구현하시오.) */

#include<stdio.h>

int main(void)

{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };
	int i;
	int chlen;

	printf("입력하세요 : ");	

	gets(ch1);

	chlen = strlen(ch1);

	for (i = 0; i < chlen; i++)
	{
		ch2[i] = *(ch1 + i);
	}

	printf("입력 : %s\n", ch1);
	printf("복사 : %s\n", ch2);


	return 0;
}