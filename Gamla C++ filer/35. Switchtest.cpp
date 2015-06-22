# include <iostream>
# include <cstdlib>
using namespace std;
int main()
{
	double x, y;
	char ops;
	cout << "X, operand och Y " << endl;
	while ((cin >> x >> ops >> y)&&ops!='0')
	{
		switch(ops)
		{
			case '+':
				cout << (x+y) << endl;
				break;
			case '-':
				cout << (x-y) << endl;
				break;
			default:
			{
				cout << "Felaktig operator" << endl;
			}
		}
		cout << "Testing" << endl;
	}
}