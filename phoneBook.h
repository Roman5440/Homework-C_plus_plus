#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include "FullName.h"
using namespace std;

class PhoneBook
{
	User* user;
	/*string fullName;
	int homePh;
	int workPh;
	int mobPh;
	int age;*/
public:
	PhoneBook() 
	{
		//this->user = user;
		/*this->homePh = homePh;
		this->workPh = workPh;
		this->mobPh = mobPh;
		this->age = age;*/
		
	}
	
	void start() 
	{
		cout << "You open a phone book. What you want to do with subscriber?" << endl;
		cout << "1. Add new\n"
			<< "2. Delete\n"
			<< "3. Find sub\n"
			<< "4. Show all\n";
	}
	void addNewSub()
	{
		cout << "Enter info about new subscriber" << endl;
		cout << "Full name: ";
		user->getFullName();
	}
	
	~PhoneBook()
	{
		cout << "Subscriber deleted" << this->user << endl;
	}
};
/*Создайте приложение "Телефонная книга". Необходимо
хранить данные об абоненте (ФИО, домашний телефон,
рабочий телефон, мобильный телефон, дополнительная
информация о контакте) внутри соответствующего класса. 
Наполните класс переменными-членами, функциями-членами, конструкторами, inline-функциями-членами,
используйте инициализаторы, реализуйте деструктор.
Обязательно необходимо выделять динамически память
под ФИО. Предоставьте пользователю возможность добавлять новых абонентов, 
удалять абонентов, искать абонентов по ФИО, показывать всех абонентов.*/

