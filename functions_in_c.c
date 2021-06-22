//using functions

////////////////with return functions


//C function declaration, function call
//Call by value, call by reference
//C function arguments and return values

//Types of C functions- Library and user-defined-
//Command line arguments in C

//To find the square of any number using the function-
//To swap two numbers using function
//To find if a number is even or odd using function-


//Display all prime numbers between two intervals
//Check prime and Armstrong number by making functions
//Check whether a number can be expressed as the sum of two prime numbers


////////////////with arrays
//To get the largest element of an array using function
//To check if two given strings are an anagram
//To find out max and min of some values using function



//Example for Function without argument and with return value
#include<stdio.h>  
int sum();  
void main()  
{  
    printf("Going to calculate the area of the square\n");  
    float area = square();  
    printf("The area of the square: %f\n",area);  
}  
int square()  
{  
    float side;  
    printf("Enter the length of the side in meters: ");  
    scanf("%f",&side);  
    return side * side;  
}  



//Example for Function with argument and without return value
#include<stdio.h>  
void sum(int, int);  
void main()  
{  
    int a,b,result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    sum(a,b);  
}  
void sum(int a, int b)  
{  
    printf("\nThe sum is %d",a+b);      
}  


//to calc average of 5 numbers
#include<stdio.h>  
void average(int, int, int, int, int);  
void main()  
{  
    int a,b,c,d,e;   
    printf("\nGoing to calculate the average of five numbers:");  
    printf("\nEnter five numbers:");  
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);  
    average(a,b,c,d,e);  
}  
void average(int a, int b, int c, int d, int e)  
{  
    float avg;   
    avg = (a+b+c+d+e)/5;   
    printf("The average of given five numbers : %f",avg);  
}  



//Example for Function with argument and with return value

#include<stdio.h>  
int sum(int, int);  
void main()  
{  
    int a,b,result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  
    printf("\nThe sum is : %d",result);  
}  
int sum(int a, int b)  
{  
    return a+b;  
}  


//To check a number is odd or even
#include<stdio.h>  
int even_odd(int);  
void main()  
{  
 int n,flag=0;  
 printf("\nGoing to check whether a number is even or odd");  
 printf("\nEnter the number: ");  
 scanf("%d",&n);  
 flag = even_odd(n);  
 if(flag == 0)  
 {  
    printf("\nThe number is odd");  
 }  
 else   
 {  
    printf("\nThe number is even");  
 }  
}  
int even_odd(int n)  
{  
    if(n%2 == 0)  
    {  
        return 1;  
    }  
    else   
    {  
        return 0;  
    }  
}  

//C library functions
//1 stdio.h	This is a standard input/output header file. It contains all the library functions regarding standard input/output.
//2	conio.h	This is a console input/output header file.
//3	string.h	It contains all string related library functions like gets(), puts(),etc.
//4	stdlib.h	This header file contains all the general library functions like malloc(), calloc(), exit(), etc.
//5	math.h	This header file contains all the math operations related functions like sqrt(), pow(), etc.
//6	time.h	This header file contains all the time-related functions.
//7	ctype.h	This header file contains all character handling functions.
//8	stdarg.h	Variable argument functions are defined in this header file.
//9	signal.h	All the signal handling functions are defined in this header file.
//10	setjmp.h	This file contains all the jump functions.
//11	locale.h	This file contains locale functions.
//12	errno.h	This file contains error handling functions.
//13	assert.h	This file contains diagnostics functions.



//CALL BY VALUE:
//In call by value method, the value of the variable is passed to the function as parameter.
//The value of the actual parameter can not be modified by formal parameter.
//Different Memory is allocated for both actual and formal parameters. Because, value of actual parameter is copied to formal parameter.
//Note:
//
//Actual parameter – This is the argument which is used in function call.
//Formal parameter – This is the argument which is used in function definition



//CALL BY REFERENCE:
//In call by reference method, the address of the variable is passed to the function as parameter.
//The value of the actual parameter can be modified by formal parameter.
//Same memory is used for both actual and formal parameters since only address is used by both parameters.
//EXAMPLE PROGRAM FOR C FUNCTION (USING CALL BY REFERENCE):
//In this program, the address of the variables “m” and “n” are passed to the function “swap”.
//These values are not copied to formal parameters “a” and “b” in swap function.
//Because, they are just holding the address of those variables.
//This address is used to access and change the values of the variables.



//DO YOU KNOW HOW MANY VALUES CAN BE RETURN FROM C FUNCTIONS?
//Always, Only one value can be returned from a function.
//If you try to return more than one values from a function, only one value will be returned that appears at the right most place of the return statement.
//For example, if you use “return a,b,c” in your function, value for c only will be returned and values a, b won’t be returned to the program.
//In case, if you want to return more than one values, pointers can be used to directly change the values in address instead of returning those values to the function.




//Command line codes
//main() function of a C program accepts arguments from command line or from other shell scripts by
//following commands. They are: -
//argc
//argv[]
//where,
//
//argc    – Number of arguments in the command line including program name
//argv[]   – This is carrying all the arguments


//In real time application, it will happen to pass arguments to the main program itself.
//These arguments are passed to the main () function while executing binary file from command line.
//For example, when we compile a program (test.c), we get executable file in the name “test”.
//Now, we run the executable “test” along with 4 arguments in command line like below.
//./test this is a program

//Where,
//argc             =       5
//argv[0]         =       “test”
//argv[1]         =       “this”
//argv[2]         =       “is”
//argv[3]         =       “a”
//argv[4]         =       “program”
//argv[5]         =       NULL



#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])   //  command line arguments
{
if(argc!=5) 
{
   printf("Arguments passed through command line " \
          "not equal to 5");
   return 1;
}
 
   printf("\n Program name  : %s \n", argv[0]);
   printf("1st arg  : %s \n", argv[1]);
   printf("2nd arg  : %s \n", argv[2]);
   printf("3rd arg  : %s \n", argv[3]);
   printf("4th arg  : %s \n", argv[4]);
   printf("5th arg  : %s \n", argv[5]);
 
return 0;
}


//Prime numbers between two numbers
#include <stdio.h>
int checkPrimeNumber(int n);
int main() {
    int n1, n2, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {

        // flag will be equal to 1 if i is prime
        flag = checkPrimeNumber(i);

        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n) {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}



