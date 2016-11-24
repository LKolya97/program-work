#include <iostream>
#include "math.h"
using namespace std;
int main(){
	double n,a,b;
	cout<<"Enter N\n";
	cin>>n;
cout<<"Enter the number \n";
cin>>b;
	for (int i=2;i<=n;i++){
		cout<<"Enter the number \n";
		cin>>a;
		if (a<b){
			b=a;
		}
	}

	cout<<"minimum is "<<b;
	return 1;
}
