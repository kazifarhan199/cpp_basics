#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a;

	cout<<"Enter option : ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<1<<endl;
			break;
		case 2:
			cout<<2<<endl;
			break;
		case 3:
			cout<<3<<endl;
			break;
		default:
			cout<<"Under 0-3\n"<<endl;
			break;
	}
	getch();
	return 0;
}