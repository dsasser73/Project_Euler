/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Six of Project Euler
 * Date: August 31, 2017
 ****************************************************/

#include <stdio.h>
const MAX_NUM = 100;
int main()
{
	long sumSquares = 0; 
	long squareSum = (MAX_NUM/2)*(MAX_NUM + 1)*(MAX_NUM/2)*(MAX_NUM + 1);
	for(long i=1; i<=MAX_NUM; i++)
	{
		sumSquares += (i*i);
		//if MAX_NUM is an odd number
		//squareSum += i;
	}

	long ans = squareSum - sumSquares;
	//if MAX_NUM is an odd number
	//long ans = (squareSum*squareSum) - sumSquares;
	
	printf("%d\n", ans);

	return 0;
}	
