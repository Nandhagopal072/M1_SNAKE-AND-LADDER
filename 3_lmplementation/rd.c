
#include<stdio.h>
#include<stdlib.h>
int rd()
{
	int rem;
	A:rem=rand()%7;
	if(rem==0)
		goto A;
	else
		return rem;
}