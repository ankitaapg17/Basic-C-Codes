//Structures in C
//Create an array of 30 structure variables and all the members of each variable and print them.
#include <stdio.h>


struct student
{
	int roll;
	float marks;
	char name[30];
	
}s[3];
int main()
{
	int i;
	printf("Enter information:\n");
	for(i=0;i<3;++i)
	{
		s[i].roll=i+1;
		printf("For roll number :%d\n",s[i].roll);
		printf("Enter a name:\n");
		scanf("%s",&s[i].name);
		printf("Enter marks:\n");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	
	printf("Displaying info:\n");
	for(i=0;i<3;i++)
	{
		printf("Roll number:%d\n",s[i].roll);
		printf("Name:%s",s[i].name);
		printf(" Marks:%f\n",s[i].marks);
	}
}


//Swapping complex numbers
#include <stdio.h>
struct complex
{
	int r;
	int i;
};
void swap(struct complex *x, struct complex *y)
{
	struct complex c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	struct complex c1,c2;
	printf("Enter two real coefficients:\n");
	scanf("%d %d",&c1.r,&c2.r);
	printf("Enter two imaginary coefficients:\n");
	scanf("%d %d",&c1.i,&c2.i);
	printf("Complex numbers:c1=%d+j%d and c2=%d+j%d",c1.r,c1.i,c2.r,c2.i);
	swap(&c1,&c2);
	printf("\n After swapping, c1=%d+j%d and c2=%d+j%d",c1.r,c1.i,c2.r,c2.i);
}


//Structure in c is a user-defined data type that enables us to store the collection of different data types.
//Each element of a structure is called a member. Structures can simulate the use of classes and templates as it can
//store various information
//The struct keyword is used to define the structure.

#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 variable for structure    
int main( )    
{    
   //store first employee information    
   e1.id=101;    
   strcpy(e1.name, "Sonoo Jaiswal");//copying string into char array    
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
return 0;  
}    

//typedef in C

//Suppose we want to create a variable of type unsigned int,
//then it becomes a tedious task if we want to declare multiple variables of this type. 
//To overcome the problem, we use a typedef keyword.

typedef unsigned int unit;  

struct student s1;  
//The above statement shows the creation of a variable, i.e., s1, but the statement is quite big.
//To avoid such a big statement, we use the typedef keyword to create the variable of type student.

struct student  
{  
char name[20];  
int age;  
};  
typedef struct student stud;  
stud s1, s2;   



#include <stdio.h>  
typedef struct student  
{  
char name[20];  
int age;  
}stud;  
int main()  
{  
stud s1;  
printf("Enter the details of student s1: ");  
printf("\nEnter the name of the student:");  
scanf("%s",&s1.name);  
printf("\nEnter the age of student:");  
scanf("%d",&s1.age);  
printf("\n Name of the student is : %s", s1.name);  
printf("\n Age of the student is : %d", s1.age);  
return 0;  
}  



//Union in C

//Union can be defined as a user-defined data type which is a collection of different variables of 
//different data types in the same memory location. The union can also be defined as many members, 
//but only one member can contain a value at a particular point in time.
//Union is a user-defined data type, but unlike structures, they share the same memory location.


//In union, members will share the memory location.
//If we try to make changes in any of the member then it will be reflected to the other member as well

//We can save lots of space if we use unions.


union abc{  
int a;  
char b;  
float c;  
double d;  
};  
int main()  
{  
  printf("Size of union abc is %d", sizeof(union abc));  
  return 0;  
}  


//Since the double variable occupies the largest memory among all the four variables,
//so total 8 bytes will be allocated in the memory. 
//Therefore, the output of the above program would be 8 bytes.


//Enum in C

//The enum in C is also known as the enumerated type. It is a user-defined data type that consists of integer values,
//and it provides meaningful names to these values. The use of enum in C makes the program easy to understand and maintain.
//The enum is defined by using the enum keyword.

enum fruits{mango, apple, strawberry, papaya};  
//The default value of mango is 0, apple is 1, strawberry is 2, and papaya is 3. 
//If we want to change these default values, then we can do as given below:

enum fruits{  
mango=2,  
apple=1,  
strawberry=5,  
papaya=7,  
};  

////////////////////////////////

#include <stdio.h>  
 enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  
 int main()  
{  
 enum weekdays w; // variable declaration of weekdays type  
 w=Monday; // assigning value of Monday to w.  
 printf("The value of w is %d",w);  
    return 0;  
}  

#include <stdio.h>  
 enum months{jan=1, feb, march, april, may, june, july, august, september, october, november, december};  
int main()  
{  
// printing the values of months  
 for(int i=jan;i<=december;i++)  
 {  
 printf("%d, ",i);  
 }  
    return 0;  
}  

//Why do we use enum?

//The enum is used when we want our variable to have only a set of values. 
//For example, we create a direction variable. As we know that four directions exist (North, South, East, West),
//so this direction variable will have four possible values. But the variable can hold only one value at a time. 
//If we try to provide some different value to this variable, then it will throw the compilation error.


//ENUM vs Macro

//Macro can also be used to define the name constants, but in case of an enum, all the name constants can be grouped together in a single statement.
//For example,
//# define pass 0;
//# define success 1;
//
//The above two statements can be written in a single statement by using the enum type.
//enum status{pass, success};
//
//In Enum, if we do not assign the values to the enum names, then the compiler will automatically assign the default value to the enum names. But, in the case of macro, the values need to be explicitly assigned.
//The type of enum in C is an integer, but the type of macro can be of any type.




Preprocessor and Macro 

//The C preprocessor is a micro processor that is used by compiler to transform your code before compilation. It is called micro preprocessor because it allows us to add macros.
//
//Note: Proprocessor direcives are executed before compilation.
//#include
//#define

//A macro is a segment of code which is replaced by the value of macro. Macro is defined by #define directive. There are two types of macros:

//Object-like Macros:  #define PI 3.14  
//Function-like Macros




