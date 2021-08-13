


// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr, arr + n);

	cout << "\nArray after sorting using "
			"default sort is : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}




// C++ program to demonstrate descending order sort using
// greater<>().
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n, greater<int>());

	cout << "Array after sorting : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}


// C++ code to demonstrate the working of binary_search()

#include<bits/stdc++.h>
using namespace std;

int main()
{
	// initializing vector of integers
	vector<int> arr = {10, 15, 20, 25, 30, 35};
	
	// using binary_search to check if 15 exists
	if (binary_search(arr.begin(), arr.end(), 15))
	cout << "15 exists in vector";
	else
	cout << "15 does not exist";
	
	cout << endl;
	
	// using binary_search to check if 23 exists
	if (binary_search(arr.begin(), arr.end(), 23))
		cout << "23 exists in vector";
	else
		cout << "23 does not exist";
	
	cout << endl;
}












// Cpp program to illustrate the
// concept of Constructors
#include <iostream>
using namespace std;

class construct
{
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl
		<< "b: " << c.b;
	return 1;
}





// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

	return 0;
}




// C++ program to illustrate
// Constructor overloading
#include <iostream>
using namespace std;

class construct
{

public:
	float area;
	
	// Constructor with no parameters
	construct()
	{
		area = 0;
	}
	
	// Constructor with two parameters
	construct(int a, int b)
	{
		area = a * b;
	}
	
	void disp()
	{
		cout<< area<< endl;
	}
};

int main()
{
	// Constructor Overloading
	// with two different constructors
	// of class name
	construct o;
	construct o2( 10, 20);
	
	o.disp();
	o2.disp();
	return 1;
}




//Copy constructor
#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor
	Point(const Point &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}




//Note the order in which constructors get called
#include <iostream>
using namespace std;

class Base {
public:
	// compiler "declares" constructor
};

class A {
public:
	// User defined constructor
	A()
	{
		cout << "A Constructor" << endl;
	}

	// uninitialized
	int size;
};

class B : public A {
	// compiler defines default constructor of B, and
	// inserts stub to call A constructor

	// compiler won't initialize any data of A
};

class C : public A {
public:
	C()
	{
		// User defined default constructor of C
		// Compiler inserts stub to call A's construtor
		cout << "C Constructor" << endl;

		// compiler won't initialize any data of A
	}
};

class D {
public:
	D()
	{
		// User defined default constructor of D
		// a - constructor to be called, compiler inserts
		// stub to call A constructor
		cout << "D Constructor" << endl;

		// compiler won't initialize any data of 'a'
	}

private:
	A a;
};

int main()
{
	Base base;

	B b;
	C c;
	D d;

	return 0;
}



// CPP program to illustrate
// Function Overriding
#include<iostream>
using namespace std;

class BaseClass
{
public:
	virtual void Display()
	{
		cout << "\nThis is Display() method"
				" of BaseClass";
	}
	void Show()
	{
		cout << "\nThis is Show() method "
			"of BaseClass";
	}
};

class DerivedClass : public BaseClass
{
public:
	// Overriding method - new working of
	// base class's display method
	void Display()
	{
		cout << "\nThis is Display() method"
			" of DerivedClass";
	}
};

// Driver code
int main()
{
	DerivedClass dr;
	BaseClass &bs = dr;
	bs.Display();
	dr.Show();
}


// C++ program for function overriding

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
	virtual void print ()
	{ cout<< "print base class" <<endl; }

	void show ()
	{ cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
	{ cout<< "print derived class" <<endl; }

	void show ()
	{ cout<< "show derived class" <<endl; }
};

//main function
int main()
{
	base *bptr;
	derived d;
	bptr = &d;
	
	//virtual function, binded at runtime (Runtime polymorphism)
	bptr->print();
	
	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}
//Output- 
	//print derived class
        //show base class



//Operator overloading
#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0) {real = r; imag = i;}
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2; // An example call to "operator+"
	c3.print();
}






//Order in which constructors are called in multiple inheritance
#include<iostream>
using namespace std;

class A
{
public:
A() { cout << "A's constructor called" << endl; }
};

class B
{
public:
B() { cout << "B's constructor called" << endl; }
};

class C: public B, public A // Note the order
{
public:
C() { cout << "C's constructor called" << endl; }
};

int main()
{
	C c;
	return 0;
}














//HackerRank basics of problem solving
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


//max points scored in a game
int main() {

  
    
    int n,sum,i;
    int a[100];
    
    scanf("%d %d",&sum,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            sum=sum+a[i];
            a[i]=0;
            if(sum<0)
            {
                sum=0;
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}



//Buying Hearthgold sum in contest








//Gaming Laptop battery life

//n = 4
//events = [10,-20,61,-15]
//Initial charge = 50
//Output=85




//Unexpected demand
//2- no. of orders
//10- order 1
//30- order 2
//40- no. of widgets

//output-2










