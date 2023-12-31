/*********************************************************************
** Program Filename: recurse
** Author: Bernardo Mendes
** Date: 12/11/2023
** Description: A program that calculates the number of potential cases that
				A person could take for a small, medium, and large step, depending
				on the number of steps in the Stair cases
				small: 1 step
				medium: 2 step
				large: 3 step
** Input: none
** Output: The potential outcome is printed out
*********************************************************************/
#include <iostream>

#include "stairs.h"

using namespace std;

int main() {
	cout << ways_to_top(3) << endl; // Should print 4
	cout << ways_to_top(4) << endl; // Should print 7
	cout << ways_to_top(5) << endl; // Should print 13
}
