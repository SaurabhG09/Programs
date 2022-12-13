#include<iostream>
using namespace std;

class Demo
{
	public :
		int i,j;      //instance variable (static)
		static int x; //class variable    (non-static)

	Demo(int a = 10, int b =20)
	{
		cout<<"Inside constructor\n";
		//(*this).i=a;
		this ->i = a;
		this ->j = b;
	}
	
	//void fun(Demo *this, int no)
	void fun(int no)  //instance method
	{
		cout<<"Inside non-static fun\n";
		cout<<this->i<<"\n";
		cout<<this->j<<"\n";
		cout<<Demo::x<<"\n";
	}
	
	//static void gun(int value)
	static void gun(int value)  //class method
	{
		cout<<"Inside static gun\n";
		//cout<<this->i<<"\n";
	}

};

int Demo::x = 30;

int main()
{
	cout<<Demo::x<<"\n";
	Demo::gun(12);

	Demo obj(11);
	
	obj.fun(21);  //fun(&obj,21);
		
		cout<<sizeof(obj)<<"\n";
		
		cout<<obj.i<<"\n";
		cout<<obj.j<<"\n";	
	
	return 0;
}
