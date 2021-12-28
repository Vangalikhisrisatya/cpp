#include<iostream>
using namespace std;
class A
{
	protected:
		int a1,a2;
};
class B:virtual public A
{
	protected:
		int b1,b2;
};
class C:virtual public A
{
	protected:
		int c1,c2;
};
class D:public B,public C
{
	protected:
		int d1,d2,d3;
	public:
		void getvalues()
		{
			cout<<"enter a1,a2,b1,b2,c1,c2 values:";
			cin>>a1>>a2>>b1>>b2>>c1>>c2;
		}
		void display()
		{
			d1=a1+a2;
			d2=b1-b2;
			d3=c1*c2;
			cout<<"Addition of a1 and a2 is"<<d1<<endl;
			cout<<"Subtraction of b1 and b2 is"<<d2<<endl;
			cout<<"Multiplication of c1 and c2 is"<<d3<<endl;
		}
};
main()
{
	D o1;
	o1.getvalues();
	o1.display();
}



