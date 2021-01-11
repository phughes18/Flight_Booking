
#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <iostream>
#include <fstream>
#include <vector>
#include "flight.h"

using namespace std;

class Aircraft : public Flight
{
	
	public:

		Aircraft();

		void open_infile(ifstream &infile, string fname);
		void open_outfile(ofstream &outfile, string fname);
		unsigned int get_flight_data(ifstream &instream, vector<string> &vec);


	protected:
		ifstream instream;
		ofstream outstream;
		char jet_selection;
		int total_seats;
		int seats_per_row;
		int first_rows;
		int econ_rows;
		int rows;
};

#endif
