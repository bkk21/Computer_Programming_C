/*사용자로부터 순서대로 시,분,초를 입력 받아 몇 초인지 계산하는 프로그램을 작성하시오.*/
#include<stdio.h>

int main(void)
{
	int h1; // 입력받을 시 
	int h2; // 계산할 시
	int m1; // 입력받을 분
	int m2; // 계산할 분 
	int s1; // 입력받을 초
	int seconds; // 최종 초

	printf("순서대로 시, 분, 초를 입력 하세요 : ");
	scanf("%d %d %d", &h1, &m1, &s1);

	h2 = h1*3600;
	m2 = m1 * 60;
	seconds = h2 + m2 + s1;

	printf("%d시 %d분 %d초는 %d초 입니다.", h1, m1, s1, seconds);

	return 0;
}