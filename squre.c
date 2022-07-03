/* X의 y승을 구하는 함수를 정의하시오. 이때 X, y, X의 y승은 모두 정수이다.
( X, y를 입력하면 X의 y승을 출력한다.) (math 라이브러리함수(pow)를 사용하지 말것) */

#include<stdio.h>

int Square(int a, int b)
{
	int num;
	int i;

	num = a; // 입력 받은 a 값 저장, 1승일 때는 num 값 출력
	for (i=2; i <= b; i++) //2승 일 때 부터 입력받은 수가 될 때까지 곱하기 계산
		num *= a; //num에 저장된 값에 a를 곱함

	return num; // 값 반환
}

int main(void)
{
	int x,y, result; 

	printf("제곱할 수를 입력해주세요(x^y일 시 x y 순서로 입력할 것) : "); // 입력받기
	scanf("%d %d", &x, &y);
	
	result = Square(x, y); //함수 호출
	printf("%d의 %d승의 값은 %d입니다.\n", x, y, result); // 값 출력

	return 0;
}