#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double x,a;
	cout<<"Enter your number\n";
	cin>>x;
	a = pow(x,5)+pow((log(3*pow(x,2)+5)/log(3)),2)+pow(pow(M_PI-6*pow(x,2),2),1./9);
	cout<<"the result is "<<a;
	return 1;
}
