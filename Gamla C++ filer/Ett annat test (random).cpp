# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	int a;
	srand(time(NULL));
	a=3+rand()%5-rand()%4;
	cout << a << endl;
	return 0;
}