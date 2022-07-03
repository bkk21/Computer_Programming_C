/*사용자로부터 하나의 정수(N)를 입력받아서, 1부터 N까지의 합계를 for문을 이용해서 구하고, 1부터 N까지의 홀수의 합계는 while문을 이용해서 구하고, 
1부터 N까지의 짝수의 합계는 do while문을 이용해서 구하시오.*/

#include<stdio.h>
int main(void)
{

	int N; //입력받을 정수
	int SN; //계산할 정수
	int ON; // 계산할 정수
	int EN; // 계산할 정수
	int sum_N = 0; //합계 
	int odd_N = 0; //홀수 합계
	int even_N = 0; //짝수 합계

	printf("하나의 정수를 입력하세요 : "); //값 입력 받기
	scanf("%d", &N); //값 입력받기 

	for(SN=1; SN <= N; SN++) //1부터 입력받은 값까지 더하기
	{
		sum_N += SN;
	}

	ON=1;
	while (ON <= N) //1부터 입력받은 값의 홀수만 더하기
	{
		if( ON % 2 != 0)
		{
			odd_N += ON;
		}
		ON++;
	}

	EN=1;
	do { //1부터 입력받은 값의 짝수만 더하기
		if(EN % 2 ==0)
		{
			even_N += EN;
		}
		EN++;

	}while( EN <= N);

	
	printf("1부터 %d까지의 합계는 %d입니다.\n", N, sum_N);
	printf("1부터 %d까지의 홀수의 합계는 %d입니다.\n", N, odd_N);
	printf("1부터 %d까지의 짝수의 합계는 %d입니다.\n", N, even_N);

	return 0;
		
	}

