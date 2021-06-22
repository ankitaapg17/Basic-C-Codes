//Arrays in C
//Each element of an array is of same data type and carries the same size, i.e., int = 4 bytes.
//Elements of the array are stored at contiguous memory locations where the first element is stored at the smallest memory location.
//Elements of the array can be randomly accessed since we can calculate the address of each element of the array with the given base address and the size of the data element.

//Advantage of C Array

//1) Code Optimization: Less code to the access the data.
//2) Ease of traversing: By using the for loop, we can retrieve the elements of an array easily.
//3) Ease of sorting: To sort the elements of the array, we need a few lines of code only.
//4) Random Access: We can access any element randomly using the array.
//
//Disadvantage of C Array

//1) Fixed Size: Whatever size, we define at the time of declaration of the array, we can't exceed the limit.
//So, it doesn't grow the size dynamically like LinkedList which we will learn later.

#include<stdio.h>  
int main(){      
int i=0;    
int marks[5]={20,30,40,50,60};//declaration and initialization of array    
 //traversal of array    
for(i=0;i<5;i++){      
printf("%d \n",marks[i]);    
}    
return 0;  
}    


#include<stdio.h>  
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     
//traversing 2D array    
for(i=0;i<4;i++){    
 for(j=0;j<3;j++){    
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }//end of j    
}//end of i    
return 0;  
}    


//Passing array to a function
#include <stdio.h>  
void getarray(int arr[])  
{  
    printf("Elements of array are : ");  
    for(int i=0;i<5;i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  
int main()  
{  
   int arr[5]={45,67,34,78,90};  
   getarray(arr);  
   return 0;  
}  


//Passing array to a function as a pointer
#include <stdio.h>  
void printarray(char *arr)  
{  
    printf("Elements of array are : ");  
    for(int i=0;i<5;i++)  
    {  
        printf("%c ", arr[i]);  
    }  
}  
int main()  
{  
  char arr[5]={'A','B','C','D','E'};  
  printarray(arr);  
  return 0;  
}  

//How to return an array from a function
//Returning pointer pointing to the array


//There are three right ways of returning an array to a function:
//
//Using dynamically allocated array
//Using static array
//Using structure


//Returning array by passing an array which is to be returned as a parameter to the function.

#include <stdio.h>  
int *getarray(int *a)  
{  
    
    printf("Enter the elements in an array : ");  
    for(int i=0;i<5;i++)  
    {  
        scanf("%d", &a[i]);  
    }  
    return a;  
}  
int main()  
{  
  int *n;  
  int a[5];  
  n=getarray(a);  
  printf("\nElements of array are :");  
  for(int i=0;i<5;i++)  
    {  
        printf("%d", n[i]);  
    }  
    return 0;  
}  

//Returning array using malloc() function.

#include <stdio.h>  
#include<malloc.h>  
int *getarray()  
{  
    int size;  
    printf("Enter the size of the array : ");  
    scanf("%d",&size);  
    int *p= malloc(sizeof(size));  
    printf("\nEnter the elements in an array");  
    for(int i=0;i<size;i++)  
    {  
        scanf("%d",&p[i]);  
    }  
    return p;  
}  
int main()  
{  
   int *ptr;  
   ptr=getarray();  
   int length=sizeof(*ptr);  
   printf("Elements that you have entered are : ");  
   for(int i=0;ptr[i]!='\0';i++)  
    {  
      printf("%d ", ptr[i]);  
    }  
  return 0;  
}  


//Using Static Variable
#include <stdio.h>  
int *getarray()  
{  
  static int arr[7];  
  printf("Enter the elements in an array : ");  
  for(int i=0;i<7;i++)  
  {  
      scanf("%d",&arr[i]);  
  }  
  return arr;  
      
}  
int main()  
{  
  int *ptr;  
  ptr=getarray();  
  printf("\nElements that you have entered are :");  
  for(int i=0;i<7;i++)  
  {  
      printf("%d ", ptr[i]);  
  }  
}  


//Using Structure

//The structure is a user-defined data type that can contain a collection of items of different types.
//Now, we will create a program that returns an array by using structure.


#include <stdio.h>  
#include<malloc.h>  
struct array  
{  
    int arr[8];  
};  
struct array getarray()  
{  
    struct array y;  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<8;i++)  
    {  
        scanf("%d",&y.arr[i]);  
    }  
    return y;  
}  
int main()  
{  
  struct array x=getarray();  
  printf("Elements that you have entered are :");  
  for(int i=0;x.arr[i]!='\0';i++)  
  {  
      printf("%d ", x.arr[i]);  
  }  
    return 0;  
}  

/////////////////////////////////////////////////
//Passing array to function in C
//we know that the array_name contains the address of the first element. Here, we must notice that we need to 
//pass only the name of the array in the function which is intended to accept an array. The array defined as the 
//formal parameter will automatically refer to the array specified by the array name defined as an actual parameter

#include<stdio.h>  
int minarray(int arr[],int size){    
int min=arr[0];    
int i=0;    
for(i=1;i<size;i++){    
if(min>arr[i]){    
min=arr[i];    
}    
}//end of for    
return min;    
}//end of function    
    
int main(){      
int i=0,min=0;    
int numbers[]={4,5,7,3,8,9};//declaration of array    
  
min=minarray(numbers,6);//passing array with size    
printf("minimum number is %d \n",min);    
return 0;  
}    


#include<stdio.h>   
void Bubble_Sort(int[]);  
void main ()    
{    
    int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
    Bubble_Sort(arr);    
}    
void Bubble_Sort(int a[]) //array a[] points to arr.   
{  
int i, j,temp;     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",a[i]);    
    }  
}  


//To store the array returned from the function, we can define a pointer which points to that array.
//We can traverse the array by increasing that pointer since pointer initially points to the base address of the array. 
//Consider the following example that contains a function returning the sorted array.
#include<stdio.h>   
int* Bubble_Sort(int[]);  
void main ()    
{    
    int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
    int *p = Bubble_Sort(arr), i;  
    printf("printing sorted elements ...\n");  
    for(i=0;i<10;i++)  
    {  
        printf("%d\n",*(p+i));  
    }  
}    
int* Bubble_Sort(int a[]) //array a[] points to arr.   
{  
int i, j,temp;     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    return a;  
}  













