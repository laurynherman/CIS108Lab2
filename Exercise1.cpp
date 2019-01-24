// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	int age_in_ten_years;
	age_in_ten_years = age + 10;
	cout << "Lauryn, your age in ten years is: " << age_in_ten_years << "\n";
	
	
	int current_temp_in_F;
	cout << "Enter your current temperature: ";
	cin >> current_temp_in_F;


	int F_degrees_into_C;
	F_degrees_into_C = (current_temp_in_F - 32) * 5 / 9;
	cout << "Fahrenheit converted to Celsius " << F_degrees_into_C << "\n";



	return 0;
}


