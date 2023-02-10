#include <iostream>

using namespace std;


void DisplayMenu(){ // function for display menu that is never called. Unused function
 cout << "----------------" << endl;
 cout << "- 1)Add -" << endl;
 cout << "- 2)Subtract -" << endl;
 cout << "- 3)Multiply -" << endl;
 cout << "- 4)Exit -" << endl;
 cout << "----------------" << endl;
}
int main() {
	 int option = 0;
	 int a;
	 int b;
	while (option != 5) { // checking var option to output menu as long as option is not equal to 5
	// This menu display is called in the DisplayMenu() function that is never called as well
		cout << "----------------" << endl;
		cout << "- 1)Add -" << endl;
		cout << "- 2)Subtract -" << endl;
		cout << "- 3)Multiply -" << endl;
		cout << "- 4)Exit -" << endl; // menu option 4 for exit. It is never initialized in program
		cout << "----------------" << endl;

		cin >> option;

		if (option == 1) {
			cin >> a;
			cin >> b;
			cout << a << " - " << b << " = " << a - b << endl; // wrong math action. should be addition. wrong symbol used. Should be "+"
		}
		else if (option == 2) {
			cin >> a;
			cin >> b;
			cout << a << " - " << b << " = " << a + b << endl; // wrong math action at end of output. should be subtraction
		}
		else if (option == 3) {
			cin >> a;
			cin >> b;
			cout << a << " - "<< b << " = "<< a/ b << endl; 
			// wrong math action. should be multiplication. wrong symbol used. Should be "*"
					
		}
		return 0;
	}
}