

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <locale>
#include "flight.h"

using namespace std;

void Flight::open_file(ifstream &infile, string &fname)
{

    infile.open(fname);
    if (infile.fail( ))
    {
        cout << fname << ": file open failed for input file.\n";
        exit(1);
    }
}

void Flight::save_flight_data(const vector<string> &rows, const string &fname)
{
    ofstream outfile(fname);
    if (outfile.fail())
    {
        cout << fname << ": file open for writing failed.\n";
        exit(1);
    }
    for (string r : rows)
        outfile << r << endl;
    outfile.close();
    return;
}

void Flight::showseating(const vector<string> &seats)
{
    for (unsigned int i = 0U; i < seats.size(); ++i)
    {
        cout << "["  << i+1 << "] ";
        displayrow(seats.at(i));
    }
    return;
}

void Flight::displayrow(const string &rw)
{
    using namespace std;
    for (unsigned int i = 0U; i < rw.length(); ++i)
    {
        if (ispunct(rw.at(i)))
            cout << " ";
        else if (isalpha(rw.at(i)))
            cout << rw.at(i) << " ";
    }
    cout << endl;
    return;
}


bool Flight::book_seat(vector<string> &rows, int rnum, char seat)
{
    for (unsigned int i = 0U; i < rows[rnum - 1].length(); ++i)
    {
        if (rows[rnum - 1][i] == seat)
        {
            rows[rnum - 1][i] = 'X';
            return true;
        }
    }
    return false;
}

bool Flight::remove_booking(vector<string> &rows, int rnum, char seat)
{
    for (unsigned int i = 0U; i < rows[rnum - 1].length(); ++i)
    {
        if (rows[rnum - 1][i] == seat)
        {
            rows[rnum - 1][i] = 'O';
            return true;
        }
    }
    return false;
}


