#include <iostream>

using namespace std;



int lesson17()
{
	/*
	W3 Shcools Lesson 17 is For Loops

	For loops, in C++ the for loop has three statements: for(Statement1; Statement2; Statement3) {}
	Statement 1  is executed one time before the block of code
	Statement 2 will define the condition in which the code block will be ran
	Statement 3 is executed every time after the code block is ran
	*/

	cout << "\nNormal For Loop \n";

	for (int i = 0; i < 5; i++)
	{
		cout << i << "\n";
	}

	cout << "\nNested For loop\n";

	/*
		The Nested Loop is a for loop inside of another for loop
		the loop on the inside is ran once for every iteration of the outer loop
	*/
	for (int i = 1; i <= 3; i++)
	{
		cout << "Outer Loop:" << i << "\n";

		for (int j = 1; j <= 3; j++)
		{
			cout << "Inner Loop:  " << j << "\n";
		}
	}

	/*
		For each loop
		Exclusively to loop through the elements of an array or other data sets
	*/

	cout << "\nFor each Loop\n";

	int forEachNumbers[5] = { 11,12,13,14,15 };

	for (int i : forEachNumbers)
	{
		cout << i << "\n";
	}

	return 0;
}

int lesson18()
{
	/*
		Lesson 18 is the Break and Continue for loops

		Break statement will leave the loop or even switch statements

		Continue can be used to skip certain variables in a loop and still run through the rest 
		of the loop
	*/

	cout << "Example of a break statement:\n";

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}

		cout << i << "\n";
	}


	return 0;
}

int main()
{
	int choice;

	cout << "\n Input Which Lesson to output to console:  ";
	cin >> choice;
	cout << "\n\n";

	
	switch (choice)
	{
	case 17:
		lesson17();
	case 18:
		lesson18();
	case 0:
		break;
	}

	
	return 0;
}