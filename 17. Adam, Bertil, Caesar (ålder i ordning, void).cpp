# include <iostream>
using namespace std;
void kolla (int t1, int t2, int t3, int a, int b, int c)
{
	if (t1>t2&&t1>t3&&t2>t3)
	{
		if (a==1)
			cout << "Adam ";
		else if (b==1)
			cout << "Bertil ";
		else
			cout << "Caesar ";
		cout << "�r �ldst och ";
		if (a==2)
			cout << "Adam ";
		else if (b==2)
			cout << "Bertil ";
		else
			cout << "Caesar ";
		cout << "�r i mitten och ";
		if (a==3)
			cout << "Adam ";
		else if (b==3)
			cout << "Bertil ";
		else
			cout << "Caesar ";
		cout << "�r yngst!" << endl;
	}
}
int main ()
{
	int adam, bertil, caesar, a=1, b=2, c=3;
	cout << "Skriv in �lder f�r Adam: ";
	cin >> adam;
	cout << endl << "Skriv in �lder f�r Bertil: ";
	cin >> bertil;
	cout << endl << "Skriv in �lder f�r Caesar: ";
	cin >> caesar;
	cout << endl;
	kolla (adam, bertil, caesar, a, b, c);
	a=2;
	b=1;
	kolla (bertil, adam, caesar, a, b, c);
	b=3;
	c=1;
	kolla (caesar, adam, bertil, a, b, c);
	a=3;
	b=2;
	kolla (caesar, bertil, adam, a, b, c);
	b=1;
	c=2;
	kolla (bertil, caesar, adam, a, b, c);
	a=1;
	b=3;
	kolla (adam, caesar, bertil, a, b, c);
	if (adam==bertil&&adam>caesar)
		cout << "Adam och Bertil �r �ldst och Caesar �r yngst!" << endl;
	if (adam==caesar&&adam>bertil)
		cout << "Adam och Caesar �r �ldst och Bertil �r yngst!" << endl;
	if (bertil==caesar&&bertil>adam)
		cout << "Bertil och Caesar �r �ldst och Adam �r yngst!" << endl;
	if (bertil==caesar&&bertil<adam)
		cout << "Adam �r �ldst och Bertil och Caesar �r yngst!" << endl;
	if (adam==bertil&&adam<caesar)
		cout << "Caesar �r �ldst och Adam och Bertil �r yngst!" << endl;
	if (adam==caesar&&adam<bertil)
		cout << "Bertil �r �ldst och Adam och Caesar �r yngst!" << endl;
	if (adam==bertil==caesar)
		cout << "Alla �r lika gamla!" << endl;
	cout << endl;
}
