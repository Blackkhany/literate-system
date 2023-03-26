#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three numbers a,b,c";
	cin>>a>>b>>c;
	if(a>=b)
	{
		if(a>=c)
		{
			cout<<"the largest among three number is:"<<a;
		}
		else
		{
			cout<<"the largest among three number is:"<<c;
		}
	}
	else
	{
		if(b>=c)
		{
			cout<<"the largest among three number is:"<<b;
		}
		else
		{
			cout<<"the largest among three number is:"<<c;
		}
	}
	return 0;
}
