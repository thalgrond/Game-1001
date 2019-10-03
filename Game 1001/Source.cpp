#include <iostream>
using namespace std;

int main()
{
	int userInput = 1, sum = 0;

	while (true)
	{
		cout << "\nEnter a positive integer that will be added together. Type -1 to exit.\n";
		cin >> userInput;
		if (userInput == -1)
		{
			break;
		}
		sum = sum + userInput;
		cout << "\nYour added value is: " << sum << endl;
	}

	cout << "\n\nThat's all, folks!\n";

	system("Pause");
	return 0;
}