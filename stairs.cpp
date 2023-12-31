
/*********************************************************************
** Function: ways_to_top
** Description: Uses three base cases and recursively calls the function to get number of outcomes for staircase
** Parameters: An int representing the number of steps
** Pre-Conditions: none
** Post-Conditions: The number of potential outcomes is 
*********************************************************************/
int ways_to_top(int n) {
	// YOUR CODE GOES HERE
	if (n == 0 || n == 1){
		return 1;
	} else if (n == 2){
		return 2;
	}

	return ways_to_top(n - 1) + ways_to_top(n - 2) + ways_to_top(n - 3);
}
