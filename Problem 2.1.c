//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

//要求的是数列项小于4000000（四百万）时所有 偶数项 的和 
#include <stdio.h>

long long int Fib(int n){

    if (n == 1){

        return 1;
    }
    else if (n == 2){

        return 2;
    }
    else {
        return (Fib(n - 1) + Fib(n - 2));
    }
}

int main()
{
    int i;

    long long int sum=0;

    for(i=2;Fib(i)<4000000;i = i + 2){

        
        	sum+=Fib(i);

    }
    printf("%lld",sum);

    return 0;
}
//sum = 5702886 
