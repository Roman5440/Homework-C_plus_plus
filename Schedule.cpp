#include <iostream> 
#include "Fraction.h" 
#include <math.h> 
#include "phoneBook.h"
#include "User.h"
#include "FullName.h"

using namespace std;

int main()
{
	/*Fraction fraction1;
	Fraction fraction2;
	Fraction sum = fraction1 + fraction2;
	sum.reduce();
	sum.display();
	cout << endl;
	Fraction fraction3;
	Fraction fraction4;
	Fraction mult = fraction3 * fraction4;
	mult.reduce();
	mult.display();*/
	
	PhoneBook* sub = nullptr;
	PhoneBook* menu = nullptr;
	int choice;
	menu->start();
	cin >> choice;
	switch (choice)
	{
		case 1:system("cls");
			cout << "is working";
			sub->addNewSub();
			break;
		case 2:system("cls");
			//delete sub1;//нужно выбирать из списка кого удалять, а для этого нужно сделать поиск по всем сабам
	}
	system("PAUSE >> VOID");	
	
	return 0;
}