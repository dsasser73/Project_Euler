/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Seven of Project Euler
 * Note: Add -lm to compiling lines. Adds link to math libs
 * Date: September 1, 2017
 ****************************************************/

#include <stdio.h>
#include <math.h>
const MAX_NUM = 10001;
int main()
{
	int sum = 1;
	int i = 3;
	while(sum!=MAX_NUM)
	{
		if(isPrime(i))
		{
			sum += 1;
		}
		i+=2;
	}
	i=i-2;
	printf("%d\n", i);

	return 0;
}

int isPrime(long num)
{
	long lim = sqrt(num);
	if(num<=1)
		return 0;
	if(num%2==0 && num > 2)
		return 0;
	for(int i=3; i <= lim; i+=2)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}
