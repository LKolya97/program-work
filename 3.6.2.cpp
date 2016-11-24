#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double ya,xa,xb,yb,xc,yc,r1,r2,r3;
	cout<<"Enter x A\n";
	cin>>xa;
	cout<<"Enter y A\n";
	cin>>ya;
cout<<"Enter x B\n";
	cin>>xb;
	cout<<"Enter y B\n";
	cin>>yb;
	cout<<"Enter x C\n";
	cin>>xc;
	cout<<"Enter y C\n";
	cin>>yc;
	r1=sqrt(xa*xa+ya*ya);
	r2=sqrt(xb*xb+yb*yb);
	r3=sqrt(xc*xc+yc*yc);
	if (r1<=r2 && r1<=r3){
		cout<<"point A is the closest";
	}
	else {
		if (r2<=r1 && r2<=r3){
			cout<<"point B is the closest";
		}
		else{
			cout<<"point C is the closest";
		}
	}
	
	return 1;
}
