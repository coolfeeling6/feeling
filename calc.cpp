#include<iostream>
using namespace std;
int main()
{
	int a,b,ch;
	char ans='y';
	do
	{
		cout<<"\t\tmenu\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.REMAINDER\n";
		cout<<"enter your choice";
		cin>>ch;
		cout<<"enter the numbers:";
		cin>>a>>b;
		switch(ch)
		{
			case 1: cout<<a+b;
				break;
			case 2: cout<<a-b;
				break;
			case 3: cout<<a*b;
				break;
			case 4 : cout<<a/b;
				break;
			case 5: cout<<a%b;
				break:
			default: cout<<"wrong choice";
		};
		cout<<"do you want to continue:";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
	return 0;
}
