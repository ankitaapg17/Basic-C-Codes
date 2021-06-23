//Header files in c++

//iostream: iostream stands for standard input-output stream. This header file contains definitions to objects like cin,cout, cerr etc.
//iomanip: iomanip stands for input output manipulators. The methods declared in this files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
//fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

//cout using the insertion operator(<<).
//extraction operator(>>) is used along with the object cin


//The C++ cerr is the standard error stream which is used to output the errors.
//This is also an instance of iostream class and used to display errors but unlike cerr the error is first inserted into a buffer
//and is stored in the buffer until it is not fully filled


//As the name suggests Preprocessors are programs that process our source code before compilation. 

//Preprocessor programs provide preprocessors directives which tell the compiler to preprocess the source code before compiling.


//Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code. 
//The ‘#define’ directive is used to define a macro

//sizeof is a much used in the C/C++ programming language. It is a compile time unary operator which can be used to compute the size of its operand.
//The result of sizeof is of unsigned integral type which is usually denoted by size_t

//C break: This loop control statement is used to terminate the loop. As soon as the break statement is encountered from within a loop, the loop iterations stops there 
//and control returns from the loop immediately to the first statement after the loop. 

// CPP program to illustrate
// Linear Search
#include <iostream>
using namespace std;
 
void findElement(int arr[], int size, int key)
{
    // loop to traverse array and search for key
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Element found at position: " << (i + 1);
            break;
        }
    }
}
 
// Driver program to test above function
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = 6; // no of elements
    int key = 3; // key to be searched
 
    // Calling function to find the key
    findElement(arr, n, key);
 
    return 0;
}

//C continue: This loop control statement is just like the break statement. The continue statement is opposite to that of break statement, 
//instead of terminating the loop, it forces to execute the next iteration of the loop. 

//C goto: The goto statement in C/C++ also referred to as unconditional jump statement can be used to jump from one point to another within a function. 

// C++ program to print numbers
// from 1 to 10 using goto statement
#include <iostream>
using namespace std;
 
// function to print numbers from 1 to 10
void printNumbers()
{
    int n = 1;
label:
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
}
 
// Driver program to test above function
int main()
{
    printNumbers();
    return 0;
}



// C++ code to illustrate return
// statement
#include <iostream>
using namespace std;
 
// non-void return type
// function to calculate sum
int SUM(int a, int b)
{
    int s1 = a + b;
    return s1;
}
 
// returns void
// function to print
void Print(int s2)
{
    cout << "The sum is "<< s2;
    return;
}
 
int main()
{
    int num1 = 10;
    int num2 = 10;
    int sum_of = SUM(num1, num2);
    Print(sum_of);
    return 0;
}



//Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc(). 
//If , int arr[n] will create an array with space for 10  integers.



//Switch is a control statement that allows a value to change control of execution.
//The expression provided in the switch should result in a constant value otherwise it would not be valid. 
//Duplicate case values are not allowed.


//Functions help us in reducing code redundancy.
//Functions make code modular. Consider a big file having many lines of codes. 
//It becomes really simple to read and use the code if the code is divided into functions.

// A function that takes a int pointer and an int variable as parameters
// and returns an pointer of type int
int *swap(int*,int);
  
// A function that takes a charas parameters
// and returns an reference variable
char *call(char b);

//we can use pointers to get the effect of pass by reference. 
# include <stdio.h>
void fun(int *ptr)
{
	*ptr = 30;
}

int main()
{
int x = 20;
fun(&x);
printf("x = %d", x);

return 0;
}
//o/p: 30

//In C, functions can return any type except arrays and functions. 
//We can get around this limitation by returning pointer to array or pointer to function.




// Array declaration by specifying size
int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user specified size
int n = 10;
int arr2[n];




// Array declaration by specifying size and initializing
// elements
int arr[6] = { 10, 20, 30, 40 }

// Compiler creates an array of size 6, initializes first
// 4 elements as specified by user and rest two elements as
// 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"



//Name of the array is also a pointer to the first element of array.
//No Index Out of bound Checking: 
//There is no index out of bounds checking in C/C++, for example, 
//the following program compiles fine but may produce unexpected output when run.  



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[6]={11,12,13,14,15,16};
	// Way -1
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";

cout<<endl;
	// Way 2
	cout<<"By Other Method:"<<endl;
	for(int i=0;i<6;i++)
		cout<<i[arr]<<" ";

	cout<<endl;

	return 0;
}

// 1st program to show that array and pointers are different
#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 };
	int* ptr = arr;

	// sizof(int) * (number of element in arr[]) is printed
	printf("Size of arr[] %ld\n", sizeof(arr));

	// sizeof a pointer is printed which is same for all
	// type of pointers (char *, void *, etc)
	printf("Size of ptr %ld", sizeof(ptr));
	return 0;
}
//Array members are accessed using pointer arithmetic. 
//Compiler uses pointer arithmetic to access array element. 
//For example, an expression like “arr[i]” is treated as *(arr + i) by the compiler




//A vector in C++ is a class in STL that represents an array. The advantages of vector over normal arrays are, 
//We do not need pass size as an extra parameter when we declare a vector i.e,
//Vectors support dynamic sizes (we do not have to initially specify size of a vector).
//We can also resize a vector.
//Vectors have many in-built function like, removing an element, etc.



//Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or 
//deleted, with their storage being handled automatically by the container.
//Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
//In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may 
//be a need of extending the array. 
//Removing the last element takes only constant time because no resizing happens


#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
        
        
    return 0;
}

//Capacity
//size() – Returns the number of elements in the vector.
//max_size() – Returns the maximum number of elements that the vector can hold.
//capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
//resize(n) – Resizes the container so that it contains ‘n’ elements.
//empty() – Returns whether the container is empty.
//shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.




//Modifiers:
//assign() – It assigns new value to the vector elements by replacing old ones
//push_back() – It push the elements into a vector from the back
//pop_back() – It is used to pop or remove elements from a vector from the back.
//insert() – It inserts new elements before the element at the specified position
//erase() – It is used to remove elements from a container from the specified position or range.
//swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
//clear() – It is used to remove all the elements of the vector container


// C++ program to illustrate the
// Modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	// Assign vector
	vector<int> v;

	// fill the array with 10 five times
	v.assign(5, 10);

	cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element
	v.pop_back();

	// prints the vector
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 5 at the beginning
	v.insert(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	// removes the first element
	v.erase(v.begin());
	cout << "\nThe first element is: " << v[0];

	
	// erases the vector
	v.clear();
	cout << "\nVector size after erase(): " << v.size();

	// two vector to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);

	cout << "\n\nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	// Swaps v1 and v2
	v1.swap(v2);

	cout << "\nAfter Swap \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
}






//Vector in C++
//Dynamic array
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	//Second way to traverse in vector using iterator pointer
	vector<int>::iterator it;
	
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	
	//Easy way
	//Asking the compiler to decide the data type according to initialisation
	for(auto element:v)
	{
		cout<<element<<endl;
	}
	
	v.pop_back(); //1 2
	
	vector<int> v2 (3,50);
	//50 50 50
	
	swap(v,v2); //to swap the values of vectors
	
	sort(v.begin(),v.end()); //to sort the values
	
}


//erase(int position):
//Removes the element present at position.  
//Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
//
//
//erase(int start,int end):
//Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
//Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)


//To erase in vector
int main() {
     
    int n,a,b,j,pos,l;
    cin>>n;
    vector <int> v;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    cin>>pos>>a>>b;
    v.erase(v.begin()+(pos-1));
    
    
    v.erase(v.begin()+a-1,v.begin()+b-1);
    
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
      
    return 0;
    
}


//To sort the vector
int main() {
    
    
    int n,a;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    
      
    return 0;
}

//The length of the C++ string can be changed at runtime because of dynamic allocation of memory similar to vectors.
//As string class is a container class,
//we can iterate over all its characters using an iterator similar to other containers like vector, set and maps

// various constructor of string class
  
    // initialization by raw string
    string str1("first string");
  
    // initialization by another string
    string str2(str1);
  
    // initialization by character with number of occurrence
    string str3(5, '#');
  
    // initialization by part of another string
    string str4(str1, 6, 6); //    from 6th index (second parameter)
                             // 6 characters (third parameter)
  
    // initialization by part of another string : iteartor version
    string str5(str2.begin(), str2.begin() + 5);
  
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
  
    //  assignment operator
    string str6 = str4;
  
    // clear function deletes all character from string
    str4.clear();
  
    //  both size() and length() return length of string and
    //  they work as synonyms
    int len = str6.length(); // Same as "len = str6.size();"
  
    cout << "Length of string is : " << len << endl;
  
    // a particular character can be accessed using at /
    // [] operator
    char ch = str6.at(2); //  Same as "ch = str6[2];"
  
  
    cout << "third character of string is : " << ch << endl;
  
    //  front return first character and back returns last character
    //  of string
  
    char ch_f = str6.front();  // Same as "ch_f = str6[0];"
    char ch_b = str6.back();   // Same as below
                               // "ch_b = str6[str6.length() - 1];"
  
    cout << "First char is : " << ch_f << ", Last char is : "
         << ch_b << endl;
         
         
         
         
//////////////////////////////////////////////////////////////////////////
// append add the argument string at the end
    str6.append(" extension");
    //  same as str6 += " extension"
  
    // another version of append, which appends part of other
    // string
    str4.append(str6, 0, 6);  // at 0th position 6 character
  
    cout << str6 << endl;
    cout << str4 << endl;
  
    //  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1
  
    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;
  
    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    cout << str6.substr(7, 3) << endl;
  
    //  if second argument is not passed, string till end is
    // taken as substring
    cout << str6.substr(7) << endl;
  
    //  erase(a, b) deletes b characters at index a
    str6.erase(7, 4);
    cout << str6 << endl;
  
    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;
  
    str6 = "This is a examples";
  
    //  replace(a, b, str)  replaces b characters from a index by str
    str6.replace(2, 7, "ese are test");
  
    cout << str6 << endl;         





/////////////////////////////////
//C++ STL Components
//Containers can be described as the objects that hold the data of the same type.
//Containers are used to implement different data structures for example arrays, list, trees, etc.


//Following are the containers that give the details of all the containers as well as the header file and
//the type of iterator associated with them :



//vector is a class that creates a dynamic array allowing insertions and deletions at the back.
//list is the sequence containers that allow the insertions and deletions from anywhere.
//set is an associate container for storing unique sets.
//Map is an associate container for storing unique key-value pairs, i.e. each key is associated with only one value(one to one mapping).
//Priority-queue: First element out is always the highest priority element.



//Sequence containers- vectors, list
//Associative containers- set, map
//Derived containers- stack, queue, priority queue


//Algorithms
//Algorithms are the functions used across a variety of containers for processing its contents.
//
//Algorithms are not the member functions of a container, but they are the standalone template functions.
//Algorithms save a lot of time and effort.
//If we want to access the STL algorithms, we must include the <algorithm> header file in our program.



//====================================================//




//stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here
//
//Operator >> Extracts formatted data.
//Operator << Inserts formatted data.
//Method str() Gets the contents of underlying string device object.
//Method str(string) Sets the contents of underlying string device object.
//Its header file is sstream.
//
//One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
//
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
//Here  is a storage area for the discarded commas.

//If the >> operator returns a value, that is a true value for a conditional. Failure to return a value is false.

//==============================================//




//Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, 
//list has slow traversal, but once a position has been found, insertion and deletion are quick.
//Normally, when we say a List, we talk about doubly linked list.

//=================================================//

//Sets are part of the C++ STL (Standard Template Library). 
//Sets are the associative containers that stores sorted key,
//in which each key is unique and it can be inserted or deleted but cannot be altered.

//Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order.

//Declaration:

set<int>s; //Creates a set of integers.
//Size:

int length=s.size(); //Gives the size of the set.
//Insert:

s.insert(x); //Inserts an integer x into the set s.
//Erasing an element:

s.erase(val); //Erases an integer val from the set s.



//Sets are a type of associative containers in which each element has to be unique,
//because the value of the element identifies it. The value of the element cannot be modified once
//it is added to the set, 
//though it is possible to remove and add the modified value of that element. 


//=============================================

//Maps


//Maps are associative containers that store elements in a mapped fashion.
//Each element has a key value and a mapped value. No two mapped values can have same key values.

//Map Template:
std::map <key_type, data_type>

//Declaration:
map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.

//Size:
int length=m.size(); //Gives the size of the map.

//Insert:
m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.

//Erasing an element:
m.erase(val); //Erases the pair from the map where the key_type is val.

//Finding an element:
map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().

//Accessing the value stored in the key:
To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.





