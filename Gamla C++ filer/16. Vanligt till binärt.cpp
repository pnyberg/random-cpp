# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int starttal, tal, talhelp, bintal=0, binhelp, binextra;
	float bincount=0;
	cout << "Skriv in ditt tal du vill göra till ett binärtal: ";
	cin >> tal;
	cout << endl;
	starttal=tal;
	while (tal>=1)
	{
	if(tal==1)
	{
		tal--;
		bintal++;
	}
	talhelp=tal;
	while (talhelp>1)
	{
	talhelp=talhelp/2;
	bincount++;
	}
	if (tal>0)
	{
	binhelp=pow(10,bincount);
	binextra=pow(2,bincount);
	bintal+=binhelp;
	tal-=binextra;
	bincount=0;
	}
	}
	cout << starttal << " blir " << bintal << " som binärtal!" << endl << endl;
}