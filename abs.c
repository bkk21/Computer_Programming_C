/* �Ǽ� ���� ���ڷ� �޾Ƽ� ���밪�� ���ϴ� Absolute �Լ��� ���� �Ͽ�
���� �Ǵ� ��� �Է½� ���밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(math ���̺귯���Լ�(abs)�� ������� ����) */

#include<stdio.h>

float Absolute(float a) //�Լ� ����
{
	float num1;
	if (a < 0) //�Ǽ��� ������ ��
	{
		num1 = (-1) * a;
	}
	else //�Ǽ��� ����� ��
	{
		num1 = a;
	}
	return num1; //�� ��ȯ
}

int main(void) //mian �Լ�
{
	float num2;
	float abs;
	printf("�Ǽ��� �Է��ϼ��� : "); //�Ǽ� �Է�
	scanf("%f", &num2);

	abs = Absolute(num2); //�Լ� ȣ��
	printf("%g�� ������ %g�Դϴ�", num2, abs); //�� ���

	return 0;
}