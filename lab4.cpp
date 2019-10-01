// ConsoleApplication8.cpp : Defines the entry point for the console application.
//
//Lab exercise
//Assign two var into x and y and store x + y in a new variable z;
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void star();

int main() {
	star();

	float price = 9.90, totalPrice;
	int quantity;
	const int DISC = 10;

	cout << "Enter the quantity for the purchased item: ";
	cin >> quantity;
	totalPrice = (price*quantity) * (100 - DISC) / 100.00;

	cout << "The total price is: " << totalPrice << endl;

	return 0;
}

void star() {
	cout << "This is Lab 4" << endl;
	cout << "Charae, Do Exercise\n" << endl;
}
/*
int x = 10, y = 45, z = 0;
z = x + y;

cout << "x: " << x << endl;
cout << "y: " << y << endl;
cout << "z: " << z << endl;

return 0;
*/
