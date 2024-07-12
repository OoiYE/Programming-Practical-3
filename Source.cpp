#include <iostream>
using namespace std;

void draw_horizontal();
void draw_parallel();

int main() {
	
	draw_horizontal();
	draw_parallel();
	draw_horizontal();

	return 0;
}

void draw_horizontal(){

	cout << "--------\n";
}

void draw_parallel() {

	cout << "|      |\n";
	cout << "|      |\n";
	cout << "|      |\n";

}