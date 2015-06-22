// funkar bara till tiosiffrigt (typ)
# include <iostream>
using namespace std;
int main()
{
	int bintal, binhelp=1, binextra=1, starttal, spel=1, asktest=1, asking=0, tal=0, talhelp=1, talextra=0, spelextra=1;
	float bincount=0;
	while (spel==1)
	{
	cout << "Skriv in ett binärtal: ";
	cin >> bintal;
	cout << endl;
	starttal=bintal;
	while (binhelp==1)
	{
	if (bintal%10==0||bintal%10==1)
	{
		binhelp=1;
		binextra=1;
	}
	else
	{
		binhelp=0;
		binextra=0;
	}
	if (bintal>9)
		bintal=bintal/10;
	else
		binhelp=0;
	}
	if (binextra!=1)
		cout << starttal << " är inget binärtal!" << endl << endl;
	else
	{
		cout << starttal << " blir ";
		while (talhelp==1)
		{
			bintal=starttal-binhelp;
			if (bintal==1)
			{
				bintal--;
				tal++;
			}
			while (bintal>1)
			{
				bintal=bintal/10;
				bincount++;
			}
			talextra=pow(2,bincount);
			if (talextra==1)
				talextra=0;
			spelextra=pow(10,bincount);
			binhelp+=spelextra;
			if (spelextra==1)
				binhelp--;
			bincount=0;
			tal=tal+talextra;
			if (bintal==0)
				talhelp--;
		}
		binhelp=1;
		talhelp=1;
		cout << tal << " som vanligt tal!" << endl << endl;
	}
	tal=0;
	while (asktest==1)
	{
	cout << "Vill du skriva in ett nytt tal till?" << endl << "1. Ja" << endl << "2. Nej" << endl << "Type here: ";
	cin >> asking;
	cout << endl;
	if (asking==1||asking==2)
		asktest--;
	else
		cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
	}
	asktest=1;
	if (asking==2)
		spel=0;
}
}