#include<stdio.h>
/*�Ǽ��� 10���� ����ڷκ��� �Է� �޾Ƽ� �迭�� �ְ� 
ū������ ���� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
int main(void)
{
	int i, j, index;
	float real[10];
	float temp;
	
	printf("�Ǽ� 10���� �Է��ϼ��� : ");
	
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