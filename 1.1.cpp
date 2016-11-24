#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int a,b;
	cout<<"Enter your number\n";
	cin>>a;
	b= a % 10;
	a = a / 10;
	b = a*b;
	cout<<"the result is "<<b;
	return 1;
}
