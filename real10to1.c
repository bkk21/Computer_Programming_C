#include<stdio.h>
/*실수값 10개를 사용자로부터 입력 받아서 배열에 넣고 
큰수에서 작은 수 순서로 출력하는 프로그램을 작성하시오.*/
int main(void)
{
	int i, j, index;
	float real[10];
	float temp;
	
	printf("실수 10개를 입력하세요 : ");
	
	for(i=0; i<=9; i++)
	{
		scanf("%f", &real[i]);
	}

	for(i=0; i < 9; i++)
	{
		index = i;
		for(j=i+1; j<10; j++)
		{
			if(real[index] > real[j])
				index=j;
		}
		temp = real[i];
		real[i] = real[index];
		real[index] = temp;
	}

	printf("\n");
	for(i=9; i>=0; i--)
	{
		printf("%f\n", real[i]);
	}
	return 0;
}