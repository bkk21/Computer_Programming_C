#include<stdio.h>

int main(void)
{
	int a, b, c; // 값을 저장할 변수
	int sum; //합계
	float ave; // 평균
	int max; // 최대
	int min; //최소

	printf("정수 3개를 입력하세요 :"); // 정수 입력 받기
	scanf(" %d %d %d", &a, &b, &c); // 정수 입력 받기

	sum = a + b + c; // 합계 구하기
	
	ave = ( (float) a + (float) b + (float) c ) / 3; // 평균 구하기

	min = a < b ? a : b; // a와 b 비교해서 값 넣기
	min = min < c ? min : c; // min에 저장된 값과 c 비교해서 값 넣기

	max = a > b ? a : b; // a와 b 비교해서 값 넣기 
	max = max > c ? max : c; // max에 저장된 값과 c 비교해서 값 넣기 

	printf("정수 %d %d %d의 합계는 %d 입니다.\n", a, b, c, sum); // 합계 출력
	printf("정수 %d %d %d의 평균은 %.2f 입니다.\n", a, b, c, ave); // 평균 출력
	printf("정수 %d %d %d 중 최소값은 %d 입니다.\n", a, b, c, min); //min 값 출력
	printf("정수 %d %d %d 중 최대값은 %d 입니다.\n", a, b, c, max); // max 값 출력

	return 0;
}