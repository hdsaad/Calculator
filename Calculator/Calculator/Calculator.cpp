#include <iostream>
using namespace std;

int main()
{
	double firstNumber, secondNumber;
	int x = 1;
	char op;
	//char decision = 'y';

	do
	{
		//Takes user's first number
		cout << "Please enter your first number: ";
		cin >> firstNumber;

		//User selects operand
		cout << "Select one an operands to perform your calculation [+, -, *, /]: ";
		cin >> op;

		//Takes user's second number
		cout << "Please enter your second number: ";
		cin >> secondNumber;

		/*Based on the operand inputted will calculate using that operand
		For addition*/
		if (op == '+')
		{
			cout << firstNumber << " " << op << " " << secondNumber << " = " << firstNumber + secondNumber << endl;
		}
		//For subtraction
		else if (op == '-')
		{
			cout << firstNumber << " " << op << " " << secondNumber << " = " << firstNumber - secondNumber << endl;
		}
		//For multiplacation
		else if (op == '*')
		{
			cout << firstNumber << " " << op << " " << secondNumber << " = " << firstNumber * secondNumber << endl;
		}
		//For division
		else if (op == '/')
		{
			cout << firstNumber << " " << op << " " << secondNumber << " = " << firstNumber / secondNumber << endl;
		}
		//IF the user inputted a different character for the operand from the specified ones
		else
		{
			cout << "The operator you selected is invalid." << endl;
		}

		//Clean output
		cout << endl;
	}

	while (x == 1);
	
	return 0;
}