#include<iostream>
using namespace std;

class Base1
{
	public:
		int i,j;
		Base1()
		{
			cout<<"Base1 constructor\n";
		}
		~Base1()
		{
			cout<<"Base1 destructor\n";
		}
		void fun()
		{
			cout<<"Base1 fun\n";
		}
};

class Base2
{
	public:
		int x,y;
		Base2()
		{
			cout<<"Base2 constructor\n";
		}
		~Base2()
		{
			cout<<"Base2 destructor\n";
		}
		void fun()
		{
			cout<<"Base2 fun\n";
		}
};

class Derived : public Base2,Base1
{
	public:
		int a;
		
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Derived destructor\n";
		}
};

int main()
{
	Derived dobj;
	
	dobj.fun();
	return 0;
}


//multiple.cpp:59:7: error: request for member 'fun' is ambiguous
//dobj.fun();
//       ^~~