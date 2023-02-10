#include <iostream>
#include <cassert>

using namespace std;


void DisplayMenu() { // function for display menu will be called in main function
	cout << "----------------" << endl;
	cout << "- 1)Add -" << endl;
	cout << "- 2)Subtract -" << endl;
	cout << "- 3)Multiply -" << endl;
	cout << "- 4)Exit -" << endl;
	cout << "----------------" << endl;
}
int main() {
	int option = 0; // initialize option to 0
	int a = 0; // initialize a to 0
	int b = 0; // intitialize b to 0


	while (option !=4) { // while condition changed to !=4 in order to capture exit menu option
		DisplayMenu();

		cout << "Enter an option" << endl;
		cin >> option;
		while (!cin) // while to validate input by user to match type int
		{
			cin.clear(); // clear the input data
			cin.ignore(123, '\n'); //igonore all data to max and newline
			cout << "Invalid Entry. Enter a number" << endl; //output for user to see they typed in invalid entry
			cin >> option; //user input option to start over
		}
		assert(option < 5); // assertion to validate user input is less than 5
		assert(option > 0); // assertion used to validate option is greater than 0

		if (option == 1) {
			cout << "Enter a number" << endl;
			cin >> a;
			while (!cin) // same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl; // error message
				cin.clear();
				cin.ignore(123, '\n');
				cin >> a;
			}
			cout << "Enter a number" << endl; // prompt message
			cin >> b;
			
			while (!cin)// same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl; // prompt message
				cin.clear();
				cin.ignore(123, '\n');
				cin >> b;
			}

			cout << a << " + " << b << " = " << a + b << endl; // correct math action. 

		}
		else if (option == 2) {

			cout << "Enter a number" << endl; // prompt message
			cin >> a;
			
			while (!cin)// same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl; // prompt message
				cin.clear();
				cin.ignore(123, '\n');
				cin >> a;
			}
			cout << "Enter a number" << endl; // prompt message
			cin >> b;
			
			while (!cin)// same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl; // prompt message
				cin.clear();
				cin.ignore(123, '\n');
				cin >> b;
			}
			cout << a << " - " << b << " = " << a - b << endl; // correct math action.

		}
		else if (option == 3) {
			cout << "Enter a number" << endl; // prompt message
			cin >> a;
			while (!cin)// same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl; // prompt message
				cin.clear();
				cin.ignore(123, '\n');
				cin >> a;
			}
			cout << "Enter a number" << endl; // prompt message
			cin >> b;
			while (!cin)// same validation code block as before in option input
			{
				cout << "Invalid Entry. Enter a number" << endl;
				cin.clear();
				cin.ignore(123, '\n');
				cin >> b;
			}

			cout << a << " * " << b << " = " << a * b << endl;
			// correct math action.
		}
		else if (option == 4) {
			cout << "Good Bye" << endl; // exit message
			exit(1);
		}

	  /* else if (option > 4 || option < 1) {
			cout << "Invalid Entry. Please select a number" << endl;
		   }
		*/ 
		// alternative option to check for input validation in range of 1 to 4

		

	}

}