#include <iostream>
#include<math.h>
using namespace std;
int powercalc(int base, int power);


int main()

{
	int base;
	int power;

	cout << "Enter your base = " << endl;
	cin >> base;

	cout << "Enter your exponent =" << endl;
	cin >> power;

	cout << powercalc(base, power);
}

	int powercalc(int base, int power)
	{

		if (power > 1)
		{
			return base * (powercalc(base, power - 1));
		}

		return base; 


}

