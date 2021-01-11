#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "flight.h"
#include "aircraft.h"
#include "jumbo.h"
#include "commuter.h"
#include "hopper.h"

using namespace std;

int main()
{

	Flight plane1;
	vector<string>rows;
	vector<string>seats;

	cout << "Welcome to the Flight Reservation System" << endl;
	cout << endl;
	cout << "Please enter the file name of the flight you would like to book: ";
	cout << "[ Jumbo -- fa1111.fdf ]" << endl;
	cout << "[ Commuter -- fa2222.fdf ]" << endl;
	cout << "[ Hopper -- fa3333.fdf ]" << endl;

	ifstream infile;
	string fname;
	cin >> fname;

	plane1.open_file(infile, fname);

	cout << "Please select an option from the menu below:" << endl;
	cout << "Book a seat directly [A]" << endl;
	cout << "View seating diagram for aircraft [B]" << endl;
	cout << "Display occupied and unoccupied seats on aircraft [C]" << endl;
	cout << "Remove a booking [D]" << endl;
	cout << "Change seating allocation for classes [E]" << endl;
	cout << "Assign different aircraft to flight [F]" << endl;

	char input;
	cin >> input;

	switch (input)
	{
		
		// BOOK FLIGHT CONDITION
		case 'A':
			char option1;
			cout << "Book seat by row and seat directly (A)" << endl;
			cout << "View available window and aisle seats (B)" << endl;
			cin >> option1;

			if (option1 == 'A')
			{	
				cout << "Enter row and seat number (row# seat#): ";
				int rownum, seatnum;
				cin >> rownum >> seatnum;

				plane1.book_seat(rows, rownum, seatnum);
			}
			
			else
			{

			}

			break;
	
		
		// DISPLAY SEAT MAP CONDITION
		case 'B':
			cout << "Which aircraft seat map would you like to view? (J, C, H)? ";
			char plane;
			cin >> plane;

			if (plane == 'J')
			{
				Jumbo jet1;
				jet1.save_flight_data(rows, "fa1111.fdf");
				jet1.showseating(rows);
                Commuter com1;
				
			}
			
			else if (plane == 'C')
			{

			}

			else
			{

			}

			break;
		
		// DISPLAY OCCUPIED/UNOCCUPIED SEATS CONDITION
		case 'C':
			break;

		// REMOVE BOOKED SEAT CONDITION
		case 'D':

			int removerow, removeseat;
			cout << "Enter the seat booking you would like to ";
			cout << "remove (row# seat#): ";
			cin >> removerow >> removeseat;

			plane1.remove_booking(rows, removerow, removeseat);

			break;

		// CHANGE CLASS SEATING ALLOCATION CONDITION
		case 'E':

			break;

		// ASSIGN NEW AIRCRAFT TO FLIGHT CONDITION
		case 'F':
			break;
        }

	return 0;
}




