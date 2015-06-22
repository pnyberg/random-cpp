// Crap!
# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	float ekv=1, x3, x2, x1=0, xmin1=0, treko, tvåko, enko, kon;
	cin >> treko;
	cin >> tvåko;
	cin >> enko;
	cin >> kon;
	if (treko!=0)
	{
	if (treko==-1)
		cout << "-";
	else if (treko!=1)
		cout << treko;
	cout << "x^3";
	if (tvåko>0&&treko!=0)
		cout << "+";
	}	
	if (tvåko!=0)
	{
	if (tvåko==-1)
		cout << "-";
	else if (tvåko!=1)
		cout << tvåko;
	cout << "x^2";
	if (enko>0&&tvåko!=0)
		cout << "+";
	}
	if (enko!=0)
	{
	if (enko==-1)
		cout << "-";
	else if (enko!=1)
		cout << enko;
	cout << "x";
	if (kon>0&&enko!=0)
		cout << "+";
	}
	if (kon!=0)
		cout << kon;
	cout << "=0" << endl << endl;
	while (ekv!=0)
	{
		x3=pow(x1,3);
		x2=pow(x1,2);
		ekv=treko*x3+tvåko*x2+enko*x1+kon;
		x1=x1+0.000001;
		x3=pow(xmin1,3);
		x2=pow(xmin1,2);
		ekv=treko*x3+tvåko*x2+enko*xmin1+kon;
		xmin1=xmin1-0.000001;
		if (x1==1||xmin1==-1)
			cout << "1" << endl;
		if (x1==5||xmin1==-5)
			cout << "5" << endl;
		if (x1==10||xmin1==-10)
			cout << "10" << endl;
		if (x1==20||xmin1==-20)
			cout << "20" << endl;
		if (x1==50||xmin1==-50)
			cout << "50" << endl;
	}
	cout << x1 << " " << xmin1 << endl << endl;
}