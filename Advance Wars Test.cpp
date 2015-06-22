// Rörelse?...

# include <iostream>
# include <cstring>
using namespace std;
void plain (int player1place, int player2place)
{
	if (player1place==1)
		cout << "a";
	else if (player2place==1)
		cout << "b";
	else
		cout << "-";
}
void map (int player1place, int player2place, int xmin, int ymax, int ax1, int ay1, int bx1, int by1)
{
	if (ax1==xmin&&ay1==ymax)
		player1place=1;
	if (bx1==xmin&&by1==ymax)
		player2place=1;
	plain (player1place, player2place);
}
int main ()
{
	int spel=1, world, turn=1, ymin=1, ymax=10, xmin=1, xmax=10, nearby=0;
	int move1, movetest1=1, player1place=0, ax1, ay1;
	int move2, movetest2=1, player2place=0, bx1, by1;
	char cinmove1[100], cinmove2[100];
	cin >> world;
	if (world==1)
	{
		ax1=5;
		ay1=7;
		bx1=6;
		by1=4;
		ymax=10;
		ymin=1;
		xmax=10;
		xmin=1;
	}
	else if (world==2)
	{
		ax1=1;
		ay1=7;
		bx1=8;
		by1=1;
		ymax=7;
		ymin=1;
		xmax=8;
		xmin=1;
	}
	while (spel==1)
	{
// Player 1's tur
		if (turn%2==1)
		{
			cout << "Player 1 - Day " << (turn+1)/2 << endl << endl;
			nearby=0;
			if ((by1==ay1&&((bx1==(ax1-1))||(bx1==(ax1+1))))||(((by1==(ay1-1))||(by1==(ay1+1)))&&bx1==ax1))
				nearby=1;
			while (movetest1==1)
			{
// Movelaternativ för Player 1
				cout << "Choose what you want to do: " << endl << "1.";
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&((bx1!=ax1)||(by1!=(ay1+1))))
					cout << "Up";
				else if (ay1>1&&((bx1!=ax1)||(by1!=(ay1-1))))
					cout << "Down";
				else if (ax1>1)
					cout << "Left";
				else
					cout << "Right";
				cout << endl << "2.";
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&ay1>1&&((bx1!=ax1)||(by1!=(ay1+1)&&by1!=(ay1-1))))
					cout << "Down" << endl;
				else if (ax1>1&&((bx1!=(ax1-1))||(by1!=ay1))&&((ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7)))||((bx1!=ax1&&((by1!=(ay1-1))||by1!=(ay1+1)))&&((ay1==1)||(world==1&&ay1==10)||(world==2&&ay1==7)))||(nearby==0)))
					cout << "Left" << endl;
				else if ((nearby==0&&ax1==1&&(ay1==1||(world==1&&ay1==10)||(world==2&&ay1==7)))||(nearby==1&&((ax1>1&&ax1<8&&((ay1==1)||(world==1&&ay1==10)||(world==2&&ay1==7)))||(ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1==1))&&(by1!=ay1||bx1!=(ax1+1))))
					cout << "Right" << endl;
				else
					cout << "Stay" << endl;
				if ((ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7)))||(ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8)))||(nearby==0))
				{
					cout << "3.";
					if (ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&((nearby==0)||(by1==ay1&&bx1==(ax1+1))))
						cout << "Left";
					else if (((world==1&&ax1<10)||(world==2&&ax1<8))&&((nearby==0&&(((ay1==1||(world==1&&ay1==10)||(world==2&&ay1==7))&&ax1>1)||(ax1==1&&ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7)))))||(nearby==1&&ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&(by1!=ay1||bx1!=(ax1+1)))))
						cout << "Right";
					else 
						cout << "Stay";
				}
				if ((ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&((ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8)))||(nearby==0)))||(nearby==0&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))))
				{
					cout << endl << "4.";
					if (ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))&&nearby==0)
						cout << "Right";
					else
						cout << "Stay";
				}
				if (ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))&&nearby==0)
					cout << endl << "5.Stay";
				cout << endl << "Type here: ";
// Moveinmatning för Player 1
				cin >> cinmove1;
				cout << endl;
				if (cinmove1[0]=='1'&&cinmove1[1]=='\0')
					move1=1;
				else if (cinmove1[0]=='2'&&cinmove1[1]=='\0')
					move1=2;
				else if (cinmove1[0]=='3'&&cinmove1[1]=='\0'&&((ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7)))||(ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8)))||(nearby==0)))
					move1=3;
				else if (cinmove1[0]=='4'&&cinmove1[1]=='\0'&&((((ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7)))||(ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))))&&nearby==0)||(ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8)))))
					move1=4;
				else if (cinmove1[0]=='5'&&cinmove1[1]=='\0'&&ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))&&nearby==0)
					move1=5;
				else
					move1=0;
				if (move1==1||move1==2||move1==3||move1==4||move1==5)
					movetest1--;
				else
					cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
			}
			movetest1=1;
// Player 1 "Flyttar"
			if (move1==1)
			{
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&(by1!=(ay1+1)||bx1!=ax1))
					ay1++;
				else if (ay1>1&&(by1!=(ay1-1)||bx1!=ax1))
					ay1--;
				else if (ax1>1)
					ax1--;
				else
					ax1++;
			}
			else if (move1==2)
			{
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&ay1>1&&((by1!=(ay1-1)&&by1!=(ay1+1))||bx1!=ax1))
					ay1--;
				else if (ax1>1&&(((nearby==0||(by1==ay1&&bx1==(ax1+1)))&&(ay1==1||(world==1&&ay1==10)||(world==2&&ay1==7)))||(ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&((bx1==ax1&&(by1==(ay1-1)||by1==(ay1+1)))||(bx1==(ax1+1)&&by1==ay1)))))
					ax1--;
				else if (((world==1&&ax1<10)||(world==2&&ax1<8))&&((((nearby==0&&ax1==1)||(ax1>1&&((by1!=ay1)||(bx1!=(ax1+1)))))&&(ay1==1||(world==1&&ay1==10)||(world==2&&ay1==7)))||(ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&ax1==1&&bx1==ax1&&(by1==(ay1-1)||by1==(ay1+1)))))
					ax1++;
				else
				{
					// Stay
				}
			}
			else if (move1==3)
			{
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&ay1>1&&ax1>1&&(nearby==0||(by1==ay1&&bx1==(ax1+1))))
					ax1--;
				else if ((((ax1==1)||(world==1&&ax1==10)||(world==2&&ax1==8))&&((ay1==1)||(world==1&&ay1==10)||(world==2&&ay1==7))&&nearby==0)||(((ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))&&((ay1==1)||(world==1&&ay1==10)||(world==2&&ay1==7)))||(ay1>1&&((world==1&&ay1<10)||(world==2&&ay1<7))&&((ax1==1)||(world==1&&ax1==10)||(world==2&&ax1==8))))&&nearby==1))
				{
					// Stay
				}
				else
					ax1++;
			}
			else if (move1==4)
			{
				if (((world==1&&ay1<10)||(world==2&&ay1<7))&&ay1>1&&ax1>1&&((world==1&&ax1<10)||(world==2&&ax1<8))&&nearby==0)
					ax1++;
				else
				{
					// Stay
				}
			}
			else if (move1==5)
			{
				// Stay
			}
// Skriver ut kartan
			while (ymin<=ymax)
			{
				xmin=1;
				while (xmin<=xmax)
				{
					map (player1place, player2place, xmin, ymax, ax1, ay1, bx1, by1);
					xmin++;
				}
				cout << endl;
				ymax--;
			}
			if (world==1)
			{
				ymax=10;
				xmin=1;
			}
			else if (world==2)
			{
				ymax=7;
				xmin=1;
			}
			cout << endl << "Position is (" << ax1 << "," << ay1 << ")" << endl << endl;
		}
// Player 2's tur
		else if (turn%2==0)
		{
			cout << "Player 2 - Day " << turn/2 << endl << endl;
			nearby=0;
			if ((ay1==by1&&((ax1==(bx1-1))||(ax1==(bx1+1))))||(((ay1==(by1-1))||(ay1==(by1+1)))&&ax1==bx1))
				nearby=1;
			while (movetest2==1)
			{
// Movelaternativ för Player 2
				cout << "Choose what you want to do: " << endl << "1.";
				if (((world==1&&by1<10)||(world==2&&by1<7))&&((ax1!=bx1)||(ay1!=(by1+1))))
					cout << "Up";
				else if (by1>1&&((ax1!=bx1)||(ay1!=(by1-1))))
					cout << "Down";
				else if (bx1>1)
					cout << "Left";
				else
					cout << "Right";
				cout << endl << "2.";
				if (((world==1&&by1<10)||(world==2&&by1<7))&&by1>1&&((ax1!=bx1)||(ay1!=(by1+1)&&ay1!=(by1-1))))
					cout << "Down" << endl;
				else if (bx1>1&&((ax1!=(bx1-1))||(ay1!=by1))&&((by1>1&&((world==1&&by1<10)||(world==2&&by1<7)))||((ax1!=bx1&&((ay1!=(by1-1))||ay1!=(by1+1)))&&((by1==1)||(world==1&&by1==10)||(world==2&&by1==7)))||(nearby==0)))
					cout << "Left" << endl;
				else if ((nearby==0&&bx1==1&&(by1==1||(world==1&&by1==10)||(world==2&&by1==7)))||(nearby==1&&((bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&((by1==1)||(world==1&&by1==10)||(world==2&&by1==7)))||(by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1==1))&&(ay1!=by1||ax1!=(bx1+1))))
					cout << "Right" << endl;
				else
					cout << "Stay" << endl;
				if ((by1>1&&((world==1&&by1<10)||(world==2&&by1<7)))||(bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8)))||(nearby==0))
				{
					cout << "3.";
					if (by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&((nearby==0)||(ay1==by1&&ax1==(bx1+1))))
						cout << "Left";
					else if (((world==1&&bx1<10)||(world==2&&bx1<8))&&((nearby==0&&(((by1==1||(world==1&&by1==10)||(world==2&&by1==7))&&bx1>1)||(bx1==1&&by1>1&&((world==1&&by1<10)||(world==2&&by1<7)))))||(nearby==1&&by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&(ay1!=by1||ax1!=(bx1+1)))))
						cout << "Right";
					else 
						cout << "Stay";
				}
				if ((by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&((bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8)))||(nearby==0)))||(nearby==0&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))))
				{
					cout << endl << "4.";
					if (by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&nearby==0)
						cout << "Right";
					else
						cout << "Stay";
				}
				if (by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&nearby==0)
					cout << endl << "5.Stay";
				cout << endl << "Type here: ";
// Moveinmatning för Player 2
				cin >> cinmove2;
				cout << endl;
				if (cinmove2[0]=='1'&&cinmove2[1]=='\0')
					move2=1;
				else if (cinmove2[0]=='2'&&cinmove2[1]=='\0')
					move2=2;
				else if (cinmove2[0]=='3'&&cinmove2[1]=='\0'&&((by1>1&&((world==1&&by1<10)||(world==2&&by1<7)))||(bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8)))||(nearby==0)))
					move2=3;
				else if (cinmove2[0]=='4'&&cinmove2[1]=='\0'&&((((by1>1&&((world==1&&by1<10)||(world==2&&by1<7)))||(bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))))&&nearby==0)||(by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8)))))
					move2=4;
				else if (cinmove2[0]=='5'&&cinmove2[1]=='\0'&&by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&nearby==0)
					move2=5;
				else
					move2=0;
				if (move2==1||move2==2||move2==3||move2==4||move2==5)
					movetest2--;
				else
					cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
			}
			movetest2=1;
// Player 2 "Flyttar" 
			if (move2==1)
			{
				if (((world==1&&by1<10)||(world==2&&by1<7))&&(ay1!=(by1+1)||ax1!=bx1))
					by1++;
				else if (by1>1&&(ay1!=(by1-1)||ax1!=bx1))
					by1--;
				else if (bx1>1)
					bx1--;
				else
					bx1++;
			}
			else if (move2==2)
			{
				if (((world==1&&by1<10)||(world==2&&by1<7))&&by1>1&&((ay1!=(by1-1)&&ay1!=(by1+1))||ax1!=bx1))
					by1--;
				else if (bx1>1&&(((nearby==0||(ay1==by1&&ax1==(bx1+1)))&&(by1==1||(world==1&&by1==10)||(world==2&&by1==7)))||(by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&((ax1==bx1&&(ay1==(by1-1)||ay1==(by1+1)))||(ax1==(bx1+1)&&ay1==by1)))))
					bx1--;
				else if (((world==1&&bx1<10)||(world==2&&bx1<8))&&((((nearby==0&&bx1==1)||(bx1>1&&((ay1!=by1)||(ax1!=(bx1+1)))))&&(by1==1||(world==1&&by1==10)||(world==2&&by1==7)))||(by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&bx1==1&&ax1==bx1&&(ay1==(by1-1)||ay1==(by1+1)))))
					bx1++;
				else
				{
					// Stay
				}
			}
			else if (move2==3)
			{
				if (((world==1&&by1<10)||(world==2&&by1<7))&&by1>1&&bx1>1&&(nearby==0||(ay1==by1&&ax1==(bx1+1))))
					bx1--;
				else if ((((bx1==1)||((world==1&&bx1==10)||(world==2&&bx1==8)))&&((by1==1)||(world==1&&by1==10)||(world==2&&by1==7))&&nearby==0)||(((bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&((by1==1)||(world==1&&by1==10)||(world==2&&by1==7)))||(by1>1&&((world==1&&by1<10)||(world==2&&by1<7))&&((bx1==1)||(world==1&&bx1==10)||(world==2&&bx1==8))))&&nearby==1))
				{
					// Stay
				}
				else
					bx1++;
			}
			else if (move2==4)
			{
				if (((world==1&&by1<10)||(world==2&&by1<7))&&by1>1&&bx1>1&&((world==1&&bx1<10)||(world==2&&bx1<8))&&nearby==0)
					bx1++;
				else
				{
					// Stay
				}
			}
			else if (move2==5)
			{
				// Stay
			}
// Skriver ut kartan
			while (ymin<=ymax)
			{
				xmin=1;
				while (xmin<=xmax)
				{
					map (player1place, player2place, xmin, ymax, ax1, ay1, bx1, by1);
					xmin++;
				}
				cout << endl;
				ymax--;
			}
			if (world==1)
			{
				ax1=5;
				ay1=7;
				bx1=6;
				by1=4;
				ymax=10;
				ymin=1;
				xmax=10;
				xmin=1;
			}
			else if (world==2)
			{
				ax1=1;
				ay1=7;
				bx1=8;
				by1=1;
				ymax=7;
				ymin=1;
				xmax=8;
				xmin=1;
			}
			cout << endl << "Position is (" << bx1 << "," << by1 << ")" << endl << endl;
		}
		turn++;
	}
}