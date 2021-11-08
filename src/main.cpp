#include <iostream>
#include "calculator.h"

int main() {
	Calculator calculator;

/*	calculator.Input();
	calculator.Add();
	calculator.Subtract();
	calculator.Multiply();
	calculator.Divide();
*/

	bool stop = false;

	while (!stop)  {
		std::cout << "Enter your operation ( + - * / ) press q to quit  : ";
		std::string input;
		std::cin >> input;
		
		calculator.Input();

		if (input == "+") calculator.Add();
		else if (input == "-") calculator.Subtract();
		else if (input == "*") calculator.Multiply();
		else if (input == "/") calculator.Divide();
		else if (input == "q") {stop=true; break;}
		else std::cout << "Please enter a valid operation\n";
	};

	return 0;
}
