// Fixa O2 och O3 (rätt nrnamn?)
# include <iostream>
using namespace std;
int main()
{
	int antal=0, aftergame=0, turn=0, turntest=0, spel=1, xspel, ospel, xspelhelp=1, ospelhelp=1, xhelp=1, ohelp=1, xtest1=0, xtest2=0, xtest3=0, otest1=0, otest2=0, otest3=0, xx1=0, xx2=0, xx3=0, xy1=0, xy2=0, xy3=0, ox1=0, ox2=0, ox3=0, oy1=0, oy2=0, oy3=0;
	while (spel==1)
	{
	if (turn==0) 
	{
	while (xhelp==1)
	{
	cout << "Bestäm position för ditt första X:" << endl;
	cin >> xtest1;
	cout << endl;
	if (xtest1==1)
	{
		xx1=1;
		xy1=3;
		xhelp--;
		antal++;
	}
	else if (xtest1==2)
	{
		xx1=2;
		xy1=3;
		xhelp--;
		antal++;
	}
	else if (xtest1==3)
	{
		xx1=3;
		xy1=3;
		xhelp--;
		antal++;
	}
	else if (xtest1==4)
	{
		xx1=1;
		xy1=2;
		xhelp--;
		antal++;
	}
	else if (xtest1==5)
	{
		xx1=2;
		xy1=2;
		xhelp--;
		antal++;
	}
	else if (xtest1==6)
	{
		xx1=3;
		xy1=2;
		xhelp--;
		antal++;
	}
	else if (xtest1==7)
	{
		xx1=1;
		xy1=1;
		xhelp--;
		antal++;
	}
	else if (xtest1==8)
	{
		xx1=2;
		xy1=1;
		xhelp--;
		antal++;
	}
	else if (xtest1==9)
	{
		xx1=3;
		xy1=1;
		xhelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (xtest1!=0&&(xtest1==xtest2||xtest1==xtest3||xtest1==otest1||xtest1==otest2||xtest1==otest3))
	{
		if (xtest1==1||xtest1==2||xtest1==3||xtest1==4||xtest1==5||xtest1==6||xtest1==7||xtest1==8||xtest1==9)
			cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	xhelp=1;
	}
	if (turn==2) 
	{
	while (xhelp==1)
	{
	cout << "Bestäm position för ditt andra X:" << endl;
	cin >> xtest2;
	cout << endl;
	if (xtest2==1)
	{
		xx2=1;
		xy2=3;
		xhelp--;
		antal++;
	}
	else if (xtest2==2)
	{
		xx2=2;
		xy2=3;
		xhelp--;
		antal++;
	}
	else if (xtest2==3)
	{
		xx2=3;
		xy2=3;
		xhelp--;
		antal++;
	}
	else if (xtest2==4)
	{
		xx2=1;
		xy2=2;
		xhelp--;
		antal++;
	}
	else if (xtest2==5)
	{
		xx2=2;
		xy2=2;
		xhelp--;
		antal++;
	}
	else if (xtest2==6)
	{
		xx2=3;
		xy2=2;
		xhelp--;
		antal++;
	}
	else if (xtest2==7)
	{
		xx2=1;
		xy2=1;
		xhelp--;
		antal++;
	}
	else if (xtest2==8)
	{
		xx2=2;
		xy2=1;
		xhelp--;
		antal++;
	}
	else if (xtest2==9)
	{
		xx2=3;
		xy2=1;
		xhelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (xtest2!=0&&(xtest2==xtest1||xtest2==xtest3||xtest2==otest1||xtest2==otest2||xtest2==otest3))
	{
		if (xtest2==1||xtest2==2||xtest2==3||xtest2==4||xtest2==5||xtest2==6||xtest2==7||xtest2==8||xtest2==9)
			cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	xhelp=1;
	}
	if (turn==4) 
	{
	while (xhelp==1)
	{
	cout << "Bestäm position för ditt trejde X:" << endl;
	cin >> xtest3;
	cout << endl;
	if (xtest3==1)
	{
		xx3=1;
		xy3=3;
		xhelp--;
		antal++;
	}
	else if (xtest3==2)
	{
		xx3=2;
		xy3=3;
		xhelp--;
		antal++;
	}
	else if (xtest3==3)
	{
		xx3=3;
		xy3=3;
		xhelp--;
		antal++;
	}
	else if (xtest3==4)
	{
		xx3=1;
		xy3=2;
		xhelp--;
		antal++;
	}
	else if (xtest3==5)
	{
		xx3=2;
		xy3=2;
		xhelp--;
		antal++;
	}
	else if (xtest3==6)
	{
		xx3=3;
		xy3=2;
		xhelp--;
		antal++;
	}
	else if (xtest3==7)
	{
		xx3=1;
		xy3=1;
		xhelp--;
		antal++;
	}
	else if (xtest3==8)
	{
		xx3=2;
		xy3=1;
		xhelp--;
		antal++;
	}
	else if (xtest3==9)
	{
		xx3=3;
		xy3=1;
		xhelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (xtest3!=0&&(xtest3==xtest1||xtest3==xtest2||xtest3==otest1||xtest3==otest2||xtest3==otest3))
	{
		if (xtest3==1||xtest3==2||xtest3==3||xtest3==4||xtest3==5||xtest3==6||xtest3==7||xtest3==8||xtest3==9)
		cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	xhelp=1;
	}
	if (turn==1) 
	{
	while (ohelp==1)
	{
	cout << "Bestäm position för ditt första O:" << endl;
	cin >> otest1;
	cout << endl;
	if (otest1==1)
	{
		ox1=1;
		oy1=3;
		ohelp--;
		antal++;
	}
	else if (otest1==2)
	{
		ox1=2;
		oy1=3;
		ohelp--;
		antal++;
	}
	else if (otest1==3)
	{
		ox1=3;
		oy1=3;
		ohelp--;
		antal++;
	}
	else if (otest1==4)
	{
		ox1=1;
		oy1=2;
		ohelp--;
		antal++;
	}
	else if (otest1==5)
	{
		ox1=2;
		oy1=2;
		ohelp--;
		antal++;
	}
	else if (otest1==6)
	{
		ox1=3;
		oy1=2;
		ohelp--;
		antal++;
	}
	else if (otest1==7)
	{
		ox1=1;
		oy1=1;
		ohelp--;
		antal++;
	}
	else if (otest1==8)
	{
		ox1=2;
		oy1=1;
		ohelp--;
		antal++;
	}
	else if (otest1==9)
	{
		ox1=3;
		oy1=1;
		ohelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (otest1!=0&&(otest1==xtest1||otest1==xtest2||otest1==xtest3||otest1==otest2||otest1==otest3))
	{
		if (otest1==1||otest1==2||otest1==3||otest1==4||otest1==5||otest1==6||otest1==7||otest1==8||otest1==9)
			cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	ohelp=1;
	}
	if (turn==3) 
	{
	while (ohelp==1)
	{
	cout << "Bestäm position för ditt andra O:" << endl;
	cin >> otest2;
	cout << endl;
	if (otest2==1)
	{
		ox2=1;
		oy2=3;
		ohelp--;
		antal++;
	}
	else if (otest2==2)
	{
		ox2=2;
		oy2=3;
		ohelp--;
		antal++;
	}
	else if (otest2==3)
	{
		ox2=3;
		oy2=3;
		ohelp--;
		antal++;
	}
	else if (otest2==4)
	{
		ox2=1;
		oy2=2;
		ohelp--;
		antal++;
	}
	else if (otest2==5)
	{
		ox2=2;
		oy2=2;
		ohelp--;
		antal++;
	}
	else if (otest2==6)
	{
		ox2=3;
		oy2=2;
		ohelp--;
		antal++;
	}
	else if (otest2==7)
	{
		ox2=1;
		oy2=1;
		ohelp--;
		antal++;
	}
	else if (otest2==8)
	{
		ox2=2;
		oy2=1;
		ohelp--;
		antal++;
	}
	else if (otest2==9)
	{
		ox2=3;
		oy2=1;
		ohelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (otest2!=0&&(otest2==xtest1||otest2==xtest2||otest2==xtest3||otest2==otest1||otest2==otest3))
	{
		if (otest2==1||otest2==2||otest2==3||otest2==4||otest2==5||otest2==6||otest2==7||otest2==8||otest2==9)
			cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	ohelp=1;
	}
	if (turn==5) 
	{
	while (ohelp==1)
	{
	cout << "Bestäm position för ditt tredje O:" << endl;
	cin >> otest3;
	cout << endl;
	if (otest3==1)
	{
		ox2=1;
		oy2=3;
		ohelp--;
		antal++;
	}
	else if (otest3==2)
	{
		ox3=2;
		oy3=3;
		ohelp--;
		antal++;
	}
	else if (otest3==3)
	{
		ox3=3;
		oy3=3;
		ohelp--;
		antal++;
	}
	else if (otest3==4)
	{
		ox3=1;
		oy3=2;
		ohelp--;
		antal++;
	}
	else if (otest3==5)
	{
		ox3=2;
		oy3=2;
		ohelp--;
		antal++;
	}
	else if (otest3==6)
	{
		ox3=3;
		oy3=2;
		ohelp--;
		antal++;
	}
	else if (otest3==7)
	{
		ox3=1;
		oy3=1;
		ohelp--;
		antal++;
	}
	else if (otest3==8)
	{
		ox3=2;
		oy3=1;
		ohelp--;
		antal++;
	}
	else if (otest3==9)
	{
		ox3=3;
		oy3=1;
		ohelp--;
		antal++;
	}
	else
	{
		cout << "Sorry! That place doesn't exist! Try again!" << endl << endl;
	}
	if (otest3!=0&&(otest3==xtest1||otest3==xtest2||otest3==xtest3||otest3==otest1||otest3==otest2))
	{
		if (otest3==1||otest3==2||otest3==3||otest3==4||otest3==5||otest3==6||otest3==7||otest3==8||otest3==9)
			cout << "Sorry! That spot is occupied! Try again!" << endl << endl;
		antal--;
	}
	}
	ohelp=1;
	}
	cout << "|";
	if ((xx1==1&&xy1==3)||(xx2==1&&xy2==3)||(xx3==1&&xy3==3))
		cout << "x";
	else if ((ox1==1&&oy1==3)||(ox2==1&&oy2==3)||(ox3==1&&oy3==3))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==2&&xy1==3)||(xx2==2&&xy2==3)||(xx3==2&&xy3==3))
		cout << "x";
	else if ((ox1==2&&oy1==3)||(ox2==2&&oy2==3)||(ox3==2&&oy3==3))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==3&&xy1==3)||(xx2==3&&xy2==3)||(xx3==3&&xy3==3))
		cout << "x";
	else if ((ox1==3&&oy1==3)||(ox2==3&&oy2==3)||(ox3==3&&oy3==3))
		cout << "o";
	else
		cout << " ";
	cout << "|" << endl << "|";
	if ((xx1==1&&xy1==2)||(xx2==1&&xy2==2)||(xx3==1&&xy3==2))
		cout << "x";
	else if ((ox1==1&&oy1==2)||(ox2==1&&oy2==2)||(ox3==1&&oy3==2))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==2&&xy1==2)||(xx2==2&&xy2==2)||(xx3==2&&xy3==2))
		cout << "x";
	else if ((ox1==2&&oy1==2)||(ox2==2&&oy2==2)||(ox3==2&&oy3==2))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==3&&xy1==2)||(xx2==3&&xy2==2)||(xx3==3&&xy3==2))
		cout << "x";
	else if ((ox1==3&&oy1==2)||(ox2==3&&oy2==2)||(ox3==3&&oy3==2))
		cout << "o";
	else
		cout << " ";
	cout << "|" << endl << "|";
	if ((xx1==1&&xy1==1)||(xx2==1&&xy2==1)||(xx3==1&&xy3==1))
		cout << "x";
	else if ((ox1==1&&oy1==1)||(ox2==1&&oy2==1)||(ox3==1&&oy3==1))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==2&&xy1==1)||(xx2==2&&xy2==1)||(xx3==2&&xy3==1))
		cout << "x";
	else if ((ox1==2&&oy1==1)||(ox2==2&&oy2==1)||(ox3==2&&oy3==1))
		cout << "o";
	else
		cout << " ";
	cout << "|";
	if ((xx1==3&&xy1==1)||(xx2==3&&xy2==1)||(xx3==3&&xy3==1))
		cout << "x";
	else if ((ox1==3&&oy1==1)||(ox2==3&&oy2==1)||(ox3==3&&oy3==1))
		cout << "o";
	else
		cout << " ";
	cout << "|" << endl << endl;
	if (((xtest1==1&&((xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))||(xtest1==2&&((xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))||(xtest1==3&&((xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))||(xtest1==4&&((xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)))||(xtest1==5&&((xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)))||(xtest1==6&&((xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)))||(xtest1==7&&((xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))||(xtest1==8&&((xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)))||(xtest1==9&&((xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1))))||((otest1==1&&((otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))||(otest1==2&&((otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))||(otest1==3&&((otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))||(otest1==4&&((otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))||(otest1==5&&((otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))||(otest1==6&&((otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))||(otest1==7&&((otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))||(otest1==8&&((otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))||(otest1==9&&((otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1)))))
	{
		turn=0;
		aftergame--;
		turntest=-1;
	}
	if (antal<=6)
		turn++;
	if (turn>5)
		aftergame=1;
	if (aftergame==1)
	{
		if (antal%2==0)
			turntest=1;
		else
			turntest=2;
		if (turntest==1)
		{
			while (xspelhelp==1)
			{
				cout << "Bestäm vilket av dina X du ska byta" << endl << "1. " << xtest1 << endl << "2. " << xtest2 << endl << "3. " << xtest3 << endl;
				cin >> xspel;
				cout << endl;
				if (xspel==1||xspel==2||xspel==3)
				{
					xspelhelp--;
				}
				if (xspel==1)
					turn=0;
				else if (xspel==2)
					turn=2;
				else if (xspel==3)
					turn=4;
				else
					cout << "Sorry! That X doesn't exist! Try again!" << endl << endl;
			}
			xspelhelp=1;
		}
		if (turntest==2)
		{
			while (ospelhelp==1)
			{
				cout << "Bestäm vilket av dina O du ska byta" << endl << "1. " << otest1 << endl << "2. " << otest2 << endl << "3. " << otest3 << endl;
				cin >> ospel;
				cout << endl;
				if (ospel==1||ospel==2||ospel==3)
					ospelhelp--;
				if (ospel==1)
					turn=1;
				else if (ospel==2)
					turn=3;
				else if (ospel==3)
					turn=5;
				else
					cout << "Sorry! That O doesn't exist! Try again!" << endl << endl;
			}
			ospelhelp=1;
		}
	}
	if ((xtest1==1&&((xtest2==2&&xtest3==3)||(xtest2==3&&xtest3==2)||(xtest2==4&&xtest3==7)||(xtest2==7&&xtest3==4)||(xtest2==5&&xtest3==9)||(xtest2==9&&xtest3==5)))||(xtest1==2&&((xtest2==1&&xtest3==3)||(xtest2==3&&xtest3==1)||(xtest2==5&&xtest3==8)||(xtest2==8&&xtest3==5)))||(xtest1==3&&((xtest2==1&&xtest3==2)||(xtest2==2&&xtest3==1)||(xtest2==6&&xtest3==9)||(xtest2==9&&xtest3==6)||(xtest2==5&&xtest3==7)||(xtest2==7&&xtest3==5)))||(xtest1==4&&((xtest2==5&&xtest3==6)||(xtest2==6&&xtest3==5)||(xtest2==1&&xtest3==7)||(xtest2==7&&xtest3==1)))||(xtest1==5&&((xtest2==4&&xtest3==6)||(xtest2==6&&xtest3==4)||(xtest2==2&&xtest3==8)||(xtest2==8&&xtest3==2)||(xtest2==1&&xtest3==9)||(xtest2==9&&xtest3==1)||(xtest2==3&&xtest3==7)||(xtest2==7&&xtest3==3)))||(xtest1==6&&((xtest2==4&&xtest3==5)||(xtest2==5&&xtest3==4)||(xtest2==3&&xtest3==9)||(xtest2==9&&xtest3==3)))||(xtest1==7&&((xtest2==1&&xtest3==4)||(xtest2==4&&xtest3==1)||(xtest2==8&&xtest3==9)||(xtest2==9&&xtest3==8)||(xtest2==3&&xtest3==5)||(xtest2==5&&xtest3==3)))||(xtest1==8&&((xtest2==7&&xtest3==9)||(xtest2==9&&xtest3==7)||(xtest2==2&&xtest3==5)||(xtest2==5&&xtest3==2)))||(xtest1==9&&((xtest2==7&&xtest3==8)||(xtest2==8&&xtest3==7)||(xtest2==3&&xtest3==6)||(xtest2==6&&xtest3==3)||(xtest2==1&&xtest3==5)||(xtest2==5&&xtest3==1))))
		{
			spel=0;
			ohelp=0;
			cout << "X vinner!" << endl << endl;
		}
	if ((otest1==1&&((otest2==2&&otest3==3)||(otest2==3&&otest3==2)||(otest2==4&&otest3==7)||(otest2==7&&otest3==4)||(otest2==5&&otest3==9)||(otest2==9&&otest3==5)))||(otest1==2&&((otest2==1&&otest3==3)||(otest2==3&&otest3==1)||(otest2==5&&otest3==8)||(otest2==8&&otest3==5)))||(otest1==3&&((otest2==1&&otest3==2)||(otest2==2&&otest3==1)||(otest2==6&&otest3==9)||(otest2==9&&otest3==6)||(otest2==5&&otest3==7)||(otest2==7&&otest3==5)))||(otest1==4&&((otest2==5&&otest3==6)||(otest2==6&&otest3==5)||(otest2==1&&otest3==7)||(otest2==7&&otest3==1)))||(otest1==5&&((otest2==4&&otest3==6)||(otest2==6&&otest3==4)||(otest2==2&&otest3==8)||(otest2==8&&otest3==2)||(otest2==1&&otest3==9)||(otest2==9&&otest3==1)||(otest2==3&&otest3==7)||(otest2==7&&otest3==3)))||(otest1==6&&((otest2==4&&otest3==5)||(otest2==5&&otest3==4)||(otest2==3&&otest3==9)||(otest2==9&&otest3==3)))||(otest1==7&&((otest2==1&&otest3==4)||(otest2==4&&otest3==1)||(otest2==8&&otest3==9)||(otest2==9&&otest3==8)||(otest2==3&&otest3==5)||(otest2==5&&otest3==3)))||(otest1==8&&((otest2==7&&otest3==9)||(otest2==9&&otest3==7)||(otest2==2&&otest3==5)||(otest2==5&&otest3==2)))||(otest1==9&&((otest2==7&&otest3==8)||(otest2==8&&otest3==7)||(otest2==3&&otest3==6)||(otest2==6&&otest3==3)||(otest2==1&&otest3==5)||(otest2==5&&otest3==1))))
		{
			spel=0;
			xhelp=0;
			cout << "O vinner!" << endl << endl;
		}
	}
}