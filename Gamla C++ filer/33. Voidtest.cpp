# include <iostream>
using namespace std;
void apa (int a)
{
	a=1;
}
int main()
{
	int a=0;
	apa (a);
	cout << a << endl;
}