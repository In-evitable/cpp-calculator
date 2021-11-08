#include <iostream>
#include "calculator.h"

// constructor
Calculator::Calculator() {}

void Calculator::Input() {
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;
}

void Calculator::Add() {
	std::cout << "The result is: ";
	double c = a + b;
	std::cout << c << std::endl;
}

void Calculator::Subtract() {
	std::cout << "The result is: ";
	double c = a - b;
	std::cout << c << std::endl;
}

void Calculator::Multiply() {
	std::cout << "The result is: ";
	double c = a * b;
	std::cout << c << std::endl;
}

void Calculator::Divide() {
	std::cout << "The result is: ";
	double c = a / b;
	std::cout << c << std::endl;
}
