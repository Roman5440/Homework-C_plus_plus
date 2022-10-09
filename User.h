#pragma once
#include <iostream>
#include "FullName.h"
#include <string> 

using namespace std;

class User 
{
	FullName* fullName;
	string phone;
	string additionalInfo;
public:
	
	/*User(FullName* fN, string ph)
	{
		this->fullName = fN;
		this->phone = ph;
		this->additionalInfo = "";
	}*/

	void setAdditionalInfo(string additionalInfo)
	{
		this->additionalInfo = additionalInfo;
	}

	FullName getFullName()
	{
		return *(this->fullName);
	}

	friend istream& operator >>(istream& input, User& u)
	{
		//input >> u.fullName;
		

	}

	friend ostream& operator <<(ostream& out, const User& u)
	{
		return out << "Full name: " << u.fullName << "\nPhone: " << u.phone << "\nAdditional info about user: " << u.additionalInfo << endl;
	}

};

