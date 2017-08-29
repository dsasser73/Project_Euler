/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem One of Project Euler
 * Date: August 28, 2017
 ****************************************************/

#include <stdio.h>
const MAX_NUM = 1000;
int main()
{
	int sum = 0;
	int i;
	for(long i=3; i<MAX_NUM; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return 0;
}	
