/*사용자로부터 하나의 정수(N)를 입력받아서, 0!, 1!, 2!,…(N-1)!, N!를 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>
int main(void)
{

	int N; //입력받을 정수
	int f_N; //계산할 정수
	int factorial =1; //계산 결과

	printf("하나의 정수를 입력하세요 : "); //입력받기
	scanf("%d", &N); //입력받기

	printf("0! = 1\n");	//f_N을 0으로 초기화하면 모든 값이 0이 되기때문에 0!은 따로 출력	
	for(f_N =1; f_N <= N; f_N++) //조건에 맞으면 실행 
	{
		factorial *= f_N; //조건에 맞으면 원래 저장된 값에 값을 곱해서 다시 저장
		printf("%d! = %d\n", f_N, factorial); //현재까지 저장된 값 출력 
	}
	
	return 0;
		
	}
