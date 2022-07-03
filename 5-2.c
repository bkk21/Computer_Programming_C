/*사용자로부터 하나의 정수(N)를 입력받아서, 0!, 1!, 2!,…(N-1)!, N!를 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>
int main(void)
{

	int N; //입력받을 정수
	int f_N; //계산할 정수
	int factorial =1; //계산 결과

	printf("하나의 정수를 입력하세요 : "); //입력받기
	scanf("%d", &N); //입력받기

	if(N==0) //입력받은 정수가 0일때
	{
		printf("0!의 값은 1입니다.\n"); //출력
	}

	else //입력받은 정수가 0이 아닐 떄
	{

		printf("0! = 1\n");		
		for(f_N =1; f_N <= N; f_N++) //저장된 변수 값이 1보다 크거나 같을 때까지 반복하며, 한 번 끝날 때마다 값의 1을 줄임
		{
			factorial *= f_N; //조건에 맞으면 원래 저장된 값에 값을 곱해서 다시 저장
			printf("%d! = %d\n", f_N, factorial);

		}
	}

	return 0;
		
	}

