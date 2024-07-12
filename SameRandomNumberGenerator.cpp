#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int num1, num2, num3;

	num1 = rand() % 60 + 1;
	num2 = rand() % 60 + 1;
	num3 = rand() % 60 + 1;

	cout << "The random-generated numbers are " << num1 << ", " << num2
		<< " and " << num3 << endl;

	return 0;
}
