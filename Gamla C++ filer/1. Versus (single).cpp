# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	int HP1, HP2, att1, att2, lvl1, lvl2, lvlhelp1=1, lvlhelp2=1, atthelp1=0, atthelp2=0, choose=1, tackle=0, ember=0, turn=0, type1=0, type2=0, grassplus1=0, grassplus2=0, fireplus1=0, fireplus2=0, waterplus1=0, waterplus2=0;
	srand(time(NULL));
	while(lvlhelp1==1)
	{
		cout << "Choose wich level Player 1 should have: ";
		cin >> lvl1;
		cout << endl;
		if(lvl1>0)
			lvlhelp1--;
		if(lvl1<=0)
			cout << "Sorry, that number isn't valid, try again!" << endl << endl;
	}
	while(lvlhelp2==1)
	{
		cout << "Choose wich level Player 2 should have: ";
		cin >> lvl2;
		cout << endl;
		if(lvl2>0)
			lvlhelp2--;
		if(lvl2<=0)
			cout << "Sorry, that number isn't valid, try again!" << endl << endl;
	}
	while(type1>3||type1<1)
	{
	cout << "Choose wich type Player 1 should have: " << endl << "1.Grass" << endl << "2.Fire" << endl << "3.Water" << endl;
	cin >> type1;
	cout << endl;
	if(type1>3||type1<1)
	{
		cout << "Sorry, that number isn't valid, try again!" << endl << endl;
	}
	}
	while(type2>3||type2<1)
	{
	cout << "Choose wich type Player 2 should have: " << endl << "1.Grass" << endl << "2.Fire" << endl << "3.Water" << endl;
	cin >> type2;
	cout << endl;
	if(type2>3||type2<1)
	{
		cout << "Sorry, that number isn't valid, try again!" << endl << endl;
	}
	}
	if(type2==3)
		grassplus1=rand()%3+1;
	if(type2==2)
		grassplus1=-rand()%3+1;
	if(type1==3)
		grassplus2=rand()%3+1;
	if(type1==2)
		grassplus2=-rand()%3+1;
	if(type2==1)
		fireplus1=rand()%3+1;
	if(type2==3)
		fireplus1=-rand()%3+1;
	if(type1==1)
		fireplus2=rand()%3+1;
	if(type1==3)
		fireplus2=-rand()%3+1;
	if(type2==2)
		waterplus1=rand()%3+1;
	if(type2==1)
		waterplus1=-rand()%3+1;
	if(type1==2)
		waterplus2=rand()%3+1;
	if(type1==1)
		waterplus2=-rand()%3+1;
	HP1=lvl1*10;
	HP2=lvl2*10;
	while(HP1>0&&HP2>0)
	{
		while(choose==1)
		{
		cout << "Choose your move ";
		if(turn%2==0)
			cout << "Player 1";
		if(turn%2==1)
			cout << "Player 2";
		cout << ": " << endl << "1.Tackle" << endl;
		if(turn%2==0&&type1==1||turn%2==1&&type2==1)
			cout << "2.Vine whip" << endl;
		if(turn%2==0&&type1==2||turn%2==1&&type2==2)
			cout << "2.Ember" << endl;
		if(turn%2==0&&type1==3||turn%2==1&&type2==3)
			cout << "2.Water gun" << endl;
		if(turn%2==0)
			cin >> atthelp1;
		if(turn%2==1)
			cin >> atthelp2;
		if((turn%2==0&&atthelp1>2||turn%2==0&&atthelp1<1)||(turn%2==1&&atthelp2>2||turn%2==1&&atthelp2<1))
		{
			cout << endl << "Sorry, that number isn't valid, try again!" << endl << endl;
			att1=0;
			att2=0;
		}
		if(atthelp1==1||atthelp1==2)
			choose--;
		if(atthelp2==1||atthelp2==2)
			choose--;
		}
		choose=1;
		if(turn%2==0)
		{
			if(atthelp1==1)
				att1=rand()%7;
			if(atthelp1==2&&type1==1)
				att1=rand()%5+1+grassplus1;
			if(atthelp1==2&&type1==2)
				att1=rand()%5+1+fireplus1;
			if(atthelp1==2&&type1==3)
				att1=rand()%5+1+waterplus1;
			if(att1<0)
				att1=0;
			HP2-=att1;
		}
		if(turn%2==1)
		{
			if(atthelp2==1)
				att2=rand()%7;
			if(atthelp2==2&&type2==1)
				att2=rand()%5+1+grassplus2;
			if(atthelp2==2&&type2==2)
				att2=rand()%5+1+fireplus2;
			if(atthelp2==2&&type2==3)
				att2=rand()%5+1+waterplus2;
			if(att2<0)
				att2=0;
			HP1-=att2;
		}
		if(HP2<=0)
			HP2=0;
		if(HP1<=0)
			HP1=0;
		if(turn%2==0)
		{
		cout << endl << "Player 1 uses ";
		if(atthelp1==1)
			cout << "Tackle";
		if(atthelp1==2&&type1==1)
			cout << "Vine whip";
		if(atthelp1==2&&type1==2)
			cout << "Ember";
		if(atthelp1==2&&type1==3)
			cout << "Water gun";
		cout << " and makes " << att1 << " damage" << endl;
		}
		if(turn%2==1)
		{
		cout << endl << "Player 2 uses ";
		if(atthelp2==1)
			cout << "Tackle";
		if(atthelp2==2&&type2==1)
			cout << "Vine whip";
		if(atthelp2==2&&type2==2)
			cout << "Ember";
		if(atthelp2==2&&type2==3)
			cout << "Water gun";
		cout << " and makes " << att2 << " damage" << endl;
		}
		cout << endl << "HP f�r Player 1 �r " << HP1 << " och HP f�r Player 2 �r " << HP2 << endl << endl;
		turn++;
		atthelp1=0;
		atthelp2=0;
	}
	if(HP1>0)
		cout << "Player 1 wins!" << endl << endl;
	if(HP2>0)
		cout << "Player 2 wins!" << endl << endl;
return 0;
}