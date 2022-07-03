#include <stdio.h>
int main (void)
{
	float m2; // 입력받은 면적을 저장할 변수
	float area1; // 입력받은 면적을 평수으로 계산하여 저장할 변수
	int area2; // 계산한 결과를 형 변환해서 저장할 변수

	printf("면적을 입력해주세요(m2):"); // 면적 입력받기
	scanf("%f", &m2); // 면적 입력받기 

	area1 = m2 / 3.3058; //면적 평수 계산
	area2 = area1; // float를 int 값으로 저장

	printf("면적 %fm2는 %d평 입니다.\n", m2, area2); // 값 출력
	
	return 0;

}