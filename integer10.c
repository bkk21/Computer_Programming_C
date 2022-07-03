/*정수값 10개를 사용자로부터 입력 받아서 배열에 넣고 
그 중 가장 작은 값과 가장 큰 값을 출력하는 프로그램을 작성하시오.*/

#include<stdio.h>

int main(void)

{
	int integer[10];
	int MAX, MIN;
	int i, j, index;
	int temp;

	printf("정수 값 10개를 입력하세요 : ");

	for(i=0; i<=9; i++)
	{
		scanf("%d",&integer[i]);
	}

	for(i=0; i < 9; i++)
	{
		index = i;
		for(j = i+1; j < 10; j++)
		{
			if(integer[index] > integer[j])
				index = j;
		}
	temp = integer[i];
	integer[i] = integer[index];
	integer[index] = temp;
	}
	
	MAX = integer[9];
	MIN = integer[0];

	printf("가장 큰 값 : %d\n", MAX);
	printf("가장 작은 값 : %d\n", MIN);

	return 0;
}