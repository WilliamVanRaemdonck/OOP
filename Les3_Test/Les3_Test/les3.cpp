#include <iostream>
#include <string.h>
#include "Account.h"

using namespace std;

int main() {
	//maken een abject account.
	Account myAccount;

	//initiele waarde
	cout << "initial account name" << myAccount.getName();

	//read name
	cout << "\nenter account name ";

	string accountName = "";

	cin >> accountName;

	myAccount.setName(accountName);

	cout << "\nnew name = " << myAccount.getName();

	return 0;
}