#include <iostream>
#include "Plane.h"
using namespace std;

int main()
{
	plane cosc1430;

	cosc1430.display_seats();
	while (true)
	{
		cout << "Pick one of these options" << endl;
		cout << "1. Book a Seat," << endl;
		cout << "2. Check a Seat" << endl;
		cout << "3. Display all Seats" << endl;
		cout << "4. Clear a Seat" << endl;
		cout << "5. Empty all Seats" << endl;
		cout << "6. Exit" << endl;
		cout << "input : ";
		int user_input;
		cin >> user_input;

		switch (user_input)
		{
			case 1: cosc1430.book_seat();
				break;
			case 2: cosc1430.check_seat();
				break;
			case 3: cosc1430.display_seats();
				break;
			case 4: cosc1430.clear_seat();
				break;
			case 5:cosc1430.clear_all_seats();
				break;
			case 6: cosc1430.~plane();
				exit(0);
		default: 
			cout << "Wrong Choice" << endl;
		}
	} 
}