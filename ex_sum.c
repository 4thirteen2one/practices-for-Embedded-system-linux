/* ex_sum.c */
#include<stdio.h>
#include"mysum.h"
int main()
{
	int x = 100;
	int s = 0;
	s = mysum(x);
	printf("sum = %d\n",s);
	return 0;
}
