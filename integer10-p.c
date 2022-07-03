/* 입력받은 10개 정수형 배열의 원소 중 가장 큰 값을 갖는 원소를 찾는 프로그램을 작성하시오. 
단, 배열의 원소 중 가장 큰 값을 갖는 원소를 찾을 때 포인터를 이용하시오. */


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
			if(*(integer+index) > *(integer+j))
				index = j;
		}
	temp = *(integer+i);
	*(integer+i) = *(integer+index);
	*(integer+index) = temp;
	}
	
	MAX = *(integer+9);

	printf("가장 큰 값 : %d\n", MAX);

	return 0;
}