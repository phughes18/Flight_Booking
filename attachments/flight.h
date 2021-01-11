#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

class Flight
{
	public:
        ~Flight();
		void open_file(ifstream &infile, string &fname);
		void save_flight_data(const vector<string> &rows, const string &fname);
		void showseating(const vector<string> &seats);
		bool book_seat(vector<string> &rows, int rnum, char seat);
		bool remove_booking(vector<string> &rows, int rnum, char seat);
        void displayrow(const string &rw);

	protected:
		ifstream infile;
		ofstream fname;
		vector<string> seats;
		vector<string> rows;
		int rnum;
		char seat;

};

#endif
