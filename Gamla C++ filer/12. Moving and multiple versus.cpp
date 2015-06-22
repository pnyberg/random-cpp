# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	int dir, dirtest=1, x=5, y=5, done=1, ask1, asktest=1, hp1, hp2, hpstart1, hpstart2, lvl1, lvl2, lvltest1=1, lvltest2=1, strength1, strength2, type1, type2, typetest1=1, typetest2=1, att1, att2, atthelp1, atthelp2, atttest1=1, atttest2=1, grassplus1, grassplus2, fireplus1, fireplus2, waterplus1, waterplus2, igen=1, ask2=1, turn=0, goheal, healtest=1;
	char ene;
	srand(time(NULL));
		while (lvltest1==1)
	{
	cout << "Choose lvl for Player 1 is: ";
	cin >> lvl1;
	if (lvl1<1)
		cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
	if (lvl1>0)
	{
			lvltest1--;
	}
	}
	strength1=lvl1+2; 
	cout << endl;
	lvltest1=1;
	while (typetest1==1)
	{
	cout << "Choose type for Player 1 is:" << endl << "1.Grass" << endl << "2.Fire" << endl << "3.Water" << endl << "Type here: ";
	cin >> type1;
	cout << endl;
	if (type1<1||type1>3)
		cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
	if (type1>0&&type1<4)
		typetest1--;
	}
	typetest1=1;
	hp1=10+lvl1*10;
	hpstart1=hp1;
	cout << "Name: Player 1" << endl << "Lvl: " << lvl1 << endl << "Type: ";
		if (type1==1)
			cout << "Grass" << endl;
		if (type1==2)
			cout << "Fire" << endl;
		if (type1==3)
			cout << "Water" << endl;
		cout << "Strength: " << strength1 << endl << "HP: " << hp1 << "/" << hpstart1 << endl << endl;
	while (done==1)
	{
	while (dirtest==1)
	{
	cout << "Choose wich direction you want to go" << endl;
	cout << "1.";
	if (y<9)
		cout << "Up" << endl;
	else 
		cout << "Down" << endl;
	cout << "2.";
	if (y<9&&y>1)
		cout << "Down" << endl;
	else if (y==1&&x>1||y==9&&x>1)
		cout << "Left" << endl;
	else
		cout << "Right" << endl;
	cout << "3.";
	if ((x==1||x==9)&&(y==1||y==9))
		cout << "Stay" << endl;
	else if ((y==1||y==9)&&x<9&&x>1||y<9&&y>1&&x==1)
		cout << "Right" << endl;
	else
		cout << "Left" << endl;
	if (x>1&&x<9||y>1&&y<9)
	{
		cout << "4.";
		if (x>1&&x<9&&y>1&&y<9)
			cout << "Right" << endl;
		else
			cout << "Stay" << endl;
	}
	if (x>1&&x<9&&y>1&&y<9)
	{
	cout << "5.Stay" << endl;
	}
	cout << "Type here: ";
	cin >> dir;
	if ((x==1||x==9)&&(y==1||y==9)&&dir<4&&dir>0)
		dirtest--;
	else if ((((x==1||x==9)&&y>1&&y<9)||(x>1&&x<9&&(y==1||y==9)))&&dir<5&&dir>0)
		dirtest--;
	else if (x>1&&x<9&&y>1&&y<9&&dir<6&&dir>0)
		dirtest--;
	else
		cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
	}
	cout << endl;
	dirtest=1;
	if (dir==1)
	{
		if (y<9)
			y++;
		else 
			y--;
	}
	if (dir==2)
	{
		if (y>1&&y<9)
			y--;
		else if (x>1)
			x--;
		else 
			x++;
	}
	if (dir==3)
	{
		if (x>1&&y>1&&y<9)
			x--;
		else if (x==1&&y==1||x==9&&y==1||x==1&&y==9||x==9&&y==9)
		{
			x++;
			x--;
		}
		else
			x++;
	}
	if (x>1&&x<9&&y>1&&y<9&&dir==4)
	{
			x++;
	}
	cout << "Your position is (" << x << "," << y << ")" << endl;
	if (x==1&&y==9)
		cout << "x";
	else
		cout << "#";
	if (x==2&&y==9)
		cout << "x";
	else
		cout << "#";
	if (x==3&&y==9)
		cout << "x";
	else
		cout << "#";
	if (x==4&&y==9)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==9)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==9)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==9)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==9)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==9)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==8)
		cout << "x";
	else
		cout << "#";
	if (x==2&&y==8)
		cout << "x";
	else
		cout << "#";
	if (x==3&&y==8)
		cout << "x";
	else
		cout << "#";
	if (x==4&&y==8)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==8)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==8)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==8)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==8)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==8)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==7)
		cout << "x";
	else
		cout << "#";
	if (x==2&&y==7)
		cout << "x";
	else
		cout << "#";
	if (x==3&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==7)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==7)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==6)
		cout << "x";
	else
		cout << "#";
	if (x==2&&y==6)
		cout << "x";
	else
		cout << "#";
	if (x==3&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==6)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==6)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==2&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==3&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==5)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==5)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==2&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==3&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==4)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==4)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==2&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==3&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==3)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==3)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==2&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==3&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==2)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==2)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	if (x==1&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==2&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==3&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==4&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==5&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==6&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==7&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==8&&y==1)
		cout << "x";
	else
		cout << "-";
	if (x==9&&y==1)
		cout << "x" << endl;
	else
		cout << "-" << endl;
	cout << endl;
	if ((x==1&&y==6)||(x==2&&y==6)||(x==1&&y==7)||(x==2&&y==7)||(x==1&&y==8)||(x==2&y==8)||(x==3&&y==8)||(x==1&&y==9)||(x==2&y==9)||(x==3&&y==9))
	{
		ene='y';
	while (hp1>0&&igen==1)
	{
		while (ask2==1)
		{
		if (ene=='y')
		{
			while (lvltest2==1)
			{
			cout << "Choose lvl for PLayer 2 is: ";
			cin >> lvl2;
			cout << endl;
			if (lvl2<1)
				cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
			if (lvl2>0)
				lvltest2--;
			}
			strength2=lvl2;
			lvltest2=1;
			while (typetest2==1)
			{
			cout << "Choose type for Player 2 is:" << endl << "1.Grass" << endl << "2.Fire" << endl << "3.Water" << endl << "Type here: ";
			cin >> type2;
			cout << endl;
			if (type2<1||type2>3)
				cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
			if (type2>0&&type2<4)
				typetest2--;
			}
			typetest2=1;
			hp2=lvl2*10;
			hpstart2=hp2;
			cout << "Name: Player 2" << endl << "Lvl: " << lvl2 << endl << "Type: ";
			if (type2==1)
				cout << "Grass" << endl;
			if (type2==2)
				cout << "Fire" << endl;
			if (type2==3)
				cout << "Water" << endl;
			cout << "Strength: " << strength2 << endl << "HP: " << hp2 << "/" << hpstart2 << endl << endl;
			while (hp1>0&&hp2>0)
			{
				if (turn%2==0)
				{
					while (atttest1==1)
					{
					cout << "Choose attack for Player 1" << endl << "1.Tackle" << endl;
					if (type1==1)
						cout << "2.Vine whip" << endl;
					if (type1==2)
						cout << "2.Ember" << endl;
					if (type1==3)
						cout << "2.Water gun" << endl;
					cout << "Type here: ";
					cin >> atthelp1;
					if (atthelp1==1||atthelp1==2)
						atttest1--;
					else 
						cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
					}
					atttest1=1;
					if (type2==3)
						grassplus1=strength1+rand()%3;
					else if (type2==2)
						grassplus1=-1-rand()%3;
					else
						grassplus1=0;
					if (type2==1)
						fireplus1=strength1+rand()%3;
					else if (type2==3)
						fireplus1=-1-rand()%3;
					else
						fireplus1=0;
					if (type2==2)
						waterplus1=strength1+rand()%3;
					else if (type2==1)
						waterplus1=-1-rand()%3;
					else
						waterplus1=0;
					if (atthelp1==1)
						att1=strength1+rand()%6;
					if (atthelp1==2&&type1==1)
						att1=strength1+rand()%4+grassplus1;
					if (atthelp1==2&&type1==2)
						att1=strength1+rand()%4+fireplus1;
					if (atthelp1==2&&type1==3)
						att1=strength1+rand()%4+waterplus1;
					if (att1<0)
						att1=0;
					hp2-=att1;
					cout << endl << "Player 1 uses ";
					if (atthelp1==1)
						cout << "Tackle";
					if (atthelp1==2&&type1==1)
						cout << "Vine whip";
					if (atthelp1==2&&type1==2)
						cout << "Ember";
					if (atthelp1==2&&type1==3)
						cout << "Water gun";
					cout << " and makes " << att1 << " damage!" << endl;
					if (hp2<0)
						hp2=0;
				}
				if (turn%2==1)
				{
					while (atttest2==1)
					{
					cout << "Choose attack for Player 2" << endl << "1.Tackle" << endl;
					if (type2==1)
						cout << "2.Vine whip" << endl;
					if (type2==2)
						cout << "2.Ember" << endl;
					if (type2==3)
						cout << "2.Water gun" << endl;
					cout << "Type here: ";
					cin >> atthelp2;
					if (atthelp2==1||atthelp2==2)
						atttest2--;
					else
						cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
					}
					atttest2=1;
					if (type1==3)
						grassplus2=strength2+rand()%3;
					else if (type1==2)
						grassplus2=-1-rand()%3;
					else
						grassplus2=0;
					if (type1==1)
						fireplus2=strength2+rand()%3;
					else if (type1==3)
						fireplus2=-1-rand()%3;
					else 
						fireplus2=0;
					if (type1==2)
						waterplus2=strength2+rand()%3;
					else if (type1==1)
						waterplus2=-1-rand()%3;
					else
						waterplus2=0;
					if (atthelp2==1)
						att2=strength2+rand()%6;
					if (atthelp2==2&&type2==1)
						att2=strength2+rand()%4+grassplus2;
					if (atthelp2==2&&type2==2)
						att2=strength2+rand()%4+fireplus2;
					if (atthelp2==2&&type2==3)
						att2=strength2+rand()%4+waterplus2;
					if (att2<0)
						att2=0;
					hp1-=att2;
					cout << endl << "Player 2 uses ";
					if (atthelp2==1)
						cout << "Tackle";
					if (atthelp2==2&&type2==1)
						cout << "Vine whip";
					if (atthelp2==2&&type2==2)
						cout << "Ember";
					if (atthelp2==2&&type2==3)
						cout << "Water gun";
					cout << " and makes " << att2 << " damage!" << endl;
					if (hp1<0)
						hp1=0;
				}
				cout << endl << "HP for Player 1 is " << hp1 << " and HP for Player 2 is " << hp2 << endl << endl;
				turn++;
				if (hp1==0)
					ask2--;
				if (hp2==0)
				{
					turn=0;
					ene='n';
				}
			}
		}
		else
		{
			igen--;
			ask2--;
		}
		}
	ask2=1;
	//HHHHHHHHHHHHHHHHHHHHHHHhHHHHHHHHHHHHHHHHHhhhhhhhhhhhhhhhhhH
	}
	igen=1;
	}
	while (asktest==1)
	{
	cout << "Do you want to move again?" << endl << "1.Yes" << endl << "2.No" << endl << "Type here: ";
	cin >> ask1;
	if (ask1==2)
		done--;
	if (ask1==1||ask1==2)
		asktest--;
	cout << endl;
	}
	asktest=1;
	}
	cout << "The end! ";
	if (hp1==0)
		cout << "You're dead!" << endl;
	if (igen==0)
		cout << "You're done!" << endl;
	if (ask1==2)
	{
		cout << "You are done! Your position is (" << x << "," << y << ")" << endl << endl;
	}
	return 0;
}