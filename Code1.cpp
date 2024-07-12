#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {


	double number1, number2, power;
	number1 = 9.0;
	number2 = 1.23;
	power = 3;

	cout << "Some Math library functions\n";
	cout << fixed << setprecision(2);
	cout << "sqrt(" << number1 << ")\t = " << setw(6) << sqrt(number1) << endl;
	cout << "ceil(" << number2 << ")\t = " << setw(6) << ceil(number2) << endl;
	cout << "floor(" << number2 << ")\t = " << setw(6) << floor(number2) << endl;
	cout << "pow(" << number1 << "," << power << ")\t = "
		<< setw(6) << pow(number1, power) << endl;

	cout << "\nRandom number generation functions\n";
	srand(997);
	cout << "srand(997) to set the seed\n";
	cout << "rand(): " << rand() << endl;
	cout << "rand(): " << rand() << endl;

	return 0;
}
