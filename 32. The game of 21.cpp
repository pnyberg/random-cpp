// Regler: Du v�ljer vem som ska b�rja, d�refter s� turas man om att v�lja 1 eller 2. Siffran adderas sedan till en totalsumma. Den som f�rst f�r 21 eller �ver vinner.
// Det finns tre modes: player vs player (spelare mot en annan spelare), player vs computer (spelare mot en simulerad dator) och player vs computer [impossible mode] (spelare mot en simulerad dator som tar varje chans den kan f�r att vinna, dock inte om�jlig att sl�)
// Finns ett s�tt att ta impossible mode, om datorn b�rjar och du ser till att det blir j�mna "treor"
// Variablerna b�r f�rklara ungef�r vad som h�nder i respektive funktion
# include <iostream>
# include <cmath>
# include <ctime>
# include <cstring>
using namespace std;
int main()
{
	int tal1=0, tal2=0, taltest1=1, taltest2=1, totalt=0, turn, ask, asktest=1, turnask, turntest=1;
	char namn1[50], namn2[50];
	while (asktest==1)
	{
		cout << "Vad vill du g�ra?" << endl << "1.Player vs Player" << endl << "2.Player vs Computer" << endl << "3.Player vs Computer [Impossible Mode]" << endl << "Type here: ";
		cin >> ask;
		cout << endl;
		if (ask==1||ask==2||ask==3)
			asktest--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
	}
	asktest=1;
	if (ask==1)
	{
		cout << "Vilka spelar?" << endl << "Player 1: ";
		cin >> namn1;
		cout << "Player 2: ";
		cin >> namn2;
		cout << endl;
		while (turntest==1)
		{
		cout << "Vem ska b�rja?" << endl << "1." << namn1 << endl << "2." << namn2 << endl << "Type here: ";
		cin >> turnask;
		cout << endl;
		if (turnask==1||turnask==2)
			turntest--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
		}
		if (turnask==1)
			turn=0;
		else
			turn=1;
		turntest=1;
	while (totalt<21)
	{
		if (turn%2==0)
		{
		while (taltest1==1)
		{
		cout << namn1 << ": ";
		cin >> tal1;
		cout << endl;
		if (tal1==1||tal1==2)
			taltest1--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
		}
		taltest1=1;
		totalt+=tal1;
		}
		if (turn%2==1)
		{
		while (taltest2==1)
		{
		cout << namn2 << ": ";
		cin >> tal2;
		cout << endl;
		if (tal2==1||tal2==2)
			taltest2--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
		}
		taltest2=1;
		totalt+=tal2;
		}
		cout << "Totala summan �r: " << totalt << endl << endl;
		turn++;
	}
	if (turn%2==1)
		cout << namn1 << " vinner!" << endl;
	else
		cout << namn2 << " vinner!" << endl;
	cout << endl;
	}
	else if (ask==2)
	{
		cout << "Vad heter du?" << endl << "Player 1: ";
		cin >> namn1;
		cout << endl;
		while (turntest==1)
		{
		cout << "Vem ska b�rja?" << endl << "1." << namn1 << endl << "2.Computer" << endl << "Type here: ";
		cin >> turnask;
		cout << endl;
		if (turnask==1||turnask==2)
			turntest--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
		}
		if (turnask==1)
			turn=0;
		else
			turn=1;
		turntest=1;
		while (totalt<21)
		{
			if (turn%2==0)
			{
				while (taltest1==1)
				{
				cout << namn1 << ": ";
				cin >> tal1;
				cout << endl;
				if (tal1==1||tal1==2)
					taltest1--;
				else
					cout << "Det talet �r inte giltigt!" << endl << endl;
				}
				taltest1=1;
				totalt+=tal1;
			}
			if (turn%2==1)
			{
				tal2=rand()%2+1;
				cout << "Computer: " << tal2 << endl << endl;
				totalt+=tal2;
			}
			cout << "Totala summan �r: " << totalt << endl << endl;
			turn++;
		}
	if (turn%2==1)
		cout << namn1 << " vinner!" << endl;
	else
		cout << "Computer vinner!" << endl;
	cout << endl;
	}
	else
	{
		cout << "Vad heter du?" << endl << "Player 1: ";
		cin >> namn1;
		cout << endl;
		while (turntest==1)
		{
		cout << "Vem ska b�rja?" << endl << "1." << namn1 << endl << "2.Computer" << endl << "Type here: ";
		cin >> turnask;
		cout << endl;
		if (turnask==1||turnask==2)
			turntest--;
		else
			cout << "Det talet �r inte giltigt!" << endl << endl;
		}
		if (turnask==1)
			turn=0;
		else
			turn=1;
		turntest=1;
		while (totalt<21)
		{
			if (turn%2==0)
			{
				while (taltest1==1)
				{
				cout << namn1 << ": ";
				cin >> tal1;
				cout << endl;
				if (tal1==1||tal1==2)
					taltest1--;
				else
					cout << "Det talet �r inte giltigt!" << endl << endl;
				}
				taltest1=1;
				totalt+=tal1;
			}
			if (turn%2==1)
			{
				if (turnask==1)
				{
					if (tal1==2)
						tal2=1;
					else
						tal2=2;
				}
				else
				{
					if (tal1==0)
					{
						tal2=rand()%2+1;
					}
					else if (totalt%3==2)
						tal2=1;
					else if (totalt%3==1)
						tal2=2;
					else
						tal2=rand()%2+1;
				}
				cout << "Computer: " << tal2 << endl << endl;
				totalt+=tal2;
			}
			cout << "Totala summan �r: " << totalt << endl << endl;
			turn++;
		}
	if (turn%2==1)
		cout << namn1 << " vinner!" << endl;
	else
		cout << "Computer vinner!" << endl;
	cout << endl;
	}
	return 0;
}