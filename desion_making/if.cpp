#include <iostream>
#include<conio.h>

using namespace std;

int main() 
{
	string name;

    cout << "what is input :" ;
    cin >>name;
    //getline(cin,a);
    cout << "Name is  "<< name <<endl;
    
    if (name=="Farhan" || name=="farhan")
    {
    	cout<<"Acess permited"<<endl;
    }
    else if(name=="kazi" || name=="Kazi")
    {
    	cout<<"Hi"<<endl;
    }
    else
    {
    	cout<<"Acess Denied"<<endl;
    }
    getch();
    return 0;

}