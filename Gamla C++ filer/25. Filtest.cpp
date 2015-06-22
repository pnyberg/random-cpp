# include <iostream>
# include <fstream>
# include <string>
using namespace std;
int main()
{
	string line, input;
	fstream myfile ("infil.txt");
	cin >> input;
	myfile.is_open() ;
	myfile << input << endl;
	myfile.seekg(0,ios::beg);
	getline (myfile,line);
	cout << line << endl;
	myfile.close() ;
	if (line=="pappskalle")
		cout << "Lvl 1" << endl;
	else
		cout << "Börja om" << endl;
}