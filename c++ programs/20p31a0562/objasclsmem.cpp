#include<iostream>
using namespace std;
class studentdetails
{
	private:
		string name;
		float percentage;
	public:
		void getdetails()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter percentage:";
			cin>>percentage;
		}
		void display()
		{
			cout<<"name="<<name;
			cout<<"percentage="<<percentage;
		}
};
class rollnumber
{
	private:
		studentdetails d1;
		int rollnumber;
	public:
		void getnumber()
		{
			d1.getdetails();
			cout<<"enter rollnumber:";
			cin>>rollnumber;
		}
		void displaydetails()
		{
			d1.display();
			cout<<"rollnumber="<<rollnumber;	
		}
};
main()
{
	rollnumber r1;
	r1.getnumber();
	r1.displaydetails();
}
