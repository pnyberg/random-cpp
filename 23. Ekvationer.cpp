// fixa bråktal, + mellan enko och kon, ta bort + ifall det är ett minsutal
# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
	float funktion=1, ask=1, asking, a, x, x2, kon, enko, tvåko, kohelp;
	while (funktion==1)
	{
	a=2;
	if (a==1)
	{
		cout << "Skriv in ditt x-värde här: ";
		cin >> enko;
		cout << "Skriv in ditt m-värde (konstant) här: ";
		cin >> kon;
		if (enko==0)
		{
			cout << endl << "Funktionen existerar inte!" << endl << endl;
		}
		else
		{
		cout << endl << "Om";
		if (enko==1)
			cout << " x";
		else if (enko==0)
			cout << " ";
		else if (enko==-1)
			cout << " -x";
		else
			cout << " " << enko << "x";
		if (kon!=0)
		{
			if (kon>0)
				cout << "+";
			cout << kon;
		}
		cout << "=0 blir x=";
		x=(0-kon)/enko;
		if (x==-0)
			x=0;
		cout << x << endl << endl;
		}
	}
	if (a==2)
	{
		cout << "Skriv in ditt x^2-värde här: ";
		cin >> tvåko;
		cout << "Skriv in ditt x-värde här: ";
		cin >> enko;
		cout << "Skriv in ditt m-värde (konstant) här: ";
		cin >> kon;
		cout << endl;
		cout << "Om";
		if (tvåko==1)
			cout << " x^2";
		else if (tvåko==0)
			cout << " ";
		else if (tvåko==-1)
			cout << " -x^2";
		else
			cout << " " << tvåko << "x^2";
		if (tvåko!=0&&(enko!=0||kon!=0)&&enko>0)
			cout << "+";
		kohelp=0;
		if (tvåko!=0&&enko==0&&kon!=0)
			kohelp=1;
		if (enko==1)
			cout << "x";
		else if (enko==0)
			cout << "";
		else if (enko==-1)
			cout << "-x";
		else
			cout << enko << "x";
		if ((enko!=0||tvåko!=0)&&kon!=0)
		{
			if (kon>0&&kohelp!=1)
				cout << "+";
			if (kon!=0)
				cout << kon;
		}
		cout << "=0" << endl << endl;
		if (sqrt(pow(enko/2,2)-kon)>=0)
		{
			x=-enko/(2*tvåko)+sqrt(pow(enko/(2*tvåko),2)-kon/tvåko);
			x2=-enko/(2*tvåko)-sqrt(pow(enko/(2*tvåko),2)-kon/tvåko);
			cout << "X";
			if (x!=x2)
				cout << "1";
			cout << "="<< x << endl;
			if (x!=x2)
				cout << "X2="<< x2 << endl;
			cout << endl;
		}
		else
			cout << "Funktionen saknar lösning!" << endl << endl;
	}
	while (ask==1)
	{
		cout << "Vill du lösa ett till tal?" << endl << "1.Ja" << endl << "2.Nej" << endl << "Type here: ";
		cin >> asking;
		cout << endl;
		if (asking==1||asking==2)
		{
			ask--;
		}
		else
			cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
		if (asking==2)
		{
			funktion--;
			cout << "Du är färdig!" << endl << endl;
		}
	}
	ask=1;
	}
	funktion=1;
}