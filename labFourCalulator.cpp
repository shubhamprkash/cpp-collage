// calculator with add(), sub(), div(), multi() functions;

#include<iostream>
using namespace std;

class Calculator
{
float a, b;
public:

	void result()
	{
		cout << "Enter First Number: ";
		cin >> a;
		cout << "Enter Second Number: ";
		cin >> b;
	}
    
	float add()
	{
		return a + b;
	}

	float sub()
	{
		return a - b;
	}

	float multi()
	{
		return a * b;
	}

	float div()
	{		
		return a / b;
	}
};

int main()
{
	int ch;
	Calculator c;
	cout << "Enter 1 to Add 2 Numbers" <<
			"\nEnter 2 to Subtract 2 Numbers" <<
			"\nEnter 3 to Multiply 2 Numbers" <<
			"\nEnter 4 to Divide 2 Numbers" <<
			"\nEnter 0 To Exit";
	do{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			c.result();	
			
			// add function
			cout << "Result: " <<c.add() << endl;
			break;
		case 2:
			
			// sub function
			c.result();
			cout << "Result: " <<c.sub() << endl;
			break;
		case 3:
			c.result();
			
			// multi function
			cout << "Result: " <<c.multi() << endl;
			break;
		case 4:
			c.result();
			
			// div function 
			cout << "Result: " <<c.div() << endl;
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}
