//Pointers

//To show the basic declaration of pointer
//To add two numbers using pointer
//To add numbers using call by reference
//To find the maximum number between two numbers using a pointer
//To store n elements in an array and print the elements using pointer
//To print all permutations of a given string using pointers
//To find the largest element using Dynamic Memory Allocation
//To calculate the length of the string using a pointer
//To swap elements using call by reference
//To find the factorial using pointer
//To count the number of vowels and consonants in a string using pointer

//To sort an array using pointer
//To show a function returning using pointer
//To compute the sum of all elements in an array using pointers
//To print the elements of an array in reverse order
//To print all the alphabets using a pointer
//To print a string in reverse using a pointer

#include <stdio.h>
void main(void)
{
    int m=10,n,o;
    int *z=&m ;
    printf("\n\n z stores the address of m  = %p\n",  z); // z is a pointer so %p would print the address
	printf("\n *z stores the value of m = %i\n",   *z); 
	
	
//Compute sum of two numbers using pointers	

   int fno, sno, *ptr, *qtr, sum;
   
   printf("\n\n Pointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);   
 
   ptr = &fno;
   qtr = &sno;
 
   sum = *ptr + *qtr;
 
   printf(" The sum of the entered numbers is : %d\n\n",sum);
 
   return 0;
}

//Passing pointer to functions
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int *temp; 
    *temp = *a; 
    *a = *a + *b;
    *b = abs(*temp - *b) ;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//Swapping using pointer
#include <stdio.h>
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	int a,b;
	printf("a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swapping, a is %d and b is %d",a,b);
}






//Add two numbers using call by reference

#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}




#include<stdio.h>  
int main(){  
int number=50;    
int *p;      
p=&number;//stores the address of number variable    
printf("Address of p variable is %x \n",p); // p contains the address of the number therefore printing p gives the address of number.     
printf("Value of p variable is %d \n",*p); // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.    
return 0;  
}    

//A pointer that is not assigned any value but NULL is known as the NULL pointer. 
//If you don't have any address to be specified in the pointer at the time of declaration, 
//you can assign NULL value. It will provide a better approach.
//
//int *p=NULL;

//Pointer to array
int arr[10];  
int *p[10]=&arr; // Variable p of type pointer is pointing to the address of an integer array arr.  

//Pointer to a function
void show (int);  
void(*p)(int) = &display; // Pointer p is pointing to the address of a function  

//Pointer to structure
struct st {  
    int i;  
    float f;  
}ref;  
struct st *p = &ref;  


//Pointer arithmetic in C
//If we increment a pointer by 1, the pointer will start pointing to the immediate next location.

//Traversing an array by using pointer
#include<stdio.h>  
void main ()  
{  
    int arr[5] = {1, 2, 3, 4, 5};  
    int *p = arr;  
    int i;  
    printf("printing array elements...\n");  
    for(i = 0; i< 5; i++)  
    {  
        printf("%d  ",*(p+i));  
    }  
}  

//C Pointer Subtraction
//Address2 - Address1 = (Subtraction of two addresses)/size of data type which pointer points  


#include<stdio.h>  
void main ()  
{  
    int i = 100;   
    int *p = &i;  
    int *temp;  
    temp = p;   
    p = p + 3;  
    printf("Pointer Subtraction: %d - %d = %d",p, temp, p-temp);  
}  
//Output
//Pointer Subtraction: 1030585080 - 1030585068 = 3

//Pointer to function in C
#include<stdio.h>  
int addition ();  
int main ()  
{  
    int result;   
    int (*ptr)();  
    ptr = &addition;  
    result = (*ptr)();  
    printf("The sum is %d",result);  
}  
int addition()  
{  
    int a, b;   
    printf("Enter two numbers?");  
    scanf("%d %d",&a,&b);  
    return a+b;  
}  


//Dangling pointer occurs at the time of the object destruction when the object is deleted 
//or de-allocated from memory without modifying the value of the pointer. 
//In this case, the pointer is pointing to the memory, which is de-allocated

//The statement free(ptr) de-allocates the memory as shown in the below image with a cross sign,
//and 'ptr' pointer becomes dangling as it is pointing to the de-allocated memory.

//If we assign the NULL value to the 'ptr', then 'ptr' will not point to the deleted memory.
//Therefore, we can say that ptr is not a dangling pointer, 








