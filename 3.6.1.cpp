#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double y,x;
	cout<<"Enter x\n";
	cin>>x;
	cout<<"Enter y\n";
	cin>>y;
if (x>=-1 && x<=1 && y<=1 && y>=-1 && y>=-x){
	cout<<"True";
}
else {
	cout<<"False";
}
	
	return 1;
}
