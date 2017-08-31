/****************************************************
 * Author: David Sasser
 * Purpose: To complete Problem Four of Project Euler
 * Date: August 30, 2017
 ****************************************************/

#include <stdio.h>
int main()
{
	long ans = 0;
	int res = 0;
	for(int i = 999; i>=100; i--)
	{
		for(long j = i; j>=100; j--)
		{
			//printf("i: %d\n", i);
		       	//printf("j: %d\n", j);	
			long temp = j*i;
			if(isPalindrome(temp) && temp>ans)
			{
				ans = temp;
				break;
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}	

int isPalindrome(long num)
{
	int reverse = 0;
	int tempNum = (int) num;
	int rem;

	while(tempNum != 0)
	{
		rem = tempNum%10;
		reverse = reverse*10 + rem;
		tempNum /= 10;
	}
	if((int) num == reverse)
	{
		return 1;
	}
	return 0;
}
