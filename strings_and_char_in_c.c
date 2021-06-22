//Strings and characters in C
#include<stdio.h>
 
void function(int, int[], char[]);
 
int main()
{
      int a = 20;
      int arr[5] = {10,20,30,40,50};  
      char str[30] = "\"fresh2refresh\"";
 
      function(a, &arr[0], &str[0]);
      return 0;
}
 
void function(int a, int *arr, char *str)
{
    int i;
    printf("value of a is %d\n\n",a);  
    for (i=0;i<5;i++)
      {
         // Accessing each variable
         printf("value of arr[%d] is %d\n",i,arr[i]);  
      }
    printf("\nvalue of str is %s\n",str);  
}


//In this program, integer, array and string are passed as arguments to the function.
//The return type of this function is “int” and value of the variable “a” is returned from the function.
//The values for array and string are modified inside the function itself.

#include<stdio.h>
#include<string.h>
int function(int, int[], char[]);
 
int main()
{
      int i, a = 20;
      int arr[5] = {10,20,30,40,50};  
      char str[30] = "\"fresh2refresh\"";
 
      printf("    ***values before modification***\n");  
      printf("value of a is %d\n",a);  
 
      for (i=0;i<5;i++)
      {
         // Accessing each variable
         printf("value of arr[%d] is %d\n",i,arr[i]);  
      }
      printf("value of str is %s\n",str); 
      printf("\n    ***values after modification***\n"); 
      a= function(a, &arr[0], &str[0]);
      printf("value of a is %d\n",a);  
      for (i=0;i<5;i++)
      {
         // Accessing each variable
         printf("value of arr[%d] is %d\n",i,arr[i]);  
      }
      printf("value of str is %s\n",str); 
      return 0;
}
 
int function(int a, int *arr, char *str)
{
    int i;
 
    a = a+20;
    arr[0] = arr[0]+50;
    arr[1] = arr[1]+50;
    arr[2] = arr[2]+50;
    arr[3] = arr[3]+50;
    arr[4] = arr[4]+50;
    strcpy(str,"\"modified string\"");
 
    return a;
 
}



////////////////////////////////
int main() 
{
    char c;
    char str[20];
    char s[100];
    
    
    scanf("%c",&c);
    printf("%c\n",c);
    
    scanf("%s",str);
    printf("%s\n",str);
    
    scanf("%s",s);
    printf("%[^\n]%*c", s);
    

    return 0;
}

/////////////////////
int main() {
    char ch;
    char s[20], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}



#include<stdio.h>  
#include <string.h>    
int main()
{    
   char ch[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};    
   char ch2[11]="javatpoint";    
    
   printf("Char Array Value is: %s\n", ch);    
   printf("String Literal Value is: %s\n", ch2);    
   return 0;    
}    


#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    int i = 0;   
    int count = 0;  
    while(i<11)  
    {  
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
    printf("The number of vowels %d",count);  
}  


#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    int i = 0;   
    int count = 0;  
    while(s[i] != NULL)  
    {  
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
    printf("The number of vowels %d",count);  
}  




//Here we must also notice that we do not need to use address of (&) operator in scanf to store a string since string s is an array of characters and the name of the array, 
//i.e., s indicates the base address of the string (character array) therefore we need not use & with it.

#include<stdio.h>  
void main ()  
{  
    char s[20];  
    printf("Enter the string?");  
    scanf("%s",s);  
    printf("You entered %s",s);  
}  


#include<stdio.h>  
void main ()  
{  
    char s[20];  
    printf("Enter the string?");  
    scanf("%[^\n]s",s);  
    printf("You entered %s",s);  
}  

//Instead of using scanf, we may use gets() which is an inbuilt function defined in a header file string.h.
// The gets() is capable of receiving only one string at a time.


#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    char *p = s; // pointer p is pointing to string s.   
    printf("%s",p); // the string javatpoint is printed if we print p.  
}  


#include<stdio.h>  
void main ()  
{  
    char *p = "hello javatpoint";  
    printf("String p: %s\n",p);  
    char *q;  
    printf("copying the content of p into q...\n");  
    q = p;  
    printf("String q: %s\n",q);  
}  


//Once a string is defined, it cannot be reassigned to another set of characters.
// However, using pointers, we can assign the set of characters to the string
#include<stdio.h>  
void main ()  
{  
    char *p = "hello javatpoint";  
    printf("Before assigning: %s\n",p);  
    p = "hello";  
    printf("After assigning: %s\n",p);  
}  

//The gets() function enables the user to enter some characters followed by the enter key.
//All the characters entered by the user get stored in a character array. 
//The null character is added to the array to make it a string.
//The gets() allows the user to enter the space-separated strings. It returns the string entered by the user.

#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string? ");  
    gets(s);  
    printf("You entered %s",s);  
}  


//The fgets() makes sure that not more than the maximum limit of characters are read.

#include<stdio.h>  
void main()   
{   
   char str[20];   
   printf("Enter the string? ");  
   fgets(str, 20, stdin);   
   printf("%s", str);   
}   



#include<stdio.h>  
#include <string.h>    
int main(){    
char name[50];    
printf("Enter your name: ");    
gets(name); //reads string from user    
printf("Your name is: ");    
puts(name);  //displays string    
return 0;    
}    

//Since, it prints an additional newline character with the string, 
//which moves the cursor to the new line on the console, the integer 
//value returned by puts() will always be equal to the number of characters present in the string plus 1.












