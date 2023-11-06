#include <iostream>

using namespace std;

int main()
{
	int myInt = 232;
	double myDbl = 268.96;
	string myStr = "This is a string, its basically a sentence";
	bool myTF = true;
	const double Pi = 3.14159;
	double x;

	cout << myInt << "\t This is an Int, which is a whole number with no decimals \n\n";
	cout << myDbl << "\t This is an Double, which is a number that can be an int and have decimals \n\n";
	cout << myStr << "\n\n";
	cout << myTF << "\t This is a boolean, which is a true false value or a 1/0 \n\n";
	cout << Pi << "\n\n";

	cout << "What times pi is?";
	cin >> x;
	cout << x * Pi << "\n\n";

	double myTime;

	cout << "How long was your drive??";
	cin >> myTime;

	if (myTime >= 60.00)
	{
		cout << "thats A long fuuking time";
	}
	else if (30 < myTime < 60)
	{
		"Thats bearable but barely";
	}
	else
	{
		cout << "Fuuk you no tip";
	}

	int pete = 12;

	while (pete < 22)
	{
		cout << pete << ", ";

		pete++;
	}

	return 0;
}

string dataAmount()
{
	string x, y, z, w, v;

	x = "1 byte";
	y = "1 byte";
	z = "2 0r 4 bytes";
	w = "4 bytes";
	v = "8 bytes";

	return 0;
}