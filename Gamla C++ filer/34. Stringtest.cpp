# include <iostream>
# include <cstring>
using namespace std;
int main()
{
	char namn1[100], namn2[100];
	cin.getline (namn1, 100);
	cin.getline (namn2, 100);
	cout << strcmp (namn2, namn1) << endl;
	cin.getline (namn1, 100);
	cin.getline (namn2, 100);
	cout << strcmp (namn2, namn1) << endl;
}