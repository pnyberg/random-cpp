// fixa br�ktal, + mellan enko och kon, ta bort + ifall det �r ett minsutal
# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
	float funktion=1, ask=1, asking, a, x, x2, kon, enko, tv�ko, kohelp;
	while (funktion==1)
	{
	a=2;
	if (a==1)
	{
		cout << "Skriv in ditt x-v�rde h�r: ";
		cin >> enko;
		cout << "Skriv in ditt m-v�rde (konstant) h�r: ";
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
		cout << "Skriv in ditt x^2-v�rde h�r: ";
		cin >> tv�ko;
		cout << "Skriv in ditt x-v�rde h�r: ";
		cin >> enko;
		cout << "Skriv in ditt m-v�rde (konstant) h�r: ";
		cin >> kon;
		cout << endl;
		cout << "Om";
		if (tv�ko==1)
			cout << " x^2";
		else if (tv�ko==0)
			cout << " ";
		else if (tv�ko==-1)
			cout << " -x^2";
		else
			cout << " " << tv�ko << "x^2";
		if (tv�ko!=0&&(enko!=0||kon!=0)&&enko>0)
			cout << "+";
		kohelp=0;
		if (tv�ko!=0&&enko==0&&kon!=0)
			kohelp=1;
		if (enko==1)
			cout << "x";
		else if (enko==0)
			cout << "";
		else if (enko==-1)
			cout << "-x";
		else
			cout << enko << "x";
		if ((enko!=0||tv�ko!=0)&&kon!=0)
		{
			if (kon>0&&kohelp!=1)
				cout << "+";
			if (kon!=0)
				cout << kon;
		}
		cout << "=0" << endl << endl;
		if (sqrt(pow(enko/2,2)-kon)>=0)
		{
			x=-enko/(2*tv�ko)+sqrt(pow(enko/(2*tv�ko),2)-kon/tv�ko);
			x2=-enko/(2*tv�ko)-sqrt(pow(enko/(2*tv�ko),2)-kon/tv�ko);
			cout << "X";
			if (x!=x2)
				cout << "1";
			cout << "="<< x << endl;
			if (x!=x2)
				cout << "X2="<< x2 << endl;
			cout << endl;
		}
		else
			cout << "Funktionen saknar l�sning!" << endl << endl;
	}
	while (ask==1)
	{
		cout << "Vill du l�sa ett till tal?" << endl << "1.Ja" << endl << "2.Nej" << endl << "Type here: ";
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
			cout << "Du �r f�rdig!" << endl << endl;
		}
	}
	ask=1;
	}
	funktion=1;
}