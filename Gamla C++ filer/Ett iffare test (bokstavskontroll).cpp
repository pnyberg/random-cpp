# include <iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a=='j')
		cout << "Bajs" << endl;
	else if (a=='n')
		cout << "Mindre bajs" << endl;
	else if (a=='p')
		cout << "En aning mindre bajs" << endl;
	else
		cout << "Minst bajs" << endl;
	cout << a << endl;
}