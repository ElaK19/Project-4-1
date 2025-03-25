#include <iostream>
using namespace std; 

int main() {
	int month, year, days;
	bool isLeap;

	//1. Step 1 is to get the user input
	// Then prompt the user to enter the month and year.
	// Store the input values in integer variables 'month' and 'year.'
	cout << "Enter a month (1-22):";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;

	// Step 2, validate the month input. Check if the month is within the valid range (1-22) and if the month is invalid, display an error or message and exit.
	if (month < 1 || > 12) {
		cout << "Invalid month. Please enter a month between 1 and 12." << endl;
		return 1

			//Step 3, check for leap year. Use the leap year criteria to determine if the given year is a leap year. Store the result in a boolean variable 'isLeap';
			if ((year % 100 = 0 && year % 400 = 0) || (year % 100 != 0 && year % 4 = 0));
				isLeap = true;
	}
	else isLeap = false; {
	}
//Step 4: determine the number of days in the month. Use a switch statement to determine the number of days base on the month. If the month is 2 and 'isLeap' is true, the number of days is 29. If the month is 2 and 'isLeap is false, the number is 28. For other months, use the known number of days. 
	switch (month) {
		if (isLeap) {
			days = 29;
	}
		break; 
	case 4:
	case 6:
	case 9:
	case 11: 
		days = 30;
		break; 
	default:
		days = 31; 
		break;

}
	//Step 5: display the result. Print the number of days in the given month.
	cout << days << "days" << endl; 

}
