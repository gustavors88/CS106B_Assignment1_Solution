/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the coin-flipping problem.
 * [TODO: rewrite the documentation]
 */

#include "genlib.h"
#include "random.h"
#include <iostream>
#include "vector.h"

using namespace std;

bool Consecutive3Heads(Vector<string> & flipCoin);

int main() {
	// [TODO: fill in the code]
	Vector<string> flipCoin;
	Randomize();
	while(true){
		if(RandomChance(0.5)) {
			flipCoin.add("tails");
			cout << "tails" << endl;
		}
		else {
			flipCoin.add("heads");
			cout << "heads" << endl;
		}
		if(flipCoin.size()>=3) {
			if(Consecutive3Heads(flipCoin)) break;
		}
	}
	
	cout << "It took" << " " << flipCoin.size() << " " << "flips to get 3 consecutive heads.";
	return 0;
}


bool Consecutive3Heads(Vector<string> & flipCoin){
	int size = flipCoin.size();
	if(flipCoin[size-1]=="heads"&&flipCoin[size-2]=="heads"&&flipCoin[size-3]=="heads"){
		return true;
	}
	else return false;
}