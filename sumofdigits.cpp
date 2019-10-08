#include<iostream>
using namespace std;
int main()
{
	//sum of digits;
	int a,sum=0,r;
	cin>>a;
	while(a>0)
	{
		r=a%10;
		sum+=r;
		a=a/10;
	}
	cout<<sum;
	return 0;
}
