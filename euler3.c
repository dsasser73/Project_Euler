/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Three of Project Euler
 * Note: Add -lm to compiling lines. Adds link to math libs
 * Date: August 30, 2017
 ****************************************************/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
const long MAX_NUM = 600851475143;
int main()
{
	long ans = 0;
	long i;
	for(i=sqrt(MAX_NUM); i>0; i--)
	{
		int res = isPrime(i);
		if(MAX_NUM%i == 0 && res)
		{
			ans = i;
			break;
		}
	}
	printf("%d\n", ans);

	return 0;
}	

int isPrime(long num)
{
	long lim = sqrt(num);
	if(num<=1)
		return 0;
	if(num%2==0 && num > 2)
		return 0;
	for(int i=3; i < lim; i+=2)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}
