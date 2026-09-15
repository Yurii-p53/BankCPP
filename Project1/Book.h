#pragma once

#include <iostream>


using namespace std;

class BankAccount
{
	int cash = 0;
	const char* name = nullptr;
	inline static int size = 0;
public:

	BankAccount(int cash, const char* name) : cash(cash), name(name) 
	{
	}

	~BankAccount()
	{
		cout << "Destructor called" << endl;
	}

	void print() {
		size++;
		cout << "---- User " << size << " ----" << endl;
		cout << "Cash: " << cash << "$" << endl;
		cout << "Name: " << name << endl;
		
		
	}

	void setCash(int cash) {
		cash = cash;
	}

	void setName(const char* name) {
		name = name;
	}

	


};