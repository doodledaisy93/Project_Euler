//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	
	for(i = 1;i < 101;i++){
		sum1 += i;
	}
	sum1 = sum1 * sum1;
	for(i = 1;i < 101;i++){
		sum2 += pow(i,2);
	}
	printf("%d",sum1 - sum2);
	return 0;
}

