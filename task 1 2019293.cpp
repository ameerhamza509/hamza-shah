#include <iostream>
using namespace std;
int func(int x);

int main()
{

	int x;
	cout << "Enter the integer" << endl;
	cin >> x;

	cout << "Sum of the natural number is =" << func(x);

	return 0;

}

   int func(int x)
{
	if (x == 0)
		return 0;
	else
		return x + func(x - 1);
}