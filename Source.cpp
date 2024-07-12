#include <iostream>
#include <iomanip>
using namespace std;

#define PRICE_PER_APPLE 0.85
#define PRICE_PER_ORANGE 1.00

void display_heading();
void display_apple_item(int qty, double total);
void display_orange_item(int qyt, double total);
void display_grand_total(double grand_total);

int main(){

	int apple_qty, orange_qty;
	double apple_total, orange_total, grand_total;

	cout << "Enter number of apples: ";
	cin >> apple_qty;
	cout << "Enter number of oranges: ";
	cin >> orange_qty;

	apple_total = apple_qty * PRICE_PER_APPLE;
	orange_total = orange_qty * PRICE_PER_ORANGE;
	grand_total = apple_total + orange_total;

	display_heading();
	display_apple_item(apple_qty, apple_total);
	display_orange_item(orange_qty, orange_total);
	display_grand_total(grand_total);
	return 0;
	
}

void display_heading() {

	cout << "=========my Fruit Store========\n";
	cout << "Fruit  Qty Price   Total\n";
	cout << "-------------------------------\n";
}

void display_apple_item(int qty, double total) {

	cout << "Apple\t" << setw(3) << qty;
	cout << " RM" << setw(4) << fixed << setprecision(2) << PRICE_PER_APPLE;
	cout << "\tRM" << setw(5) << total << endl;
} 

void display_orange_item(int qty, double total) {

	cout << "Orange\t" << setw(3) << qty;
	cout << " RM" << setw(4) << fixed << setprecision(2) << PRICE_PER_ORANGE;
	cout << "\tRM" << setw(5) << total << endl;
}

void display_grand_total(double grand_total) {

	cout << "-------------------------------\n";
	cout << "Total\t\t\tRM" << setw(5) << fixed << setprecision(2)
		<< grand_total << endl;
}