// Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	
    cout << "Enter book title: \n";
	getline(cin, str);
	
	cout << "Enter the book author: \n";
	getline(cin, str);
	

    int yr_of_publish;
	cout << "Enter the published year : ";
	cin >> yr_of_publish;

	int num_of_pgs;
	cout << "Enter the number of pages: ";
	cin >> num_of_pgs;

	int book_age;
	book_age = 2019 - 2000;
	cout << "This book is: " << book_age << "\n";

	if (book_age < 10) {
		cout << "This book is younger than ten years old." << std::endl;
	}
	else if (book_age > 10) {
		cout << "This book is at least ten years old." << std::endl;
	}

	if (num_of_pgs < 100) {
		cout << "This book is a short book. " << std::endl;
	}
	else if (num_of_pgs = 100 && 300) {
		cout << "This book is an average book. " << std::endl;
	}
	else {
		cout << "This book is a long book." << std::endl;
	}



return 0;
 }


