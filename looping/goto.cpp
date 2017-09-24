#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a;
	l:
	cout<<"Enter"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"This is one Great person"<<endl;
			break;
		default:
			cout<<"U can only use 1"<<endl<<endl;
			goto l;
	}
}