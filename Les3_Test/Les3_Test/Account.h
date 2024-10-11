#pragma once
/*
	#pragma once
	non-standard but widely supported
	preprocessor directive designed
	to cause the current header file
	to be included only once in a
	single compilation
*/
#include <string.h>

//nieuwe klasse Account
class Account {

	/*
	access specifier.
	*/
public:
	void setName(std::string accountName) {
		name = accountName;
	}

	/*
	We declared member function getName
	as const (after the parameter list)
	because the function does not,
	and should not, modify the Account
	object on which it’s called
	*/
	std::string getName() const {
		return name;
	}

	/*
	private is an access specifier.
	to indicate that name is accessible
	only to class Account’s member functions.
	*/
private:
	std::string name = "";
};