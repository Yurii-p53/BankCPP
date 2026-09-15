#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include"Book.h"

using namespace std;


int main()
{

	BankAccount contact(1000, "Yurii");
	BankAccount contact2(2000, "Yurii2");
	BankAccount contact3(3000, "Yurii3");
	BankAccount contact4(4000, "Yurii4");

	contact.print();
	contact2.print();
	contact3.print();
	contact4.print();


	return 0;
}
