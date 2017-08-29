/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Two of Project Euler
 * Date: August 28, 2017
 ****************************************************/

#include <stdio.h>
const long MAX_NUM = 4000000;
int main()
{
	long sum = 0;
	long val1 = 1;
	long val2 = 2;
	while(val1 < MAX_NUM)
	{
		if(val1%2 == 0)
		{
			sum += val1;
		}
		long tmp = val1;
		val1 = val2;
		val2 = tmp + val1;
	}
	printf("%d\n", sum);

	return 0;
}	
