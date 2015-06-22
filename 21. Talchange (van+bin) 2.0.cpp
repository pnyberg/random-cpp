// Fixa: bin(102!=6)
# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int spel=1, starttal, talbin, talbintest=1, tal=0, talhelp, bintal, bintalhelp, binhelp, binextra, ask=1, asktest=1, asking=0, talextra=0, spelextra;
	float bincount=0;
	while (spel==1)
	{
	while (talbintest==1)
	{
		cout << "What do you want to do?" << endl << "1.Ordinary number to a binary number" << endl << "2.Binary number to a ordinary number" << endl << "3.Finish" << endl << "Type here: ";
		cin >> talbin;
		cout << endl;
		if (talbin==1||talbin==2||talbin==3)
			talbintest--;
		else
			cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
	}
	talbintest=1;
	if (talbin==1)
	{
	bintal=0;
	cout << "Type your number you want to make to a binary number: ";
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
	if (tal<0)
		cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
	else
		cout << starttal << " is " << bintal << " as a binary number!" << endl << endl;
	bintal=0;
	}
	else if (talbin==2)
	{
	bintalhelp=1;
	binhelp=0;
	binextra=1;
	talhelp=1;
	spelextra=0;
	//--------------------
	cout << "Type in your binary number you want to make to a ordinary number: ";
	cin >> bintal;
	cout << endl;
	starttal=bintal;
	while (bintalhelp==1)
	{
	if (bintal%10==0||bintal%10==1)
		binextra=1;
	else
		binextra=0;
	if (bintal>9)
		bintal=bintal/10;
	else
		bintalhelp=0;
	}
	if (binextra!=1)
		cout << starttal << " is no binary number!" << endl << endl;
	else
	{
	cout << starttal << " is ";
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
		cout << tal << " as a ordinary number!" << endl << endl;
	}
	tal=0;
}
	else
	{
		cout << "You're done!" << endl << endl;
		spel=0;
	}
}
}