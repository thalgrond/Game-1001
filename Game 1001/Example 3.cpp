// Outputting to a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;				// The file we're writing to

	// Opens the output file
	outputFile.open("heyo.txt");

	cout << "Now writing data to the file.\n";

	outputFile << "Oook ook ook ooook! ";
	outputFile << "\nBaaa! ";
	outputFile << "\nNeeeiiigh!";
	outputFile << "\nAwwwoooooga!";

	outputFile.close();

	cout << "Done!\n";

	system("Pause");
	return 0;
}

/*
fstream
==========

ifstream - Input file stream
ofstream - Output file system

fstream - file stream (does both input and output)
*/