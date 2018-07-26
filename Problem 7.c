//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?


#include<stdio.h>
int main()
{
	int x;
	int count=0;
	for(x=2;count<10001;x++){
	int isprime=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;
		}
	}if(isprime==0){
		
	}else{
	    count++;
		printf("%d\t",x);
		if(count%5==0){
			printf("\n");
		}
		
 }
	 
	 }printf("%d\n",x-1);
	 return 0;
}
