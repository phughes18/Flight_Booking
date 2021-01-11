
#include <iostream>
#include <vector>
#include "commuter.h"

using namespace std;

Commuter::Commuter()
{
	total_seats = 90;
	seats_per_row = 6;
	rows = 15;
	first_rows = 5;
	econ_rows = 10;
}




/*
void Commuter::get_new_rows(int first_rows, int econ_rows)
{
	do
	{
		cout << "Enter number of new first class rows: ";
		cin >> first_rows;
		cout << endl;

		cout >> "Enter new number of economy rows: ";
		cin >> econ_rows;

		int total = first_rows + econ_rows;

	} while(total != 15)
}

*/



