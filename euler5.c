/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Five of Project Euler
 * Date: August 31, 2017
 ****************************************************/

#include <stdio.h>
const MAX_NUM = 20;
int main()
{
	int sum = 2;
	long i = MAX_NUM;
	int res = 1;
	while(res)
	//for(long i=20; i<MAX_NUM; i++)
	{
		for(long j =3; j<=MAX_NUM; j++)
		{
			if(i%j == 0)
			{
				sum += 1;
			}
			else
			{
				break;
			}
			if(sum == MAX_NUM)
			{
				printf("%d\n", i);
				res=0;
			}
		}
		sum = 2;
		i+=MAX_NUM;

	}
	//printf("%d\n", sum);

	return 0;
}	
