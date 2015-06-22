// HARD: Ev fixa "otest" (bestämmer vilken som ska få "platsen") och "change" (bestämmer vilken tur det är)

# include <iostream>
# include <cstring>
# include <ctime>
using namespace std;
int main()
{
	int doing, doingtest=1, test, ruta=0, antal=0, aftergame=0, turn=0, turntest=0, spel=1, change, ospel, changehelp=1, ospelhelp=1, help=1, ohelp=1, xtest1=0, xtest2=0, xtest3=0, otest1=0, otest2=0, otest3=0, xx1=0, xx2=0, xx3=0, xy1=0, xy2=0, xy3=0, ox1=0, ox2=0, ox3=0, oy1=0, oy2=0, oy3=0;
	char cindoing[100], cintest[100], cinchange[100];
	srand(time(NULL));
	while (spel==1)
	{
		while (doingtest==1)
		{
			cout << "What do you wanna do?" << endl << "1.Player vs Player" << endl << "2.Player vs Computer [Easy]" << endl << "3.Player vs Computer [Hard]" << endl << "4.Finish" << endl << "Type here: ";
			cin >> cindoing;
			cout << endl;
			if (cindoing[0]=='1'&&cindoing[1]=='\0')
				doing=1;
			else if (cindoing[0]=='2'&&cindoing[1]=='\0')
				doing=2;
			else if (cindoing[0]=='3'&&cindoing[1]=='\0')
				doing=3;
			else if (cindoing[0]=='4'&&cindoing[1]=='\0')
				doing=4;
			else
				cout << "Sorry! That number isn't valid!" << endl << endl;
			if ((cindoing[0]=='1'||cindoing[0]=='2'||cindoing[0]=='3'||cindoing[0]=='4')&&cindoing[1]=='\0')
				doingtest--;
		}
		doingtest=1;
		while (doing==1)
		{
				while (help==1)
				{
					cout << "Bestäm position för ditt "; 
					if (turn/2==0)
						cout << "första ";
					else if (turn/2==1)
						cout << "andra ";
					else if (turn/2==2)
						cout << "tredje ";
					if (turn%2==0)
						cout << "X: ";
					else
						cout << "O: ";
					cin >> cintest;
					cout << endl;
					if (cintest[0]=='1'&&cintest[1]=='\0')
						test=1;
					else if (cintest[0]=='2'&&cintest[1]=='\0')
						test=2;
					else if (cintest[0]=='3'&&cintest[1]=='\0')
						test=3;
					else if (cintest[0]=='4'&&cintest[1]=='\0')
						test=4;
					else if (cintest[0]=='5'&&cintest[1]=='\0')
						test=5;
					else if (cintest[0]=='6'&&cintest[1]=='\0')
						test=6;
					else if (cintest[0]=='7'&&cintest[1]=='\0')
						test=7;
					else if (cintest[0]=='8'&&cintest[1]=='\0')
						test=8;
					else if (cintest[0]=='9'&&cintest[1]=='\0')
						test=9;
					else
					{
						cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
						test=0;
					}
					if (turn==0)
						xtest1=test;
					else if (turn==2)
						xtest2=test;
					else if (turn==4)
						xtest3=test;
					else if (turn==1)
						otest1=test;
					else if (turn==3)
						otest2=test;
					else if (turn==5)
						otest3=test;
					if (test>0&&test<10)
					{
						if ((xtest1==xtest2&&xtest1!=0)||(xtest1==xtest3&&xtest1!=0)||(xtest2==xtest3&&xtest2!=0)||(xtest1==otest1&&xtest1!=0)||(xtest1==otest2&&xtest1!=0)||(xtest1==otest3&&xtest1!=0)||(xtest2==otest1&&xtest2!=0)||(xtest2==otest2&&xtest2!=0)||(xtest2==otest3&&xtest2!=0)||(xtest3==otest1&&xtest3!=0)||(xtest3==otest2&&xtest3!=0)||(xtest3==otest3&&xtest3!=0)||(otest1==otest2&&otest1!=0)||(otest1==otest3&&otest1!=0)||(otest2==otest3&&otest2!=0))
							cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
						else
						{
							antal++;
							help=0;
						}
					}
				}
				help=1;
				while (ruta<9)
				{
					cout << "|";
					ruta++;
					if ((ruta-1)%3+1)
					{
						if ((xtest1==ruta)||(xtest2==ruta)||(xtest3==ruta))
							cout << "x";
						else if ((otest1==ruta)||(otest2==ruta)||(otest3==ruta))
							cout << "o";
						else
							cout << "-";
					if (ruta%3==0)
						cout << "|" << endl;
					}
				}
				cout << endl;
				ruta=0;
			if (antal<7)
				turn++;
			else
				turn=6;
			if (((xtest1==1&&((xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))||(xtest1==2&&((xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))||(xtest1==3&&((xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))||(xtest1==4&&((xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)))||(xtest1==5&&((xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)))||(xtest1==6&&((xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)))||(xtest1==7&&((xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))||(xtest1==8&&((xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)))||(xtest1==9&&((xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1))))||((otest1==1&&((otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))||(otest1==2&&((otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))||(otest1==3&&((otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))||(otest1==4&&((otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))||(otest1==5&&((otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))||(otest1==6&&((otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))||(otest1==7&&((otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))||(otest1==8&&((otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))||(otest1==9&&((otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1)))))
			{
				if (antal%2==1)
					cout << "X ";
				else
					cout << "O ";
				cout << "vinner!" << endl << endl;
				xtest1=0;
				xtest2=0;
				xtest3=0;
				otest1=0;
				otest2=0;
				otest3=0;
				antal=0;
				turn=0;
				doing=0;
			}
			if (turn>5)
			{
				while (changehelp==1)
				{
					cout << "Bestäm vilket av dina ";
					if (antal%2==0)
						cout << "X ";
					else
						cout << "O ";
					cout << "du ska byta" << endl << "1. ";
					if (antal%2==0)
						cout << xtest1;
					else
						cout << otest1;
					cout << endl << "2. ";
					if (antal%2==0)
						cout << xtest2;
					else
						cout << otest2;
					cout << endl << "3. ";
					if (antal%2==0)
						cout << xtest3;
					else
						cout << otest3;
					cout << endl;
					cin >> cinchange;
					cout << endl;
					if (cinchange[0]=='1'&&cinchange[1]=='\0')
						change=1;
					else if (cinchange[0]=='2'&&cinchange[1]=='\0')
						change=2;
					else if (cinchange[0]=='3'&&cinchange[1]=='\0')
						change=3;
					if (change==1||change==2||change==3)
						changehelp--;
					else
					{
						cout << "Sorry! That ";
						if (antal%2==0)
							cout << "X ";
						else
							cout << "O ";
						cout << "doesn't exist! Try again!" << endl << endl;
					}
					turn=(change-1)*2+antal%2;
					cout << turn << endl;
				}
				changehelp=1;
			}
		}
		while (doing==2)
		{
			if (turn%2==0)
			{
				while (help==1)
				{
					cout << "Bestäm position för ditt "; 
					if (turn/2==0)
						cout << "första ";
					else if (turn/2==1)
						cout << "andra ";
					else if (turn/2==2)
						cout << "tredje ";
					cout << "X: ";
					cin >> cintest;
					cout << endl;
					if (cintest[0]=='1'&&cintest[1]=='\0')
						test=1;
					else if (cintest[0]=='2'&&cintest[1]=='\0')
						test=2;
					else if (cintest[0]=='3'&&cintest[1]=='\0')
						test=3;
					else if (cintest[0]=='4'&&cintest[1]=='\0')
						test=4;
					else if (cintest[0]=='5'&&cintest[1]=='\0')
						test=5;
					else if (cintest[0]=='6'&&cintest[1]=='\0')
						test=6;
					else if (cintest[0]=='7'&&cintest[1]=='\0')
						test=7;
					else if (cintest[0]=='8'&&cintest[1]=='\0')
						test=8;
					else if (cintest[0]=='9'&&cintest[1]=='\0')
						test=9;
					else
					{
						cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
						test=0;
					}
					if (turn==0)
						xtest1=test;
					else if (turn==2)
						xtest2=test;
					else if (turn==4)
						xtest3=test;
					if (test>0&&test<10)
					{
						if ((xtest1==xtest2&&xtest1!=0)||(xtest1==xtest3&&xtest1!=0)||(xtest2==xtest3&&xtest2!=0)||(xtest1==otest1&&xtest1!=0)||(xtest1==otest2&&xtest1!=0)||(xtest1==otest3&&xtest1!=0)||(xtest2==otest1&&xtest2!=0)||(xtest2==otest2&&xtest2!=0)||(xtest2==otest3&&xtest2!=0)||(xtest3==otest1&&xtest3!=0)||(xtest3==otest2&&xtest3!=0)||(xtest3==otest3&&xtest3!=0))
							cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
						else
						{
							antal++;
							help=0;
						}
					}
				}
				help=1;
			}
			else if (turn%2==1)
			{
				while (help==1)
				{
					test=rand()%9+1;
					if (turn==1&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest2&&test!=otest3)
						otest1=test;
					else if (turn==3&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest1&&test!=otest3)
						otest2=test;
					else if (turn==5&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest1&&test!=otest2)
						otest3=test;
					if (test!=xtest1&&test!=xtest2&&test!=xtest3&&((test!=otest3&&((turn==1&&test!=otest2)||(turn==3&&test!=otest1)))||(turn==5&&test!=otest1&&test!=otest2)))
						help=0;
				}
				antal++;
				help=1;
			}
				while (ruta<9)
				{
					cout << "|";
					ruta++;
					if ((ruta-1)%3+1)
					{
						if ((xtest1==ruta)||(xtest2==ruta)||(xtest3==ruta))
							cout << "x";
						else if ((otest1==ruta)||(otest2==ruta)||(otest3==ruta))
							cout << "o";
						else
							cout << "-";
					if (ruta%3==0)
						cout << "|" << endl;
					}
				}
				cout << endl;
				ruta=0;
			if (antal<7)
				turn++;
			else
				turn=6;
			if (((xtest1==1&&((xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))||(xtest1==2&&((xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))||(xtest1==3&&((xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))||(xtest1==4&&((xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)))||(xtest1==5&&((xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)))||(xtest1==6&&((xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)))||(xtest1==7&&((xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))||(xtest1==8&&((xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)))||(xtest1==9&&((xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1))))||((otest1==1&&((otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))||(otest1==2&&((otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))||(otest1==3&&((otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))||(otest1==4&&((otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))||(otest1==5&&((otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))||(otest1==6&&((otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))||(otest1==7&&((otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))||(otest1==8&&((otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))||(otest1==9&&((otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1)))))
			{
				if (antal%2==1)
					cout << "X ";
				else
					cout << "O ";
				cout << "vinner!" << endl << endl;
				xtest1=0;
				xtest2=0;
				xtest3=0;
				otest1=0;
				otest2=0;
				otest3=0;
				antal=0;
				turn=0;
				doing=0;
			}
			if (turn>5)
			{
				if (antal%2==0)
				{
					while (changehelp==1)
					{
						cout << "Bestäm vilket av dina X du ska byta" << endl << "1. " << xtest1 << endl << "2. " << xtest2 << endl << "3. " << xtest3 << endl;
						cin >> cinchange;
						cout << endl;
						if (cinchange[0]=='1'&&cinchange[1]=='\0')
							change=1;
						else if (cinchange[0]=='2'&&cinchange[1]=='\0')
							change=2;
						else if (cinchange[0]=='3'&&cinchange[1]=='\0')
							change=3;
						if (change==1||change==2||change==3)
							changehelp--;
						else
							cout << "Sorry! That X doesn't exist! Try again!" << endl << endl;
					}
				}
				else if (antal%2==1)
					change=rand()%3+1;
				turn=(change-1)*2+antal%2;
				changehelp=1;
			}
		}
// Player vs Computer Hard mode
		while (doing==3)
		{
			if (turn%2==0)
			{
				while (help==1)
				{
					cout << "Bestäm position för ditt "; 
					if (turn/2==0)
						cout << "första ";
					else if (turn/2==1)
						cout << "andra ";
					else if (turn/2==2)
						cout << "tredje ";
					cout << "X: ";
					cin >> cintest;
					cout << endl;
					if (cintest[0]=='1'&&cintest[1]=='\0')
						test=1;
					else if (cintest[0]=='2'&&cintest[1]=='\0')
						test=2;
					else if (cintest[0]=='3'&&cintest[1]=='\0')
						test=3;
					else if (cintest[0]=='4'&&cintest[1]=='\0')
						test=4;
					else if (cintest[0]=='5'&&cintest[1]=='\0')
						test=5;
					else if (cintest[0]=='6'&&cintest[1]=='\0')
						test=6;
					else if (cintest[0]=='7'&&cintest[1]=='\0')
						test=7;
					else if (cintest[0]=='8'&&cintest[1]=='\0')
						test=8;
					else if (cintest[0]=='9'&&cintest[1]=='\0')
						test=9;
					else
					{
						cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
						test=0;
					}
					if (turn==0)
						xtest1=test;
					else if (turn==2)
						xtest2=test;
					else if (turn==4)
						xtest3=test;
					if (test>0&&test<10)
					{
						if ((xtest1==xtest2&&xtest1!=0)||(xtest1==xtest3&&xtest1!=0)||(xtest2==xtest3&&xtest2!=0)||(xtest1==otest1&&xtest1!=0)||(xtest1==otest2&&xtest1!=0)||(xtest1==otest3&&xtest1!=0)||(xtest2==otest1&&xtest2!=0)||(xtest2==otest2&&xtest2!=0)||(xtest2==otest3&&xtest2!=0)||(xtest3==otest1&&xtest3!=0)||(xtest3==otest2&&xtest3!=0)||(xtest3==otest3&&xtest3!=0))
							cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
						else
						{
							antal++;
							help=0;
						}
					}
				}
				help=1;
			}
			else if (turn%2==1)
			{
				while (help==1)
				{
					if (xtest1!=1&&xtest2!=1&&xtest3!=1&&((otest1==2&&otest2==3)||(otest1==3&&otest2==2)||(otest1==2&&otest3==3)||(otest1==3&&otest3==2)||(otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest1==4&&otest2==7)||(otest1==7&&otest2==4)||(otest1==4&&otest3==7)||(otest1==7&&otest3==4)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest1==5&&otest2==9)||(otest1==9&&otest2==5)||(otest1==5&&otest3==9)||(otest1==9&&otest3==5)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))
						test=1;
					else if (xtest1!=2&&xtest2!=2&&xtest3!=2&&((otest1==1&&otest2==3)||(otest1==3&&otest2==1)||(otest1==1&&otest3==3)||(otest1==3&&otest3==1)||(otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest1==5&&otest2==8)||(otest1==8&&otest2==5)||(otest1==5&&otest3==8)||(otest1==8&&otest3==5)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))
						test=2;
					else if (xtest1!=3&&xtest2!=3&&xtest3!=3&&((otest1==1&&otest2==2)||(otest1==2&&otest2==1)||(otest1==1&&otest3==2)||(otest1==2&&otest3==1)||(otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest1==6&&otest2==9)||(otest1==9&&otest2==6)||(otest1==6&&otest3==9)||(otest1==9&&otest3==6)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest1==5&&otest2==7)||(otest1==7&&otest2==5)||(otest1==5&&otest3==7)||(otest1==7&&otest3==5)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))
						test=3;
					else if (xtest1!=4&&xtest2!=4&&xtest3!=4&&((otest1==5&&otest2==6)||(otest1==6&&otest2==5)||(otest1==5&&otest3==6)||(otest1==6&&otest3==5)||(otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest1==1&&otest2==7)||(otest1==7&&otest2==1)||(otest1==1&&otest3==7)||(otest1==7&&otest3==1)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))
						test=4;
					else if (xtest1!=5&&xtest2!=5&&xtest3!=5&&((otest1==4&&otest2==6)||(otest1==6&&otest2==4)||(otest1==4&&otest3==6)||(otest1==6&&otest3==4)||(otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest1==2&&otest2==8)||(otest1==8&&otest2==2)||(otest1==2&&otest3==8)||(otest1==8&&otest3==2)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest1==1&&otest2==9)||(otest1==9&&otest2==1)||(otest1==1&&otest3==9)||(otest1==9&&otest3==1)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest1==3&&otest2==7)||(otest1==7&&otest2==3)||(otest1==3&&otest3==7)||(otest1==7&&otest3==3)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))
						test=5;
					else if (xtest1!=6&&xtest2!=6&&xtest3!=6&&((otest1==4&&otest2==5)||(otest1==5&&otest2==4)||(otest1==4&&otest3==5)||(otest1==5&&otest3==4)||(otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest1==3&&otest2==9)||(otest1==9&&otest2==3)||(otest1==3&&otest3==9)||(otest1==9&&otest3==3)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))
						test=6;
					else if (xtest1!=7&&xtest2!=7&&xtest3!=7&&((otest1==8&&otest2==9)||(otest1==9&&otest2==8)||(otest1==8&&otest3==9)||(otest1==9&&otest3==8)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest1==1&&otest2==4)||(otest1==4&&otest2==1)||(otest1==1&&otest3==4)||(otest1==4&&otest3==1)||(otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest1==3&&otest2==5)||(otest1==5&&otest2==3)||(otest1==3&&otest3==5)||(otest1==5&&otest3==3)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))
						test=7;
					else if (xtest1!=8&&xtest2!=8&&xtest3!=8&&((otest1==7&&otest2==9)||(otest1==9&&otest2==7)||(otest1==7&&otest3==9)||(otest1==9&&otest3==7)||(otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest1==2&&otest2==5)||(otest1==5&&otest2==2)||(otest1==2&&otest3==5)||(otest1==5&&otest3==2)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))
						test=8;
					else if (xtest1!=9&&xtest2!=9&&xtest3!=9&&((otest1==7&&otest2==8)||(otest1==8&&otest2==7)||(otest1==7&&otest3==8)||(otest1==8&&otest3==7)||(otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest1==3&&otest2==6)||(otest1==6&&otest2==3)||(otest1==3&&otest3==6)||(otest1==6&&otest3==3)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest1==1&&otest2==5)||(otest1==5&&otest2==1)||(otest1==1&&otest3==5)||(otest1==5&&otest3==1)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1)))
						test=9;
					else if (otest1!=1&&otest2!=1&&otest3!=1&&((xtest1==2&&xtest2==3)||(xtest1==3&&xtest2==2)||(xtest1==2&&xtest3==3)||(xtest1==3&&xtest3==2)||(xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest1==4&&xtest2==7)||(xtest1==7&&xtest2==4)||(xtest1==4&&xtest3==7)||(xtest1==7&&xtest3==4)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest1==5&&xtest2==9)||(xtest1==9&&xtest2==5)||(xtest1==5&&xtest3==9)||(xtest1==9&&xtest3==5)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))
						test=1;
					else if (otest1!=2&&otest2!=2&&otest3!=2&&((xtest1==1&&xtest2==3)||(xtest1==3&&xtest2==1)||(xtest1==1&&xtest3==3)||(xtest1==3&&xtest3==1)||(xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest1==5&&xtest2==8)||(xtest1==8&&xtest2==5)||(xtest1==5&&xtest3==8)||(xtest1==8&&xtest3==5)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))
						test=2;
					else if (otest1!=3&&otest2!=3&&otest3!=3&&((xtest1==1&&xtest2==2)||(xtest1==2&&xtest2==1)||(xtest1==1&&xtest3==2)||(xtest1==2&&xtest3==1)||(xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest1==6&&xtest2==9)||(xtest1==9&&xtest2==6)||(xtest1==6&&xtest3==9)||(xtest1==9&&xtest3==6)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest1==5&&xtest2==7)||(xtest1==7&&xtest2==5)||(xtest1==5&&xtest3==7)||(xtest1==7&&xtest3==5)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))
						test=3;
					else if (otest1!=4&&otest2!=4&&otest3!=4&&((xtest1==1&&xtest2==7)||(xtest1==7&&xtest2==1)||(xtest1==1&&xtest3==7)||(xtest1==7&&xtest3==1)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)||(xtest1==5&&xtest2==6)||(xtest1==6&&xtest2==5)||(xtest1==5&&xtest3==6)||(xtest1==6&&xtest3==5)||(xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)))
						test=4;
					else if (otest1!=5&&otest2!=5&&otest3!=5&&((xtest1==1&&xtest2==9)||(xtest1==9&&xtest2==1)||(xtest1==1&&xtest3==9)||(xtest1==9&&xtest3==1)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest1==3&&xtest2==7)||(xtest1==7&&xtest2==3)||(xtest1==3&&xtest3==7)||(xtest1==7&&xtest3==3)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)||(xtest1==2&&xtest2==8)||(xtest1==8&&xtest2==2)||(xtest1==2&&xtest3==8)||(xtest1==8&&xtest3==2)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest1==4&&xtest2==6)||(xtest1==6&&xtest2==4)||(xtest1==4&&xtest3==6)||(xtest1==6&&xtest3==4)||(xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)))
						test=5;
					else if (otest1!=6&&otest2!=6&&otest3!=6&&((xtest1==3&&xtest2==9)||(xtest1==9&&xtest2==3)||(xtest1==3&&xtest3==9)||(xtest1==9&&xtest3==3)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)||(xtest1==4&&xtest2==5)||(xtest1==5&&xtest2==4)||(xtest1==4&&xtest3==5)||(xtest1==5&&xtest3==4)||(xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)))
						test=6;
					else if (otest1!=7&&otest2!=7&&otest3!=7&&((xtest1==1&&xtest2==4)||(xtest1==4&&xtest2==1)||(xtest1==1&&xtest3==4)||(xtest1==4&&xtest3==1)||(xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest1==8&&xtest2==9)||(xtest1==9&&xtest2==8)||(xtest1==8&&xtest3==9)||(xtest1==9&&xtest3==8)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest1==3&&xtest2==5)||(xtest1==5&&xtest2==3)||(xtest1==3&&xtest3==5)||(xtest1==5&&xtest3==3)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))
						test=7;
					else if (otest1!=8&&otest2!=8&&otest3!=8&&((xtest1==2&&xtest2==5)||(xtest1==5&&xtest2==2)||(xtest1==2&&xtest3==5)||(xtest1==5&&xtest3==2)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)||(xtest1==7&&xtest2==9)||(xtest1==9&&xtest2==7)||(xtest1==7&&xtest3==9)||(xtest1==9&&xtest3==7)||(xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)))
						test=8;
					else if (otest1!=9&&otest2!=9&&otest3!=9&&((xtest1==3&&xtest2==6)||(xtest1==6&&xtest2==3)||(xtest1==3&&xtest3==6)||(xtest1==6&&xtest3==3)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest1==7&&xtest2==8)||(xtest1==8&&xtest2==7)||(xtest1==7&&xtest3==8)||(xtest1==8&&xtest3==7)||(xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest1==1&&xtest2==5)||(xtest1==5&&xtest2==1)||(xtest1==1&&xtest3==5)||(xtest1==5&&xtest3==1)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1)))
						test=9;
					else if (xtest1!=5&&xtest2!=5&&xtest3!=5&&otest1!=5&&otest2!=5&&otest3!=5)
						test=5;
					else if ((xtest1!=1&&xtest2!=1&&xtest3!=1&&otest1!=1&&otest2!=1&&otest3!=1)||(xtest1!=3&&xtest2!=3&&xtest3!=3&&otest1!=3&&otest2!=3&&otest3!=3)||(xtest1!=7&&xtest2!=7&&xtest3!=7&&otest1!=7&&otest2!=7&&otest3!=7)||(xtest1!=9&&xtest2!=9&&xtest3!=9&&otest1!=9&&otest2!=9&&otest3!=9))
					{
						test=rand()%4+1;
						if (test==2)
							test=3;
						else if (test==3)
							test=7;
						else if (test==4)
							test=9;
					}
					else
					{
						test=rand()%9+1;
					}
					if (turn==1&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest2&&test!=otest3)
						otest1=test;
					else if (turn==3&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest1&&test!=otest3)
						otest2=test;
					else if (turn==5&&test!=xtest1&&test!=xtest2&&test!=xtest3&&test!=otest1&&test!=otest2)
						otest3=test;
					if (test!=xtest1&&test!=xtest2&&test!=xtest3&&((test!=otest3&&((turn==1&&test!=otest2)||(turn==3&&test!=otest1)))||(turn==5&&test!=otest1&&test!=otest2)))
						help=0;
				}
				antal++;
				help=1;
			}
				while (ruta<9)
				{
					cout << "|";
					ruta++;
					if ((ruta-1)%3+1)
					{
						if ((xtest1==ruta)||(xtest2==ruta)||(xtest3==ruta))
							cout << "x";
						else if ((otest1==ruta)||(otest2==ruta)||(otest3==ruta))
							cout << "o";
						else
							cout << "-";
					if (ruta%3==0)
						cout << "|" << endl;
					}
				}
				cout << endl;
				ruta=0;
			if (antal<7)
				turn++;
			else
				turn=6;
			if (((xtest1==1&&((xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))||(xtest1==2&&((xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))||(xtest1==3&&((xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))||(xtest1==4&&((xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)))||(xtest1==5&&((xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)))||(xtest1==6&&((xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)))||(xtest1==7&&((xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))||(xtest1==8&&((xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)))||(xtest1==9&&((xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1))))||((otest1==1&&((otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))||(otest1==2&&((otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))||(otest1==3&&((otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))||(otest1==4&&((otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))||(otest1==5&&((otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))||(otest1==6&&((otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))||(otest1==7&&((otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))||(otest1==8&&((otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))||(otest1==9&&((otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1)))))
			{
				if (antal%2==1)
					cout << "X ";
				else
					cout << "O ";
				cout << "vinner!" << endl << endl;
				xtest1=0;
				xtest2=0;
				xtest3=0;
				otest1=0;
				otest2=0;
				otest3=0;
				antal=0;
				turn=0;
				doing=0;
			}
			if (turn>5)
			{
				if (antal%2==0)
				{
					while (changehelp==1)
					{
						cout << "Bestäm vilket av dina X du ska byta" << endl << "1. " << xtest1 << endl << "2. " << xtest2 << endl << "3. " << xtest3 << endl;
						cin >> cinchange;
						cout << endl;
						if (cinchange[0]=='1'&&cinchange[1]=='\0')
							change=1;
						else if (cinchange[0]=='2'&&cinchange[1]=='\0')
							change=2;
						else if (cinchange[0]=='3'&&cinchange[1]=='\0')
							change=3;
						else
							change=0;
						if (change==1||change==2||change==3)
							changehelp--;
						else
							cout << "Sorry! That X doesn't exist! Try again!" << endl << endl;
					}
				}
				else if (antal%2==1)
				{
					if ((otest2==1&&((otest3==2&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==3&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==4&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==5&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest2==2&&((otest3==1&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==3&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest2==3&&((otest3==1&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==2&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==6&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==5&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest2==4&&((otest3==5&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==1&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=1&&xtest2!=1&&xtest3!=1)))||(otest2==5&&((otest3==1&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==3&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==2&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==4&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=4&&xtest2!=4&&xtest3!=4)))||(otest2==6&&((otest3==4&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==3&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest2==7&&((otest3==8&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==1&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==4&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==3&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest2==8&&((otest3==7&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==2&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)))||(otest2==9&&((otest3==7&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==3&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==1&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=1&&xtest2!=1&&xtest3!=1))))
						change=1;
					else if ((otest1==1&&((otest3==2&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==3&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==4&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==5&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==2&&((otest3==1&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==3&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==3&&((otest3==1&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==2&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==6&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==5&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==4&&((otest3==5&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==1&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=1&&xtest2!=1&&xtest3!=1)))||(otest1==5&&((otest3==1&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==3&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==7&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==2&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest3==4&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=4&&xtest2!=4&&xtest3!=4)))||(otest1==6&&((otest3==4&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==3&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest1==7&&((otest3==8&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==1&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest3==4&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest3==3&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest1==8&&((otest3==7&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest3==9&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==2&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)))||(otest1==9&&((otest3==7&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest3==8&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest3==3&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest3==6&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest3==1&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest3==5&&xtest1!=1&&xtest2!=1&&xtest3!=1))))
						change=2;
					else if ((otest1==1&&((otest2==2&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest2==3&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest2==4&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==7&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest2==5&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==2&&((otest2==1&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest2==3&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest2==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest2==8&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==3&&((otest2==1&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest2==2&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest2==6&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest2==5&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==7&&xtest1!=5&&xtest2!=5&&xtest3!=5)))||(otest1==4&&((otest2==5&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest2==6&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest2==1&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==7&&xtest1!=1&&xtest2!=1&&xtest3!=1)))||(otest1==5&&((otest2==1&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest2==3&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==7&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest2==2&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest2==8&&xtest1!=2&&xtest2!=2&&xtest3!=2)||(otest2==4&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest2==6&&xtest1!=4&&xtest2!=4&&xtest3!=4)))||(otest1==6&&((otest2==4&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest2==5&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest2==3&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest1==7&&((otest2==8&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest2==1&&xtest1!=4&&xtest2!=4&&xtest3!=4)||(otest2==4&&xtest1!=1&&xtest2!=1&&xtest3!=1)||(otest2==3&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest2==5&&xtest1!=3&&xtest2!=3&&xtest3!=3)))||(otest1==8&&((otest2==7&&xtest1!=9&&xtest2!=9&&xtest3!=9)||(otest2==9&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==2&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest2==5&&xtest1!=8&&xtest2!=8&&xtest3!=8)))||(otest1==9&&((otest2==7&&xtest1!=8&&xtest2!=8&&xtest3!=8)||(otest2==8&&xtest1!=7&&xtest2!=7&&xtest3!=7)||(otest2==3&&xtest1!=6&&xtest2!=6&&xtest3!=6)||(otest2==6&&xtest1!=3&&xtest2!=3&&xtest3!=3)||(otest2==1&&xtest1!=5&&xtest2!=5&&xtest3!=5)||(otest2==5&&xtest1!=1&&xtest2!=1&&xtest3!=1))))
						change=3;
					else if ((otest1==1&&(((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=7&&xtest2!=7&&xtest3!=7))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest1==2&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=8&&xtest2!=8&&xtest3!=8))))||(otest1==3&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=2&&xtest2!=2&&xtest3!=2))&&((xtest1!=6&&xtest2!=6&&xtest3!=6)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest1==4&&(((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest1==5&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest1==6&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=5&&xtest2!=5&&xtest3!=5))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest1==7&&(((xtest1!=8&&xtest2!=8&&xtest3!=8)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=4&&xtest2!=4&&xtest3!=4))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest1==8&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest1==9&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=5&&xtest2!=5&&xtest3!=5)))))
						change=1;
					else if ((otest2==1&&(((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=7&&xtest2!=7&&xtest3!=7))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest2==2&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=8&&xtest2!=8&&xtest3!=8))))||(otest2==3&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=2&&xtest2!=2&&xtest3!=2))&&((xtest1!=6&&xtest2!=6&&xtest3!=6)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest2==4&&(((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest2==5&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest2==6&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=5&&xtest2!=5&&xtest3!=5))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest2==7&&(((xtest1!=8&&xtest2!=8&&xtest3!=8)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=4&&xtest2!=4&&xtest3!=4))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest2==8&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest2==9&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=5&&xtest2!=5&&xtest3!=5)))))
						change=2;
					else if ((otest3==1&&(((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=7&&xtest2!=7&&xtest3!=7))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest3==2&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=3&&xtest2!=3&&xtest3!=3))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=8&&xtest2!=8&&xtest3!=8))))||(otest3==3&&(((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=2&&xtest2!=2&&xtest3!=2))&&((xtest1!=6&&xtest2!=6&&xtest3!=6)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest3==4&&(((xtest1!=5&&xtest2!=5&&xtest3!=5)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest3==5&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=7&&xtest2!=7&&xtest3!=7))))||(otest3==6&&(((xtest1!=4&&xtest2!=4&&xtest3!=4)||(xtest1!=5&&xtest2!=5&&xtest3!=5))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=9&&xtest2!=9&&xtest3!=9))))||(otest3==7&&(((xtest1!=8&&xtest2!=8&&xtest3!=8)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=4&&xtest2!=4&&xtest3!=4))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest3==8&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=9&&xtest2!=9&&xtest3!=9))&&((xtest1!=2&&xtest2!=2&&xtest3!=2)||(xtest1!=5&&xtest2!=5&&xtest3!=5))))||(otest3==9&&(((xtest1!=7&&xtest2!=7&&xtest3!=7)||(xtest1!=8&&xtest2!=8&&xtest3!=8))&&((xtest1!=3&&xtest2!=3&&xtest3!=3)||(xtest1!=6&&xtest2!=6&&xtest3!=6))&&((xtest1!=1&&xtest2!=1&&xtest3!=1)||(xtest1!=5&&xtest2!=5&&xtest3!=5)))))
						change=3;
					else
						change=rand()%3+1;
				}
				turn=(change-1)*2+antal%2;
				changehelp=1;
			}
		}
		while (doing==4)
		{
			spel--;
			doing=0;
			cout << "Finish!" << endl << endl;
		}
	}
	return 0;
}