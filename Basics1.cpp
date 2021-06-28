//C++ programs
//1.Sum of first n natural numbers
//2.Check pythagorian triplet
//3.Conversions
//  a.Binary to decimal
//  b.Octal to decimal
//  c.Hexadecimal to decimal
//  d.Decimal to binary
//  e.Decimal to octal
//  f.Decimal to hexadecimal


#include <iostream>
using namespace std;

int sum(int n)
{
	int i;
	int ans=0;
	for(i=1;i<=n;i++)
	{
		ans = ans+i;
	}
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<sum(n)<<endl;
}




//Pointers in cpp


// C++ program to illustrate Pointer Arithmetic
// in C/C++
#include <bits/stdc++.h>

// Driver program
int main()
{
	// Declare an array
	int v[3] = {10, 100, 200};

	// Declare pointer variable
	int *ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++)
	{
		printf("Value of *ptr = %d\n", *ptr);
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
}








//Templates in cpp

#include <iostream>
using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y)
{
return (x > y)? x: y;
}

int main()
{
cout << myMax<int>(3, 7) << endl; // Call myMax for int
cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
cout << myMax<char>('g', 'e') << endl; // call myMax for char

return 0;
}





//Static methods in cpp

#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A() { cout << "A's constructor called " << endl; }
};

class B
{
	static A a;
public:
	B() { cout << "B's constructor called " << endl; }
	static A getA() { return a; }
};

A B::a; // definition of a

int main()
{
	B b1, b2, b3;
	A a = b1.getA();

	return 0;
}






//References in cpp
#include<iostream>
using namespace std;

int main()
{
int x = 10;

// ref is a reference to x.
int& ref = x;

// Value of x is now changed to 20
ref = 20;
cout << "x = " << x << endl ;

// Value of x is now changed to 30
x = 30;
cout << "ref = " << ref << endl ;

return 0;
}




#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
	virtual string getDescription() const
	{
		return "This is Pet class";
	}
};

class Dog : public Pet {
public:
	virtual string getDescription() const
	{
		return "This is Dog class";
	}
};

void describe(const Pet& p)
{ // Doesn't slice the derived class object.
	cout << p.getDescription() << endl;
}

int main()
{
	Dog d;
	describe(d);
	return 0;
}





//Friend class in cpp
#include <iostream>
class A {
private:
	int a;

public:
	A() { a = 0; }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA(A& x)
	{
		// Since B is friend of A, it can access
		// private members of A
		std::cout << "A::a=" << x.a;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}





//Global friend
#include <iostream>

class A {
	int a;

public:
	A() { a = 0; }

	// global friend function
	friend void showA(A&);
};

void showA(A& x)
{
	// Since showA() is a friend, it can access
	// private members of A
	std::cout << "A::a=" << x.a;
}

int main()
{
	A a;
	showA(a);
	return 0;
}



//Friend function of another class
#include <iostream>

class B;

class A {
public:
	void showB(B&);
};

class B {
private:
	int b;

public:
	B() { b = 0; }
	friend void A::showB(B& x); // Friend function
};

void A::showB(B& x)
{
	// Since showB() is friend of B, it can
	// access private members of B
	std::cout << "B::b = " << x.b;
}

int main()
{
	A a;
	B x;
	a.showB(x);
	return 0;
}









//Objects and classes in cpp

#include <iostream>
using namespace std;

class car {
public:
	int car_id;
	double distance;

	void distance_travelled();

	void display(int a, int b)
	{
		cout << "car id is=\t" << a << "\ndistance travelled =\t" << b + 5;
	}
};

int main()
{
	car c1; // Declare c1 of type car
	c1.car_id = 321;
	c1.distance = 12;
	c1.display(321, 12);

	return 0;
}


//Polymorphism
#include <iostream>
using namespace std;

void output(float);
void output(int);
void output(int, float);

int main()
{
	cout << "\nGfG!\n";
	int a = 23;
	float b = 2.3;

	output(a);
	output(b);
	output(a, b);

	return 0;
}

void output(int var)
{ // same function name but different task
	cout << "Integer number:\t" << var << endl;
}

void output(float var)
{ // same function name but different task
	cout << "Float number:\t" << var << endl;
}

void output(int var1, float var2)
{ // same function name but different task
	cout << "Integer number:\t" << var1;
	cout << " and float number:" << var2;
}



// C++ program to demonstrate
// accessing of data members

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	// Access specifier
	public:

	// Data Members
	string geekname;

	// Member Functions()
	void printname()
	{
	cout << "Geekname is: " << geekname;
	}
};

int main() {

	// Declare an object of class geeks
	Geeks obj1;

	// accessing data member
	obj1.geekname = "Abhi";

	// accessing member function
	obj1.printname();
	return 0;
}




// C++ program to demonstrate function
// declaration outside class

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	string geekname;
	int id;
	
	// printname is not defined inside class definition
	void printname();
	
	// printid is defined inside class definition
	void printid()
	{
		cout << "Geek id is: " << id;
	}
};

// Definition of printname using scope resolution operator ::
void Geeks::printname()
{
	cout << "Geekname is: " << geekname;
}
int main() {
	
	Geeks obj1;
	obj1.geekname = "xyz";
	obj1.id=15;
	
	// call printname()
	obj1.printname();
	cout << endl;
	
	// call printid()
	obj1.printid();
	return 0;
}






// C++ program to demonstrate constructors

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	int id;
	
	//Default Constructor
	Geeks()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}
	
	//Parameterized Constructor
	Geeks(int x)
	{
		cout << "Parameterized Constructor called" << endl;
		id=x;
	}
};
int main() {
	
	// obj1 will call Default Constructor
	Geeks obj1;
	cout << "Geek id is: " <<obj1.id << endl;
	
	// obj1 will call Parameterized Constructor
	Geeks obj2(21);
	cout << "Geek id is: " <<obj2.id << endl;
	return 0;
}




// C++ program to explain destructors

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	int id;
	
	//Definition for Destructor
	~Geeks()
	{
		cout << "Destructor called for id: " << id <<endl;
	}
};

int main()
{
	Geeks obj1;
	obj1.id=7;
	int i = 0;
	while ( i < 5 )
	{
		Geeks obj2;
		obj2.id=i;
		i++;	
	} // Scope for obj2 ends here

	return 0;
} // Scope for obj1 ends here


// C++ program to demonstrate public
// access modifier

#include<iostream>
using namespace std;

// class definition
class Circle
{
	public:
		double radius;
		
		double compute_area()
		{
			return 3.14*radius*radius;
		}
	
};

// main function
int main()
{
	Circle obj;
	
	// accessing public datamember outside class
	obj.radius = 5.5;
	
	cout << "Radius is: " << obj.radius << "\n";
	cout << "Area is: " << obj.compute_area();
	return 0;
}



// C++ program to demonstrate private
// access modifier

#include<iostream>
using namespace std;

class Circle
{
	// private data member
	private:
		double radius;
	
	// public member function
	public:
		double compute_area()
		{ // member function can access private
			// data member radius
			return 3.14*radius*radius;
		}
	
};

// main function
int main()
{
	// creating object of the class
	Circle obj;
	
	// trying to access private data member
	// directly outside the class
	obj.radius = 1.5;
	
	cout << "Area is:" << obj.compute_area();
	return 0;
}
//Output: Compile time error

//Important
// C++ program to demonstrate private
// access modifier

#include<iostream>
using namespace std;

class Circle
{
	// private data member
	private:
		double radius;
	
	// public member function
	public:
		void compute_area(double r)
		{ // member function can access private
			// data member radius
			radius = r;
			
			double area = 3.14*radius*radius;
			
			cout << "Radius is: " << radius << endl;
			cout << "Area is: " << area;
		}
	
};

// main function
int main()
{
	// creating object of the class
	Circle obj;
	
	// trying to access private data member
	// directly outside the class
	obj.compute_area(1.5);
	
	
	return 0;
}



// C++ program to demonstrate
// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
	// protected data members
	protected:
	int id_protected;
	
};

// sub class or derived class from public base class
class Child : public Parent
{
	public:
	void setId(int id)
	{
		
		// Child class is able to access the inherited
		// protected data members of base class
		
		id_protected = id;
		
	}
	
	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};

// main function
int main() {
	
	Child obj1;
	
	// member function of the derived class can
	// access the protected data members of the base class
	
	obj1.setId(81);
	obj1.displayId();
	return 0;
}





// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
};

//main function
int main()
{
	
		Child obj1;
		
		// An object of class child has all data members
		// and member functions of class parent
		obj1.id_c = 7;
		obj1.id_p = 91;
		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;
		
		return 0;
}



//Important
// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object
class A
{
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A
{
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A
{
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};



// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This is a 4 wheeler Vehicle" << endl;
	}
};

// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {

};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}




// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{ public:
	fourWheeler()
	{
	cout<<"Objects with 4 wheels are vehicles"<<endl;
	}
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
public:
	Car()
	{
	cout<<"Car has 4 Wheels"<<endl;
	}
};

// main function
int main()
{
	//creating object of sub class will
	//invoke the constructor of base classes
	Car obj;
	return 0;
}








// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};


// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Car obj1;
	Bus obj2;
	return 0;
}




// C++ program for function overloading
#include <bits/stdc++.h>

using namespace std;
class Geeks
{
	public:
	
	// function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name but 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name and 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

int main() {
	
	Geeks obj1;
	
	// Which function is called will depend on the parameters passed
	// The first 'func' is called
	obj1.func(7);
	
	// The second 'func' is called
	obj1.func(9.132);
	
	// The third 'func' is called
	obj1.func(85,64);
	return 0;
}










// CPP program to illustrate
// Operator Overloading
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




// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// data hidden from outside world
		int x;
		
	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x =a;
		}
		
		// function to return value of
		// variable x
		int get()
		{
			return x;
		}
};

// main function
int main()
{
	Encapsulation obj;
	
	obj.set(5);
	
	cout<<obj.get();
	return 0;
}








#include <iostream>
using namespace std;

class implementAbstraction
{
	private:
		int a, b;

	public:
	
		// method to set values of
		// private members
		void set(int x, int y)
		{
			a = x;
			b = y;
		}
		
		void display()
		{
			cout<<"a = " <<a << endl;
			cout<<"b = " << b << endl;
		}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}










// Program 3
#include <stdio.h>

class Base {
public:
	int x;
};

class Derived : Base { }; // is equivalent to class Derived : private Base {}

int main()
{
Derived d;
d.x = 20; // compiler error because inheritance is private
getchar();
return 0;
}
















