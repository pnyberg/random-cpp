# include <iostream>
# include <ctime>
# include <windows.h>
using namespace std;
void grass (int xplace)
{
	if (xplace==1)
		cout << "x";
	else
		cout << "#";
}
void plain (int xplace)
{
	if (xplace==1)
		cout << "x";
	else
		cout << "-";
}
void hospital (int xplace)
{
	if (xplace==1)
		cout << "x";
	else
		cout << "=";
}
void sluta (int xplace)
{
	if (xplace==1)
		cout << "x";
	else
		cout << "@";
}
int main()
{
	int world=1, dir, dirtest=1, x=5, y=5, done=1, ask1, ask2=1, asktest=1, tryesc=0, exp=0, explvl, hp1, hp2, hpstart1, hpstart2, lvl1, lvl2, lvltest1=1, strength1, strength2, type1, type2, typetest1=1, att1, att2, atthelp1, atthelp2, atttest1=1, grassplus1, grassplus2, fireplus1, fireplus2, waterplus1, waterplus2, igen=1, turn=0, goheal, healtest=1, enetest, xplace=0, xmatch=1, ymatch=9;
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
	explvl=10+lvl1*5;
	cout << "Name: Player 1" << endl << "Lvl: " << lvl1 << endl << "Exp: " << exp << "/" << explvl << endl << "Type: ";
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
	if ((world==1&&y<9)||(world==2&&y<3))
		cout << "Up" << endl;
	else 
		cout << "Down" << endl;
	cout << "2.";
	if ((world==1&&y<9&&y>1)||(world==2&&y<3&&y>1&&x>4))
		cout << "Down" << endl;
	else if ((world==1&&(y==1&&x>1||y==9&&x>1))||(world==2&&((y==2||y==3)&&x>1||(y==1&&x>5))))
		cout << "Left" << endl;
	else
		cout << "Right" << endl;
	cout << "3.";
	if ((world==1&&((x==1||x==9)&&(y==1||y==9)))||(world==2&&((x==7&&(y==1||y==3))||(x==1&&y==2)||(x==5&&y==1))))
		cout << "Stay" << endl;
	else if ((world==1&&((y==1||y==9)&&x<9&&x>1||y<9&&y>1&&x==1))||(world==2&&((x>1&&y==3)||(x>1&&x<5&&y==2)||(x>5&&y==1))))
		cout << "Right" << endl;
	else
		cout << "Left" << endl;
	if ((world==1&&(x>1&&x<9||y>1&&y<9))||(world==2&&(x>1&&x<5||(x>4&&x<7&&y==3)||(x>5&&x<7&&y==1)||y==2&&x>4)))
	{
		cout << "4.";
		if ((world==1&&(x>1&&x<9&&y>1&&y<9))||(world==2&&(x>4&&x<7&&y==2)))
			cout << "Right" << endl;
		else
			cout << "Stay" << endl;
	}
	if ((world==1&&(x>1&&x<9&&y>1&&y<9))||(world==2&&((x==5||x==6)&&y==2)))
	{
	cout << "5.Stay" << endl;
	}
	cout << "Type here: ";
	cin >> dir;
	if ((world==1&&((x==1||x==9)&&(y==1||y==9)&&dir<4&&dir>0))||(world==2&&((x==1||x==7)&&(y==1||y==3)&&dir<4&&dir>0)))
		dirtest--;
	else if ((world==1&&((((x==1||x==9)&&y>1&&y<9)||(x>1&&x<9&&(y==1||y==9)))&&dir<5&&dir>0))||(world==2&&((((x==1||x==7)&&y>1&&y<3)||(x>1&&x<7&&(y==1||y==3)))&&dir<5&&dir>0)))
		dirtest--;
	else if (world==1&&(x>1&&x<9&&y>1&&y<9&&dir<6&&dir>0)||world==2&&(x>1&&x<7&&y>1&&y<3&&dir<6&&dir>0))
		dirtest--;
	else
		cout << endl << "Sorry! That number isn't valid! Try again!" << endl << endl;
	}
	dirtest=1;
	if (dir==1)
	{
		if (world==1)
		{
		if (y<9)
			y++;
		else 
			y--;
		}
		else if (world==2)
		{
		if (y<3)
			y++;
		else 
			y--;
		}
	}
	if (dir==2)
	{
		if (world==1)
		{
		if (y>1&&y<9)
			y--;
		else if (x>1)
			x--;
		else 
			x++;
		}
		else if (world==2)
		{
		if (y==2&&x>4)
			y--;
		else if ((y==1&&x==5)||(x==1&&(y==1||y==2)))
			x++;
		else 
			x--;
		}
	}
	if (dir==3)
	{
		if (world==1)
		{
		if (x>1&&y>1&&y<9)
			x--;
		else if (x==1&&y==1||x==9&&y==1||x==1&&y==9||x==9&&y==9)
		{
			x++;
			x--;
			//Stay
		}
		else
			x++;
		}
		if (world==2)
		{
		if (x>4&&y==2)
			x--;
		else if ((x==5&&y==1)||(x==1&&y==2)||(x==7&&y==1)||(x==1&&y==3)||(x==7&&y==3))
		{
			x++;
			x--;
			//Stay
		}
		else
			x++;
		}
	}
	if ((world==1&&x>1&&x<9&&y>1&&y<9&&dir==4))
	{
			x++;
	}
	if (world==2&&dir==4&&((y==1&&(x==5||x==7))||(y==2&&(x==1||x>4&&x<7))||(y==3&&(x==1||x==7))))
	{
		x++;
	}
	if (world==1&&x==9&&y==9)
	{
		world=2;
		x=2;
		y=3;
	}
	if (world==2&&x==1&&y==3)
	{
		world=1;
		x=8;
		y=9;
	}
	cout << endl << "Your position is (" << x << "," << y << ")" << endl << endl;
	if (world==1)
	{
	ymatch=9;
	while (ymatch>0)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if ((xmatch==1&&ymatch==9)||(xmatch==2&&ymatch==9)||(xmatch==3&&ymatch==9)||(xmatch==1&&ymatch==8)||(xmatch==2&&ymatch==8)||(xmatch==3&&ymatch==8)||(xmatch==1&&ymatch==7)||(xmatch==2&&ymatch==7)||(xmatch==1&&ymatch==6)||(xmatch==2&&ymatch==6))
			grass(xplace);
		else if (xmatch==5&&ymatch==5)
			hospital(xplace);
		else if (xmatch==9&&ymatch==1)
			sluta (xplace);
		else if (xmatch==9&&ymatch==9)
			cout << "/";
		else
			plain(xplace);
		xplace=0;
		xmatch++;
		if (xmatch==10)
		{
			xmatch=1;
			ymatch--;
			cout << endl;
		}
	}
	ymatch=9;
	}
	else if (world==2)
	{	
	xmatch=1;
	ymatch=3;
	while (ymatch>0)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (xmatch==1&&ymatch==3)
			cout << "/";
		else if ((xmatch==1||xmatch==2||xmatch==3||xmatch==4)&&ymatch==1)
			cout << " ";
		else
			plain(xplace);
		xplace=0;
		xmatch++;
		if (xmatch==8)
		{
			xmatch=1;
			ymatch--;
			cout << endl;
		}
	}
	ymatch=3;
	}
	//------
	cout << endl;
	enetest=rand()%4;
	if (enetest>1&&((x==1&&y==6)||(x==2&&y==6)||(x==1&&y==7)||(x==2&&y==7)||(x==1&&y==8)||(x==2&&y==8)||(x==3&&y==8)||(x==1&&y==9)||(x==2&&y==9)||(x==3&&y==9)))
	{
		ene='y';
	while (hp1>0&&igen==1)
	{
		while (ask2==1)
		{
		if (ene=='y')
		{
			lvl2=rand()%3+1;
			strength2=lvl2;
			type2=rand()%3+1;
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
					cout << "3.Escape" << endl;
					cout << "Type here: ";
					cin >> atthelp1;
					cout << endl;
					if (atthelp1==1||atthelp1==2||atthelp1==3)
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
					if (atthelp1==3)
						att1=0;
					if (att1<0)
						att1=0;
					tryesc=0;
					if (atthelp1==3)
					{
						cout << "Player 1 tries to escape!" << endl << endl;
						tryesc=rand()%4+lvl1;
						Sleep(2000);
						if (tryesc>lvl2)
						{
							cout << "Player 1 escapes successfully!" << endl << endl;
							hp2=0;
						}
						else
						{
							cout << "Player 1 fails to escape!" << endl << endl;
						}
					}
					else
					{
					hp2-=att1;
					cout << "Player 1 uses ";
					if (atthelp1==1)
						cout << "Tackle";
					if (atthelp1==2&&type1==1)
						cout << "Vine whip";
					if (atthelp1==2&&type1==2)
						cout << "Ember";
					if (atthelp1==2&&type1==3)
						cout << "Water gun";
					cout << " and makes " << att1 << " damage!" << endl << endl;
					if (hp2<0)
						hp2=0;
					}
				}
				if (turn%2==1)
				{
					atthelp2=rand()%2+1;
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
					cout << "Player 2 uses ";
					if (atthelp2==1)
						cout << "Tackle";
					if (atthelp2==2&&type2==1)
						cout << "Vine whip";
					if (atthelp2==2&&type2==2)
						cout << "Ember";
					if (atthelp2==2&&type2==3)
						cout << "Water gun";
					cout << " and makes " << att2 << " damage!" << endl << endl;
					if (hp1<0)
						hp1=0;
					tryesc=0;
				}
				if (tryesc==0)
					cout << "HP for Player 1 is " << hp1 << " and HP for Player 2 is " << hp2 << endl << endl;
				turn++;
				if (hp1==0)
					ask2--;
				if (hp2==0)
				{
					turn=0;
					ene='n';
				}
			}
	if (hp2==0)
	{
		if (tryesc<=lvl2)
		{
		exp+=lvl2*5;
		if (exp>=explvl)
		{
			exp-=explvl;
			lvl1++;
			explvl=10+lvl1*5;
			hpstart1=10+lvl1*10;
			strength1=lvl1+2; 
		}
		}
		cout << "Your position is (" << x << "," << y << ")" << endl << endl;
		while (ymatch>0)
		{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if ((xmatch==1&&ymatch==9)||(xmatch==2&&ymatch==9)||(xmatch==3&&ymatch==9)||(xmatch==1&&ymatch==8)||(xmatch==2&&ymatch==8)||(xmatch==3&&ymatch==8)||(xmatch==1&&ymatch==7)||(xmatch==2&&ymatch==7)||(xmatch==1&&ymatch==6)||(xmatch==2&&ymatch==6))
			grass(xplace);
		else if (xmatch==5&&ymatch==5)
			hospital(xplace);
		else if (xmatch==9&&ymatch==1)
			sluta (xplace);
		else if (xmatch==9&&ymatch==9)
			cout << "/";
		else
			plain(xplace);
		xplace=0;
		xmatch++;
		if (xmatch==10)
		{
			xmatch=1;
			ymatch--;
			cout << endl;
		}
	}
	ymatch=9;
	cout << endl;
	}
	}
		else
		{
			igen--;
			ask2--;
		}
		}
	ask2=1;
	}
	igen=1;
	}
	if (x==5&&y==5)
	{
		while (healtest==1)
		{
		cout << "Do you want to heal?" << endl << "1.Yes" << endl << "2.No" << endl << "Type here: ";
		cin >> goheal;
		cout << endl;
		if (goheal==1)
		{
			hp1=10+lvl1*10;
			healtest--;
		}
		else if (goheal==2)
			healtest--;
		else 
			cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
		}
		healtest=1;
		explvl=10+lvl1*5;
		cout << "Name: Player 1" << endl << "Lvl: " << lvl1 << endl << "Exp: " << exp << "/" << explvl << endl << "Type: ";
		if (type1==1)
			cout << "Grass" << endl;
		if (type1==2)
			cout << "Fire" << endl;
		if (type1==3)
			cout << "Water" << endl;
		cout << "Strength: " << strength1 << endl << "HP: " << hp1 << "/" << hpstart1 << endl << endl;
	}
	if (hp1==0)
	{
		x=5;
		y=5;
		cout << "You're dead!" << endl << endl;
		hp1=hpstart1;
	}
	else if (x==9&&y==1)
	{
		done--;
		cout << "You're done!" << endl << endl;
	}
	}
	return 0;
}