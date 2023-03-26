#include<iostream>
using namespace std;
int main()
{
	int a,l,b,h,r,vs,vr,vc;
	float pi=3.14;
	cout<<"enter a value of a:";
	cin>>a;
	vs=a*a;
	cout<<"enter a value of l,b,h:";
	cin>>l>>b>>h;
	vr=l*b*h;
	cout<<"enter a value of r:";
	cin>>r;
	vc=pi*r*r*h*1/3;
	cout<<"volume of square="<<vs;
	cout<<"volume of rectangle="<<vr;
	cout<<"volume of cone="<<vc;
	return 0;
}
