# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int spel=1, talbin, talbintest=1, starttal, tal=0, talhelp, bintal=0, binhelp, binextra;
	float bincount=0;
	while (spel==1)
	{
	while (talbintest==1)
	{
		cout << "Vad vill du göra?" << endl << "1.Vanligt till binärt" << endl << "2.Binärt till vanligt" << endl << "3.Sluta" << endl << "Type here: ";
		cin >> talbin;
		cout << endl;
		if (talbin==1||talbin==2||talbin==3)
			talbintest--;
		else
			cout << "Sorry! That number isn't valid! Try again!" << endl;
	}
	talbintest=1;
	if (talbin==1)
	{
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
	else if (talbin==2)
	{
	talhelp=1;
	while (talhelp==1)
	{
	talhelp=0;
	cout << "Skriv in ditt binärtal du vill göra till ett vanligt tal: ";
	cin >> bintal;
	cout << endl;
	//--------
	bincount=0;
	binhelp=0;
	binextra=0;
	starttal=bintal;
	while (bintal>0)
	{
	bintal=starttal-binextra;
	while (bintal>1)
	{
		if (bintal%10>1&&bintal%10<10)
			talhelp=1;
		bintal=bintal/10;
		bincount++;
	}
	if (bintal>0)
	{
	binextra=pow(10,bincount);
	binhelp+=pow(2,bincount);
	bincount=0;
	}
	}
	tal=binhelp;
	if (talhelp==1)
		cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
	}
	cout << starttal << " blir " << tal << " som vanligt tal" << endl << endl;
	}
	else
	{
		cout << "Du är klar!" << endl << endl;
		spel=0;
	}
}
}