#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* ptr; // Stores an address to a int type in memory
	double numbers[] = { 10, 20, 40, 50 };

	cout << &numbers[0] << endl;
	cout << &numbers[1] << endl;
	cout << &numbers[2] << endl;
	cout << &numbers[3] << endl;
	cout << &numbers[4] << endl;

	ptr = &x;

	cout << "The value in x is "  << *ptr << endl;
	cout << "The address of x is " << *ptr << endl;

	*ptr = 100;

	cout << "The value of x is " << x << endl;
	cout << "The address of x is " << &x << endl;
	

	return 0;
}