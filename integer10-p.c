/* �Է¹��� 10�� ������ �迭�� ���� �� ���� ū ���� ���� ���Ҹ� ã�� ���α׷��� �ۼ��Ͻÿ�. 
��, �迭�� ���� �� ���� ū ���� ���� ���Ҹ� ã�� �� �����͸� �̿��Ͻÿ�. */


#include<stdio.h>

int main(void)

{
	int integer[10];
	int MAX, MIN;
	int i, j, index;
	int temp;

	printf("���� �� 10���� �Է��ϼ��� : ");

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

	printf("���� ū �� : %d\n", MAX);

	return 0;
}