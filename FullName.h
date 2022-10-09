#pragma once
#include <iostream>
#include <string> 

using namespace std;

class FullName
{
	string firstName;
	string lastName;
	string patronymic;
public:
	FullName(string firstName, string lastName, string patronymic)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->patronymic = patronymic;
	}
	friend ostream& operator <<(ostream& out, const FullName& u)
	{
		return out << "Full name: " << u.firstName << " " << u.lastName << " " << u.patronymic << endl;
	}
	friend istream& operator >>(istream& input, FullName& u)
	{
		input >> u.firstName >> u.lastName >> u.patronymic;
		return input;
	}
	~FullName()
	{
		cout << "Full name is destroyed" << endl;
	}
};

