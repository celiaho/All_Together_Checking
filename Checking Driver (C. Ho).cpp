// Last modified: Mon. 11/20/23 @ 4:00 PM

// // PRE-PROCESSOR DIRECTIVE SECTION
#include <iostream>
using namespace std;

// FUNCTION DECLARATION/PROTOTYPE SECTION
bool isPrime(int usersPosInt);

// MAIN SECTION
int main()
{
	// VARIABLE DECLARATION SECTION
	// Declare a variable.
	int usersPosInt;

	// Create an infinite loop for testing.
	while (true)
	{
		// Ask for # input or insert test data from a file.
		cout << "Enter a positive integer: ";
		cin >> usersPosInt;
		cin.ignore(1000, '\n');

		// Call the function and check results to see if they're correct.
		cout << usersPosInt << " is " << (isPrime(usersPosInt) ? "prime" : "composite") << ".\n\n";
	}

	system("pause");
	return 0;
// MAIN ENDS
}

// FUNCTION DEFINITION SECTION
bool isPrime(int usersPosInt)
{
	int checkLimit = sqrt(usersPosInt);

	for (int potDivisor = 2; potDivisor <= checkLimit; potDivisor++)
	{
		if (usersPosInt % potDivisor == 0)
			return false;
	}
		
	return true;
}