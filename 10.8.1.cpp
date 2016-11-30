// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Vvod {
public:
	string name;
	string output;
	Vvod(){
		name = "";
		output = "";
	};
	void info(Vvod x) {
		cout << "The name: " << x.name<<endl;
		cout << "Type of the output: " << x.output << endl;
	}
};
class Camera:public Vvod {
public:
	int capacity;
	Camera() {
		capacity = 0;
	}
	void infoCam(Camera x) {
		x.info(x);
		cout << "Capacity: " << x.capacity << endl;
	}
};

int main()
{
	Camera a =  Camera();
	Camera b = Camera();
	Camera c = Camera();
	Camera d = Camera();
	cout << "enter the name of camera\n";
	cin >> a.name;
	cout << "enter the type of the output\n";
	cin >> a.output;
	cout << "enter the capacity of camera\n";
	cin >> a.capacity;
	cout << "enter the name of camera\n";
	cin >> b.name;
	cout << "enter the type of the output\n";
	cin >> b.output;
	cout << "enter the capacity of camera\n";
	cin >> b.capacity;
	cout << "enter the name of camera\n";
	cin >> c.name;
	cout << "enter the type of the output\n";
	cin >> c.output;
	cout << "enter the capacity of camera\n";
	cin >> c.capacity;
	cout << "enter the name of camera\n";
	cin >> d.name;
	cout << "enter the type of the output\n";
	cin >> d.output;
	cout << "enter the capacity of camera\n";
	cin >> d.capacity;

	a.infoCam(a);
	cout << "\n";
	b.infoCam(b);
	cout << "\n";
	c.infoCam(c);
	cout << "\n";
	d.infoCam(d);
	cout << "\n";
	cin >> a.capacity;

    return 0;
}

