/*
	Name: TestDice
	Copyright: 2022
	Author: Daniel R. Collins
	Date: 26-11-22 00:49
	Description: Test driver for the Dice class.
*/
#include <iostream>
#include "Dice.h"
using namespace std;

// Test one Dice object
void testDice(const Dice &dice) {
	cout << "Testing " << dice.toString() << endl;
	cout << "Minimum: " << dice.minRoll() << endl;
	cout << "Maximum: " << dice.maxRoll() << endl;
	cout << "Average: " << dice.avgRoll() << endl;
	cout << "Sample Roll: " << dice.roll() << endl;
	cout << endl;	
}

// Main test driver
int main(int argc, char** argv) {
	Dice::init();

	// Test static functions
	cout << "# Testing Dice static functions #\n";
	cout << "Roll 1d6: " << Dice::roll(6) << endl;
	cout << "Roll 3d6: " << Dice::roll(3, 6) << endl;
	cout << "Roll percentile: " << Dice::rollPct() << endl;
	cout << "Flip a coin: " << boolalpha << Dice::coinFlip() << endl;
	cout << endl;

	// Test object construction
	cout << "# Testing Dice object constructors #\n";
	testDice(Dice(20));
	testDice(Dice(3, 6));
	testDice(Dice(4, 6, 1));
	testDice(Dice(3, 10, 10, 0));

	// Test string construction
	cout << "# Testing Dice string constructor #\n";
	testDice(Dice("d12"));
	testDice(Dice("2d6"));
	testDice(Dice("8d6+2"));
	testDice(Dice("4d10x10"));
	testDice(Dice("d6/2"));
	testDice(Dice("1"));

	return 0;
}
