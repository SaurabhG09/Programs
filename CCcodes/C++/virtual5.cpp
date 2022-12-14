#include<iostream>
using namespace std;

class Base
{
	public: 
		int x,y;
		
		virtual void fun()  //1000
		{
			cout<<"Base fun"<<"\n";
		}
		virtual void gun()  //2000
		{
			cout<<"Base gun"<<"\n";
		}
		void sun()          //3000
		{
			cout<<"Base sun"<<"\n";
		}
		virtual void run()  //4000
		{
			cout<<"Base run"<<"\n";
		}
};

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()          //5000
		{
			cout<<"Derived fun"<<"\n";
		}
		virtual void gun()  //6000
		{
			cout<<"Derived gun"<<"\n";
		}
		void sun()          //7000
		{
			cout<<"Derived sun"<<"\n";
		}
		virtual void mun()  //8000
		{
			cout<<"Derived mun"<<"\n";
		}
};

int main()
{
	Base *bp = new Derived();   //Upcasting
	
	bp->fun();     //Derived fun
	bp->gun();    //Derived gun
	bp->sun();   //not allowed if downcasting is used
            	//Base sun
 	bp->run();    //Base run
	//bp->mun();    //error
	
	cout<<sizeof(Base)<<"\n";    //16
	cout<<sizeof(Derived)<<"\n"; //24
	return 0;
}