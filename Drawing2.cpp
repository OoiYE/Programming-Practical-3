#include <iostream>
using namespace std;

void draw_horizontal();
void draw_parallel();
void draw_intersect();
void draw_triangle();

int main() {
	
	draw_triangle();
	draw_parallel();

	return 0;
}

void draw_intersect() {

	cout << " /\\ \n";
	cout << " /\\ \n";
	cout << " /\\ \n";
}

void draw_triangle() {

	draw_intersect();
	draw_horizontal();
}

void draw_horizontal(){

	cout << "--------\n";
}

void draw_parallel() {

	cout << "|      |\n";
	cout << "|      |\n";
	cout << "|      |\n";

}
