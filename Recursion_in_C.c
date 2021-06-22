//Problems on recursion


//To convert decimal to binary using recursion

#include <stdio.h>

long convertBinary(int decNo)
{
	static long biNo,rem,factor=1;
	if(decNo !=0)
	{
		rem = decNo % 2;
		biNo = biNo + rem*factor;
		factor=factor*10;
		convertBinary(decNo/2);
	}
	return biNo;
	
	
}

int main()
{
	long biNo;
	int decNo;
	
	printf("Enter any decimal number:");
	scanf("%d",&decNo);
	
	biNo = convertBinary(decNo);
	printf("The Binary value of decimal no. %d is: %ld",decNo,biNo);
	
}



//Fibonacci series with recursive function
#include<stdio.h>
#include<stdlib.h>

int fib(int);//check
int main()
{
	int i,j;
	printf("\n Enter the number of terms:");
	scanf("%d",&i);
	if(i<0)
	{
		printf("not valid");
	}
	else
	{
		printf("\n Fibonacci sequence for %d is",i);
		for(j=0;j<=i;j++)
		{
			printf("%d",fib(j));
		}
	}
	
	
	
}

int fib(int val)
{
	if(val<=2)
	return 1;
	else
	return (fib(val-1)+fib(val-2));
}

//To calculate HCF of two numbers using recursive function
#include <stdio.h>
int gcd(int,int);

int main()
{
	int i,j;
	printf("\n Enter the numbers:");
	scanf("%d %d",&i,&j);
	printf("\n The GCD of %d and %d is %d",i,j,gcd(i,j));
}

int gcd(int a,int b)
{
	int remainder;
	remainder=a%b;
	if(remainder==0)
	return b;
	else
	return gcd(b,remainder);
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find(int n, int a, int b, int c) {
  //Write your code here.
  
  if(n==1)
  {
      return a;
  }
  else if(n==2)
  {
      return b;
  }
  else if(n==3)
  {
      return c;
  }
  else 
  {
      return(find(n-1,a,b,c) + find(n-2, a, b, c)+ find(n-3, a, b, c));
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

//Write a recursive function in C to find the summation of 1st N natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
	int number,result;
	printf("Enter a positive integer:");
	scanf("%d",&number);
	result=sum(number);
	printf("sum=%d",result);
}

int sum(int num)
{
	if(num!=0)
	return num+sum(num-1);
	else
	return num;
}


















