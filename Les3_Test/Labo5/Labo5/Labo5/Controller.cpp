#include <iostream>
#include <string.h>
#include <vector>

#include "Customer.h"

using namespace std;

int main() {
	int exit = 1;
	string username = "";
	int option = 0;

	Customer customers[50];

	Company company1 = { "company1", 100 };

	customers[0] = Customer("Admin", "street1", 'O', "company1", 100);
	customers[1] = Customer("Bob", "street2", 'E', "company2", 5);

	cout << "Log in" << endl << "username: ";
	cin >> username;

	while (exit)
	{
		//TODO if user is owner

		cout << "welkom " + username << endl;
		cout << "enter a letter to continue:" << endl;
		cout << "0: exit program:" << endl;

		//TODO IF OWNER
		cout << "1: add article" << endl;
		cout << "2: delete article" << endl;
		cout << "3: delete customer" << endl;

		//TODO IF EMPLOYEE
		cout << "4: change article" << endl;
		cout << "5: check invoices:" << endl;
		cout << "6: place order:" << endl;
		cout << "7: change customer:" << endl;
		cout << "8: add a customer" << endl;

		cin >> option;
		switch (option)
		{
		case 0:
			exit = 0;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
			
		default:
			cout << "invalid option" << endl;
			break;
		}
	}

	cout << "Shutting Down";

	return 0;
}