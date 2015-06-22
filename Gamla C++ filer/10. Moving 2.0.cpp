# include <iostream>
using namespace std;
int main()
{
	int dir, dirtest=1, x=5, y=5, done=1, ask, asktest=1;
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
	while (asktest==1)
	{
	cout << "Do you want to move again?" << endl << "1.Yes" << endl << "2.No" << endl << "Type here: ";
	cin >> ask;
	if (ask==2)
		done--;
	if (ask==1||ask==2)
		asktest--;
	cout << endl;
	}
	asktest=1;
	}
	cout << "You are done! Your position is (" << x << "," << y << ")" << endl << endl;
}