/* �Ǽ���10���� ����ڷκ��� �Է� �޾� �迭�� �ְ� 
����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. */

#include<stdio.h>
int main(void)
{
	int i;
	float real[10];
	float sum = 0;
	float ave = 0;
	
	printf("�Ǽ� 10���� �Է��ϼ��� : ");
	
	for(i=0; i<=9; i++)
	{
		scanf("%f", &real[i]);
	}

	for(i=0; i<=9; i++)
	{
		sum += real[i];
	}

	ave = sum / (float) 10;

	printf("�Ǽ� �� 10���� ��� : %f", ave);
	
	return 0;
}