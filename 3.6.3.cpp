#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double a,b;
	a=0;
	while (a<=2*M_PI){
		b=cos(a);
		cout<<b<<"\n";
		a=a+M_PI/10;
	}
	
	return 1;
}
