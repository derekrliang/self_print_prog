#include <iostream> // write output
#include <fstream> // read from files
#include <string>

using namespace std;

int main()
{
	cout << "Code file: " << __FILE__ << endl;

	ifstream src_file;
	src_file.open(__FILE__);

	string line;
	while (!src_file.eof())
	{
		getline(src_file, line);
		cout << line << endl;
	}

	return 0;
}