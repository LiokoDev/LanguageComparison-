#include <iostream>
#include <fstream>
#include <sstream>
#include <list>

using namespace std;

/// Application entry point
/// @return Application exit code.
int main()
{
	// Read all lines of the test file into a list.
	list<string> lines;
	{
		// Open the test file for reading.
		fstream file("testfile.txt");
		if (!file.is_open())
		{
			cerr << "Error reading testfile" << endl;
			return 1;
		}

		// Loop reading lines from the file and adding them to the list.
		string line;
		while (getline(file, line))
		{
			lines.push_back(line);
		}
	}

	// Loop through the list, printing the lines.
	for (const auto &line : lines)
	{
		cout << "Read Line: " << line << endl;
	}
	return 0;
}
