/*Ex03_09.c*/
#include<stdio.h>
#include<limits.h>

int main (void)
{
	float pi1 = 3.141592653589793;
	double pi2 = 3.141592623589793;

	printf("float 형의 pi 값 : %f\n", pi1);
	printf("double 형의 pi 값 : %f\n", pi2);

	printf("float 형의 pi 값 : %30.25f\n", pi1);
	printf("double 형의 pi 값 : %30.25f\n", pi2);

	return 0;
}