# include <iostream>
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
int main()
{
	int dir, dirtest=1, x=5, y=5, done=1, ask, asktest=1, xplace=0, xmatch=1, ymatch=9;
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
	cout << endl << "Your position is (" << x << "," << y << ")" << endl << endl;
	while (ymatch>0)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if ((xmatch==1&&ymatch==9)||(xmatch==2&&ymatch==9)||(xmatch==3&&ymatch==9)||(xmatch==1&&ymatch==8)||(xmatch==2&&ymatch==8)||(xmatch==3&&ymatch==8)||(xmatch==1&&ymatch==7)||(xmatch==2&&ymatch==7)||(xmatch==1&&ymatch==6)||(xmatch==2&&ymatch==6))
			grass(xplace);
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
	cout << endl;
	xmatch=1;
	ymatch=9;
	while (asktest==1)
	{
	cout << "Do you want to move again?" << endl << "1.Yes" << endl << "2.No" << endl << "Type here: ";
	cin >> ask;
	if (ask==2)
		done--;
	if (ask==1||ask==2)
		asktest--;
	else
		cout << endl << "Sorry! That number isn't valid! Try again!" << endl;
	cout << endl;
	}
	asktest=1;
	}
	cout << "You are done! Your position is (" << x << "," << y << ")" << endl << endl;
}