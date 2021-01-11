#include <iostream>
#include <vector>
#include <fstream>
#include "aircraft.h"

using namespace std;

Aircraft::Aircraft()
{
	instream.open("fa1111.fdf");
	outstream.open("fa1111.fdf");
	jet_selection = 'J';
	total_seats = 0;
	seats_per_row = 0;\
	first_rows = 0;
	econ_rows = 0;
	rows = 0;
}


unsigned int Aircraft::get_flight_data(ifstream &instream, vector<string> &vec)
{
    string row;
    while (getline(instream, row))
        vec.push_back(row);
    return vec.size();
}



void Aircraft::open_infile(ifstream &infile, string fname)
{
	infile.open(fname);
	
	if(infile.fail())
	{
		cout << "Input file opening failed." << endl;
		exit(1);
	}
}

void Aircraft::open_outfile(ofstream &outfile, string fname)
{

	outfile.open(fname);
	
	if(outfile.fail())
	{
		cout << "Output file opening failed." << endl;
		exit(1);
	}
}


