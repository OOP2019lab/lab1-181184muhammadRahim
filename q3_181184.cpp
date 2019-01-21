#include<iostream>
using namespace std;
int main()
{
	int x = 10, y = 20;
	int *p, *q;
	p = &x;
	q = &y;
	cout << "value of x=" <<x<< endl;
	cout << "value of y=" << y << endl;
	cout << "value of p=" << p << endl;
	cout << "value of q=" << q << endl;
	cout << "value of *p=" << *p << endl;
	cout << "value of *q=" << *q << endl;
	cout << "address of x=" << &x << endl;
	cout << "address of y=" << &y << endl;
	int temp = x;
	x = y;
	y = temp;
	cout << "after swapping value of x=" << x << endl;
	cout << "after swapping value of y=" << y << endl;
	x = 10, y = 20;
	int *temp2;
	temp2 = p;
	p = q;
	q = temp2;
	cout << "value of x=" << x << endl;
	cout << "value of y=" << y << endl;
	cout << "value of p=" << p << endl;
	cout << "value of q=" << q << endl;
	cout << "value of *p=" << *p << endl;
	cout << "value of *q=" << *q << endl;
	cout << "address of x=" << &x << endl;
	cout << "address of y=" << &y << endl;


	system("pause");

}