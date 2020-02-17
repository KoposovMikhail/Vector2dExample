#include "Vector2d.h"
#include <iostream>

using namespace std;

int main() 
{
	Vector2d a = { 31, 2 };
	cout << (string)a << endl;
	Vector2d b = { 5,6,4,2 };
	a.setx(5);
	a.sety(10);
	cout << (string)b << endl;
	a = a + b;
	cout << (string)a << endl;
	cout << "A*B= " << a*b << endl;
	cout << "tg(a)= " << a.tg(b) << endl;
	cout << "l(a)= " << a.len() << endl;
}


