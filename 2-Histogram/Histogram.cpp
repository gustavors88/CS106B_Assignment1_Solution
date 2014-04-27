/*
 * File: Histogram.cpp
 * -------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the histogram problem.
 * [TODO: rewrite the documentation]
 */

#include "genlib.h"
#include <fstream>
#include <iostream>
#include "vector.h"
#include "strutils.h"
#include <iomanip>

using namespace std;

int main() {
	// [TODO: fill in the code]
	ifstream infile;
	string str;
	Vector<string> score;
	int histogram[11] = {0,0,0,0,0,0,0,0,0,0,0};
	
	infile.open("MidtermScores.txt");
	if (infile.fail()) {
		Error("Could not open file.");
		infile.clear();
	}
	
	while (!infile.fail()) {
		getline(infile,str);
		score.add(str);
	}
	
	for (int i=0; i<score.size(); i++) 
		histogram[StringToInteger(score[i])/10]++;
	
	for (int i=0; i<11; i++) {
		cout << setw(4) << i*10 << ":";
		for (int j=0; j<histogram[i]; j++) 
			cout << setw(2) << "*" << setw(2);
		cout << "\n";
	}
	
	return 0;
}
