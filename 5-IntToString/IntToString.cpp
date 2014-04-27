/*
 * File: IntToString.cpp
 * ---------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the IntToString problem.
 * [TODO: rewrite the documentation]
 */

#include "genlib.h"
#include "simpio.h"
#include <iostream>

using namespace std;

string IntToString(int number);

int main() {
	// [TODO: fill in the code]
	cout << "number? ";
	int number = GetInteger();
	string convertedInt = IntToString(number);
	cout << convertedInt;
	return 0;
}


string IntToString(int number) {
	if (number>=0&&number<=10) {
		return string("")+char(int('0')+number);
	}
	else {
		return IntToString(number/10)+char(int('0')+number%10);
	}
}