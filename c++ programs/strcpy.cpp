#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char s1[20],s2[10];
	cout<<"Enter a string1:";
	cin>>s1;
	cout<<"Enter a string2:";
	cin>>s2;
	cout<<strcpy(s1,s2);
}
