// beräkningsvoid (om det finns); fixa backpack; fixa void world7; W2 (allt); Kolla så allt funkar! (spec W4)

// pokemon max 3;
// pokemons egenskaper (hp, attack, ökning via lvl, fler attacker), fångsvårighet
// genväg/fusk

// amateurkey = ger tillgång till värld 6 (trappan)
// askcheat = bestäm vilket fusk som ska användas (movecheat, trainercontroll, iPokemon) 
// atthelp1 = baseras på cinatthelp
// atthelp2 = bestämmer vilken attack Player 2 ska använda
// atttest = kontrollerar att atthelp1 är giltig
// att1 = attackvärde för Player 1
// att2 = attackvärde för Player 2
// backpack = baseras på cinpack (bestämmer vad som ska göras i backpack)
// catchtest = avgör om man fångar pokemon eller ej
// change = baseras på cinchange (om pokemon ska visas/bytas)
// changetest = kontrollerar om change är giltig
// cinatthelp = bestäm vilken attack som ska användas i strid
// cinchange = bestäm om man ska byta eller visa pokemon
// cinfight = bestäm vad som ska göras i strid (fight, pokemon, pack, run)
// cingamealt = bestäm vad som ska göras (move, pokemon, prata med T1&T2, genväg, slut)
// cingoheal = bestäm om man ska hela sig
// cinmove = bestäm hur man ska gå
// cinpack = bestämmer vad som ska göras i backpack (pokeball)
// cinshow = bestämmer vad som ska göras i visa pokemon
// cinstartpokemon = bestäm startpokemon via att välja typ (1)
// deadpokemon = om pokemonen framme dör
// enemy = namn på fiendepokemon
// enetest = avgör om man möter fiende i gräs eller ej
// explvl1 = exp som krävs till nästa level pokemon (1)
// explvl2 = exp som krävs till nästa level pokemon (2)
// explvl3 = exp som krävs till nästa level pokemon (3)
// exp1 = exp för pokemon (1)
// exp2 = exp för pokemon (2)
// exp3 = exp för pokemon (3)
// fight = baseras på cinfight (vad som ska göras i strid)
// fighttest = kontrollerar att fight är giltig
// fireplus1 = plusskada för Player 1 om det är fire mot grass 
// fireplus2 = plusskada för Player 2 om det är fire mot grass
// gamealt = baseras på cingamealt (bestäm vad som ska göras)
// gamealttest = kontrollerar så att gamealt är giltig
// giveexp1 = kontrollerar om pokemon är inblandad i strid och i liv (1)
// giveexp2 = kontrollerar om pokemon är inblandad i strid och i liv (2)
// giveexp3 = kontrollerar om pokemon är inblandad i strid och i liv (3)
// goheal = baseras på cingoheal (bestäm om man ska hela)
// grassplus1 = plusskada för Player 1 om det är grass mot water 
// grassplus2 = plusskada för Player 2 om det är grass mot water
// healtest = kontrollerar att goheal är giltig
// hpstart11 = maxhp pokemon (1)
// hpstart12 = maxhp pokemon (2)
// hpstart13 = maxhp pokemon (3)
// hpstart21 = maxhp fiendepokemon (1)
// hpstart22 = maxhp fiendepokemon (2)
// hp11 = hp pokemon (1)
// hp12 = hp pokemon (2)
// hp13 = hp pokemon (3)
// hp21 = hp fiendepokemon (1)
// hp22 = hp fiendepokemon (2)
// hp23 = hp fiendepokemon (3)
// lvl11 = level pokemon (1)
// lvl12 = level pokemon (2)
// lvl13 = level pokemon (3)
// lvl21 = level fiendepokemon
// move = baseras på cinmove (bestämmer hur man ska gå)
// movecheat = bestäm vilket flyttfusk som ska användas
// movetest = kontrollerar att move är giltig
// packtest = kontrollerar att backpack är giltig
// player = namn på fiendepokemon
// playertest = kontrollerar om pokemonen är Player 1's eller en fiende
// pokeball = visar hur många pokebollar man har
// pokemonnr = antalet pokemon Player 1
// pokenamntest = kontrollerar så att namn blir rätt (1)
// poketemp = används för att stoppa poketest (pokemonens ordningsnr) för att byta plats på pokemon
// poketest1 = används för att byta pokemon (ska vara 1 för att vara på rätt plats)
// poketest2 = används för att byta pokemon (ska vara 2 för att vara på rätt plats)
// poketest3 = används för att byta pokemon (ska vara 3 för att vara på rätt plats)
// poke1 = namn pokemon (1)
// poke2 = namn pokemon (2)
// poke3 = namn pokemon (3)
// showpokemon = baseras på cinshow (bestämmer vad som ska göras i visa pokemon)
// showtest = kontrollerar om showpokemon är giltig
// spel = spelmotor, håller spelet igång
// strength11 = strength pokemon (1)
// strength12 = strength pokemon (2)
// strength13 = strength pokemon (3)
// strength21 = strength fiendepokemon
// tempexp = plats att stoppa exp för att byta plats på pokemon
// tempexplvl = plats att stoppa maxexp för att byta plats på pokemon
// temphp = plats att stoppa hp för att byta plats på pokemon
// temphpstart = plats att stoppa maxhp för att byta plats på pokemon
// templvl = plats att stoppa level för att byta plats på pokemon
// temppoke = plats att stoppa namn för att byta plats på pokemon
// tempstrength = plats att stoppa strength för att byta plats på pokemon
// temptype = plats att stoppa type för att byta plats på pokemon
// trainercheat = bestäm vilket tränarfusk som ska användas
// tryesc = används för att avgöra om Player 1 lyckas fly 
// turn = bestämmer vems tur det är (jämn 2:a blir Player 1, ojämn blir Player 2)
// typetest = kontrollerar så att välja typ blir rätt (1)
// type11 = typ på pokemon (1)
// type12 = typ på pokemon (2)
// type13 = typ på pokemon (3)
// type21 = typ på fiendepokemon (1)
// type22 = typ på fiendepokemon (2)
// t1 = bestämmer ifall T1 kan bli mött
// t1x = bestämmer x-koordinaten för T1
// t2 = bestämmer ifall T2 kan bli mött
// t2x = bestämmer x-koordinaten för T2
// waterplus1 = plusskada för Player 1 om det är water mot fire 
// waterplus2 = plusskada för Player 2 om det är water mot fire
// world = bestämmer vilken värld man är i
// x = x-koordinaten för Player 1
// xmatch = används för att skriva ut kartan (när xmatch=x)
// xplace = om xplace=1 så är det Player 1-punkten
// y = y-koordinaten för Player 1
// ymatch = används för att skriva ut kartan (när ymatch=y)

# include <iostream>
# include <ctime>
# include <windows.h>
# include <cstring>
using namespace std;
void whattodo (int world, int y, int x, int t1x, int t2x)
{
	cout << "Choose options:" << endl << "1.Move" << endl;
		cout << "2.";
		if (world==1||world==3||world==4||(world==5&&((y==2&&t1x!=x)||(y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))||(y==5&&t2x!=x)))||(world==6&&((y>3)||(y==3&&x!=4)||(y==2&&x!=3&&x!=5)))||(world==7))
			cout << "Pokémon";
		else 
		{
			cout << "Talk to ";
			if (world==5)
			{
				if ((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)))||(y==4&&t1x==x))
					cout << "T1";
				else
					cout << "T2";
			}
			else if (world==6)
			{
				cout << "L1";
			}
		}
		cout << endl << "3.";
		if (world==1||world==3||world==4||world==5&&((y==2&&t1x!=x)||(y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))||(y==5&&t2x!=x))||(world==6&&((y>3)||(y==3&&x!=4)||(y==2&&x!=3&&x!=5)))||(world==7))
			cout << "Shortcuts";
		else if ((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&((t2x==(x-1))||(t2x==(x+1)))))
			cout << "Talk to T2";
		else
			cout << "Pokémon";
		cout << endl << "4.";
		if (world==1||world==3|world==4||world==5&&((y==2&&t1x!=x)||(y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))||(y==5&&t2x!=x))||(world==6&&((y>3)||(y==3&&x!=4)||(y==2&&x!=3&&x!=5)))||(world==7))
			cout << "Finish";
		else if ((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&((t2x==(x-1))||(t2x==(x+1)))))
			cout << "Pokémon";
		else
			cout << "Shortcuts";
		if ((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4))))
		{
				cout << endl << "5.";
			if (world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&((t2x==(x-1))||(t2x==(x+1))))))
				cout << "Shortcuts";
			else if ((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x!=(x-1)||t2x!=(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4))))
				cout << "Finish";
		}
		if (world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&((t2x==(x-1))||(t2x==(x+1))))))
			cout << endl << "6.Finish";
		cout << endl << "Type: ";
}
void pokemon (int lvl, int exp, int explvl, int type, int strength, int hp, int hpstart, char poke1[10], int playertest)
{
	if (playertest==0)
		cout << "Name: " << poke1 << endl;
	cout << "Typename: ";
	if (type==1)
		cout << "Armeno";
	if (type==2)
		cout << "Tuba";
	if (type==3)
		cout << "Plush";
	if (type==4)
		cout << "Normaldino";
	cout << endl << "Lvl: " << lvl << endl;
	if (playertest==0)
		cout << "Exp: " << exp << "/" << explvl << endl;
	cout << "Type: ";
	if (type==1)
		cout << "Grass";
	if (type==2)
		cout << "Fire";
	if (type==3)
		cout << "Water";
	if (type==4)
		cout << "Normal";
	cout << endl << "Strength: " << strength << endl << "HP: " << hp << "/" << hpstart << endl << endl;
}
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
void position (int x, int y)
{
	cout << "Your position is (" << x << "," << y << ")" << endl << endl;
}
void world1 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<0)
		xvismin=0;
	xvismax=x+3;
	if (xvismax>11)
		xvismax=11;
	yvismin=y-3;
	if (yvismin<0)
		yvismin=0;
	yvismax=y+3;
	if (yvismax>11)
		yvismax=11;
	xmatch=xvismin;
	ymatch=yvismax;
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (xmatch>0&&xmatch<12&&ymatch>0&&ymatch<12)
		{
		if ((xmatch==2&&ymatch==10)||(xmatch==3&&ymatch==10)||(xmatch==4&&ymatch==10)||(xmatch==2&&ymatch==9)||(xmatch==3&&ymatch==9)||(xmatch==4&&ymatch==9)||(xmatch==2&&ymatch==8)||(xmatch==3&&ymatch==8)||(xmatch==2&&ymatch==7)||(xmatch==3&&ymatch==7))
			grass (xplace);
		else if (xmatch==6&&ymatch==6)
			hospital (xplace);
		else if ((xmatch==1)||(xmatch==11&&ymatch<8)||(ymatch==1)||(ymatch==11))
			cout << "@";
		else if (((xmatch==8||xmatch==9||xmatch==10||xmatch==11)&&(ymatch==9||ymatch==10))||((xmatch==8||xmatch==10||xmatch==11)&&ymatch==8))
			cout << "0";
		else if (xmatch==9&&ymatch==8)
			cout << "+";
		else
			plain (xplace);
		}
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			if (yvismin<=ymatch&&(ymatch)>0)
			{
				cout << endl;
			}
			ymatch--;
		}
	}
	cout << endl;
}
void world3 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>7)
		xvismax=7;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>3)
		yvismax=3;
	xmatch=xvismin;
	ymatch=yvismax;
	// -----
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if ((xmatch==1&&ymatch==3)||(xmatch==5&&ymatch==1)||(xmatch==7&&ymatch==3))
			cout << "/";
		else if ((xmatch==1||xmatch==2||xmatch==3||xmatch==4)&&ymatch==1)
			cout << " ";
		else
			plain(xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void world4 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>12)
		xvismax=12;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>7)
		yvismax=7;
	xmatch=xvismin;
	ymatch=yvismax;
	// ---------
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (xmatch==1&&ymatch==7)
			cout << "/";
		else if (((xmatch==3||xmatch==4||xmatch==5)&&(ymatch==5||ymatch==6||ymatch==7))||((xmatch==1||xmatch==2||xmatch==3)&&(ymatch==1||ymatch==2)))
			grass (xplace);
		else if (xmatch>7&&ymatch>4)
		{
		if (xmatch==10&&ymatch==5)
			cout << "+";
		else
			cout << "0";
		}
		else
			plain (xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void world5 (int x, int y, int xplace, int t1, int t2, int t1x, int t2x)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>7)
		xvismax=7;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>7)
		yvismax=7;
	xmatch=xvismin;
	ymatch=yvismax;
	// ---------
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if ((xmatch==t1x&&ymatch==3)||(xmatch==t2x&&ymatch==4))
			cout << "?";
		else if (xmatch==4&&ymatch==1)
			cout << "*";
		else if (ymatch==7||xmatch==1||xmatch==7||ymatch==1||(xmatch==3&&ymatch==6)||(xmatch==5&&ymatch==6))
			cout << "@";
		else if (xmatch==4&&ymatch==6)
			cout << "/";
		else
			plain (xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void world6 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>7)
		xvismax=7;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>7)
		yvismax=7;
	xmatch=xvismin;
	ymatch=yvismax;
	// ---------
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (ymatch==7||xmatch==1||xmatch==7||ymatch==1||((xmatch==3||xmatch==5)&&ymatch==6))
			cout << "@";
		else if (xmatch==4&&ymatch==6)
			cout << "/";
		else if (xmatch==4&&ymatch==2)
			cout << "¤";
		else
			plain (xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void world7 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>6)
		xvismax=6;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>8)
		yvismax=8;
	xmatch=xvismin;
	ymatch=yvismax;
	// ---------
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (xmatch==1||xmatch==6||ymatch==1||ymatch==8)
			cout << "@";
		else if ((xmatch==5&&ymatch==7)||(xmatch==5&&ymatch==2)||(xmatch==2&&ymatch==4))
			cout << "/";
		else
			plain (xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void world8 (int x, int y, int xplace)
{
	int xvismin, xvismax, yvismin, yvismax, xmatch, ymatch;
	xvismin=x-3;
	if (xvismin<1)
		xvismin=1;
	xvismax=x+3;
	if (xvismax>6)
		xvismax=6;
	yvismin=y-3;
	if (yvismin<1)
		yvismin=1;
	yvismax=y+3;
	if (yvismax>8)
		yvismax=8;
	xmatch=xvismin;
	ymatch=yvismax;
	// ---------
	while (ymatch>=yvismin)
	{
		if (x==xmatch&&y==ymatch)
			xplace=1;
		if (xmatch==1||xmatch==6||ymatch==1||ymatch==8)
			cout << "@";
		else if ((xmatch==5&&ymatch==7)||(xmatch==5&&ymatch==2)||(xmatch==2&&ymatch==4))
			cout << "/";
		else
			plain (xplace);
		xplace=0;
		xmatch++;
		if (xmatch>xvismax)
		{
			xmatch=xvismin;
			ymatch--;
			cout << endl;
		}
	}
	cout << endl;
}
void map (int world, int x, int y, int xplace, int t1, int t2, int t1x, int t2x)
{
	position (x, y);
	if (world==1)
	{
		world1 (x, y, xplace);
	}
	else if (world==3)
	{	
		world3 (x, y, xplace);
	}
	else if (world==4)
	{
		world4 (x, y, xplace);
	}
	else if (world==5)
	{
		world5 (x, y, xplace, t1, t2, t1x, t2x);
	}
	else if (world==6)
	{
		world6 (x, y, xplace);
	}
	else if (world==7)
	{
		world7 (x, y, xplace);
	}
}
void player (int atthelp1, int type1, int att1, char poke1[10])
{
	cout << poke1 << " uses ";
	if (atthelp1==1)
		cout << "Tackle";
	if (atthelp1==2&&type1==1)
		cout << "Vine whip";
	if (atthelp1==2&&type1==2)
		cout << "Ember";
	if (atthelp1==2&&type1==3)
		cout << "Water gun";
	cout << " and makes " << att1 << " damage!" << endl << endl;
}
void chooseattack (int type1, char poke1[10])
{
	cout << "Choose attack for " << poke1 << endl << "1.Tackle" << endl;
	if (type1==1)
		cout << "2.Vine whip" << endl << "3.Back" << endl;
	else if (type1==2)
		cout << "2.Ember" << endl << "3.Back" << endl;
	else if (type1==3)
		cout << "2.Water gun" << endl << "3.Back" << endl;
	else
		cout << "2.Back" << endl;
	cout << "Type here: ";
}
void changepokemon (int pokemonnr, char poke1[10], char poke2[10], char poke3[10], int hp11, int hp12, int hp13, int deadpokemon)
{
	cout << "Change:" << endl << "1.";
	if (deadpokemon==0)
	{
		if (pokemonnr==3)
		{
			if (hp12>0)
			{
				cout << "Change " << poke1 << " for " << poke2 << endl;
				if (hp13>0)
				{
					cout << "2.Change " << poke1 << " for " << poke3 << endl << "3.Show pokemon" << endl << "4.Back" << endl;
				}
				else
				{
					cout << "2.Show pokemon" << endl << "3.Back" << endl;
				}
			}
			else if (hp13>0)
			{
				cout << "Change " << poke1 << " for " << poke3 << endl << "2.Show pokemon" << endl << "3.Back" << endl;
			}
			else
			{
				cout << "Show pokemon" << endl << "2.Back" << endl;
			}
		}
		else if (pokemonnr==2)
		{
			if (hp12>0)
			{
				cout << "Change " << poke1 << " for " << poke2 << endl << "2.Show pokemon" << endl << "3.Back" << endl;
			}
			else
			{
				cout << "Show pokemon" << endl << "2.Back" << endl;
			}
		}
		else if (pokemonnr==1)
		{
			cout << "Show pokemon" << endl << "2.Back" << endl;
		}
	}
	else if (deadpokemon==1)
	{
		if (pokemonnr==3)
		{
			if (hp12>0)
			{
				cout << "Change " << poke1 << " for " << poke2 << endl;
				if (hp13>0)
				{
					cout << "2.Change " << poke1 << " for " << poke3 << endl << "3.Show pokemon" << endl;
				}
				else 
				{
					cout << "2.Show pokemon" << endl;
				}
			}
			else if (hp13>0)
			{
				cout << "Change " << poke1 << " for " << poke3 << endl << "2.Show pokemon" << endl;
			}
		}
		else if (pokemonnr==2)
		{
			if (hp12>0)
			{
				cout << "Change " << poke1 << " for " << poke2 << endl << "2.Show pokemon" << endl;
			}
		}
	}
	cout << "Type here: ";
}
void escape (int tryesc, int lvl2, char name[100])
{
	if (tryesc>lvl2)
	{
		cout << name << " escapes successfully!" << endl << endl;
	}
	else
	{
		cout << name << " fails to escape!" << endl << endl;
	}
}
void hp (int tryesc, int hp1, int hp2, char poke1[10], char enemy[10])
{
	if (tryesc==0)
		cout << "HP for " << poke1 << " is " << hp1 << " and HP for " << enemy << " is " << hp2 << endl << endl;
}
void movingalt (int world, int x, int y, int t1x, int t2x)
{
	cout << "Choose wich direction you want to go" << endl;
	cout << "1.";
	if ((world==1&&((y<10&&x<8)||(y<7&&(x==8||x==10))||(y<8&&x==9)))||(world==3&&y<3)||(world==4&&((y<7&&x<8)||(y<4&&x>7)||(x==10&&y==4)))||(world==5&&((x!=t1x&&y==2)||(x!=t2x&&y==3)||y==4||(y==5&&(x==2||x==4||x==6))))||(world==6&&((y<6&&x!=3&&x!=5)||(y<5&&(x==3||x==5))))||(world==7&&y<7))
		cout << "Up" << endl;
	else if (world==1||world==3||world==4||(world==5&&((x==4&&y==2)||y==3||((x==3||x==5)&&x!=t2x&&y==5)||y==6))||(world==6&&((y>2&&x!=4)||(y>3&&x==4)))||(world==7))
		cout << "Down" << endl;
	else if (world==5&&x>2)
		cout << "Left" << endl;
	else
		cout << "Right" << endl;
	cout << "2.";
	if ((world==1&&y>2&&((y<10&&x<8)||(y<7&&(x==8||x==10))||(y<8&&x==9)))||(world==3&&y<3&&y>1&&x>4)||(world==4&&((x<8&&y<7&&y>1)||(x>7&&(y==2||y==3))||(x==10&&y==4)))||(world==5&&((y==2&&x==4&&x!=t1x)||(y==3&&x!=t2x)||(y==4&&x!=t1x)||(y==5&&(x==2||x==4||x==6)&&x!=t2x)))||(world==6&&(((y<6&&x!=3&&x!=5)||(y<5&&(x==3||x==5)))&&((y>2&&x!=4)||(y>3&&x==4))))||(world==7&&y<7&&y>2))
		cout << "Down" << endl;
	else if ((world==1&&((y==2&&x>2)||(y==10&&x>2&&x<8)||(y==7&&(x==8||x==10))))||(world==3&&((y==2||y==3)&&x>1||(y==1&&x>5)))||(world==4&&x>1)||(world==5&&((x>2&&((((x!=4&&x!=t1x)||(x==4&&x==t1x))&&y==2)||(y==4&&(x-1)!=t2x)||(y==5&&((x==3&&t2x!=x)||(x==4&&t2x==x)||(x==5&&t2x!=x)||(x==6&&t2x==x)))))||((x-1)!=t1x&&y==3)))||(world==6&&y<6&&((y>2&&x>2)||(y==2&&x!=2&&x!=5)))||(world==7&&x>2))
		cout << "Left" << endl;
	else if ((world==5&&((y==6&&(x==2||x==6))||(y==2&&x==2&&x==t1x)||(y==3&&x==6&&x==t2x&&(x-1)==t1x)))||(world==6&&y==6&&(x==2||x==6)))
		cout << "Stay" << endl;
	else
		cout << "Right" << endl;
	if (world==1||world==3||world==4||(world==5&&(((x!=2||(x==2&&t1x!=x))&&y==2)||((x!=6||t1x!=5||t2x!=6)&&y==3)||y==4||y==5))||(world==6&&y!=6)||(world==7))
	{
	cout << "3.";
	if ((world==1&&(((x==2||x==10)&&y==2)||(x==10&&y==7)||((x==2||x==7)&&y==10)))||(world==3&&((x==7&&(y==1||y==3))||(x==1&&y==2)||(x==5&&y==1)))||(world==4&&((y==1&&(x==1||x==12))||(y==4&&x==12)||(y==7&&(x==1||x==7))))||(world==5&&((((x==2&&x!=t1x)||x==6||(t1x==x&&(x==3||x==5)))&&y==2)||(((t1x==(x+1)&&x==2)||(((t1x==(x-1)&&t2x!=x)||(t1x!=(x-1)&&t2x==x))&&x==6)||(((t1x==(x-1))||(t1x==(x+1)))&&t2x==x&&x>2&&x<6))&&y==3)||(((x==2&&(t2x==(x+1)||t1x==x))||(x==6&&t1x!=6&&t2x==5)||(x>2&&x<6&&t1x==x&&((t2x==(x-1))||(t2x==(x+1)))))&&y==4)||((x==3||x==5||x==6)&&t2x==x&&y==5)))||(world==6&&y==2)||(world==7&&(x==2||x==5)&&(y==2||y==7)))
		cout << "Stay" << endl;
	else if ((world==1&&((((y==2)||(y==7&&x==8)||(y==10&&x<7))&&x<10&&x>2)||(y<10&&y>2&&x==2)))||(world==3&&((x>1&&y==3)||(x>1&&x<5&&y==2)||(x>5&&y==1)))||(world==4&&((x==1&&y>1&&y<7)||(x>1&&x<12&&y==1)||(x>1&&x<7&&y==7)||((x==8||x==9||x==11)&&y==4)))||(world==5&&((y==2&&(((x==3||x==5)&&t1x!=x)||(x==4&&t1x==x)))||(y==3&&((x>2&&(((x-1)!=t1x&&x==t2x)||((x-1)==t1x&&x!=t2x)))||(x==2&&t1x!=(x+1))))||(y==4&&((x>2&&((x==t1x&&(x-1)!=t2x)||(x!=t1x&&(x-1)==t2x)))||(x==2&&t1x!=x&&t2x!=(x+1))))||(y==5&&(((x==3||x==5)&&t2x!=x)||(x==4&&t2x==x)||x==2))))||(world==6&&((y>2&&y<6&&x==2)||(y==5&&(x==3||x==5))||(y==3&&x==4)))||(world==7&&((x==2&&y>2&&y<7)||(x>2&&x<5&&(y==2||y==7)))))
		cout << "Right" << endl;
	else
		cout << "Left" << endl;
	}
	if ((world==1&&((x>2&&x<10&&y<8)||(y>2&&y<7)||(x>2&&x<7&&y>7)||(y>7&&y<10&&x<8)||(x==2&&y==7)))||(world==3&&(x>1&&x<5||(x>4&&x<7&&y==3)||(x>5&&x<7&&y==1)||y==2&&x>4))||(world==4&&((x==1&&y>1&&y<12)||(x>1&&x<7)||(x==7&&y<7)||(x>7&&x<12)||(x==12&&(y==2||y==3))))||(world==5&&((y==2&&(((x==3||x==5)&&x!=t1x)||x==4))||(y==3&&((x==6&&(t1x!=(x-1)&&t2x!=x))||(x>2&&x<6&&((t1x!=(x-1)&&t1x!=(x+1))||t2x!=x))||(x==2&&t1x!=(x+1))))||(((x==2&&t1x!=x&&t2x!=(x+1))||(x==6&&t2x!=(x-1))||((x==3||x==4||x==5)&&((t1x!=x||(t2x!=(x-1)&&t2x!=(x+1))))))&&y==4)||((((x==2||x==6)&&x!=t2x)||x==4||((x==3||x==5)&&x!=t2x))&&y==5)))||(world==6&&y>2&&y<6)||(world==7&&((x>2&&x<5)||(y>2&&y<7))))
	{
		cout << "4.";
		if ((world==1&&((x>2&&x<10&&y>2&&y<7)||(y>6&&y<10&&x>2&&x<7)||(x==7&&y==7)||(x==9&&y==7)))||(world==3&&(x>4&&x<7&&y==2))||(world==4&&x>1&&y>1&&x<12&&((x>6&&y<4)||((x==7||x==10)&&y==4)||(x<7&&y<7)))||(world==5&&((x>2&&x<6&&((y==3&&t2x!=x&&t1x!=(x-1)&&t1x!=(x+1))||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))))||(x==4&&y==2&&t1x!=x)||(x==4&&y==5&&t2x!=x)))||(world==6&&x>2&&x<6&&((y==3&&x!=4)||(y==5&&x==4)||(y==4)))||(world==7&&x>2&&x<5&&y>2&&y<7))
			cout << "Right" << endl;
		else
			cout << "Stay" << endl;
	}
	if ((world==1&&((x>2&&x<10&&y>2&&y<7)||(y>6&&y<10&&x>2&&x<7)||(x==7&&y==7)||(x==9&&y==7)))||(world==3&&(x==5||x==6)&&y==2)||(world==4&&x>1&&((x<7&&(y==5||y==6))||(y==4&&(x<8||x==10))||((y==2||y==3)&&x<12)))||(world==5&&((x==4&&y==2&&t1x!=x)||(x>2&&x<6&&((y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))))||(x==4&&y==5&&t2x!=x)))||(world==6&&x>2&&x<6&&((y==3&&x!=4)||(y==5&&x==4)||(y==4)))||(world==7&&x>2&&x<5&&y>2&&y<7))
	{
		cout << "5.Stay" << endl;
	}
	cout << "Type here: ";
}
int main()
{
	int spel=1, gamealt=0, askcheat=0, movecheat=0, trainercheat=0, gamealttest=1, move, movetest=1, amateurkey=0, showpokemon, showtest=1, pokeball=100, catchtest;
	int hp11, hp12=0, hp13=0, temphp, hp21=0, hp22=0, hp23=0, hpstart11, hpstart12, hpstart13, temphpstart, hpstart21, hpstart22, hpstart23, lvl11=1, lvl12, lvl13, templvl, lvl21, lvl22, lvl23, strength11, strength12, strength13, tempstrength, strength21, strength22, strength23, type11, type12, type13, temptype, type21, type22, type23, typetest=1, exp1=0, exp2=0, exp3=0, tempexp, explvl1, explvl2, explvl3, tempexplvl, pokenamntest=1, pokemonnr=1, playertest=0, deadpokemon=0;
	int giveexp1=0, giveexp2=0, giveexp3=0, poketest1=1, poketest2=2, poketest3=3, poketemp, change, changetest=1, packtest=1, backpack, enetest, att1, att2, fight, fighttest=1, atthelp1, atthelp2, atttest=1, grassplus1, grassplus2, fireplus1, fireplus2, waterplus1, waterplus2;
	int world=1, x=5, y=5, xmatch=1, ymatch=9, xplace=0, t1x=2, t2x=6, t1=1, t2=1, l1=1, tryesc=0, turn=0, goheal, healtest=1;
	char name[100], poke1[100], poke2[100], poke3[100], temppoke[100], cinstartpokemon[100], cingamealt[100], cinmove[100], cinfight[100], cinatthelp[100], cingoheal[100], cinchange[100], cinpack[100], enemy[100]="Normaldino", cinshow[100];
	srand(time(NULL));
// Bestäm namn för Player 1
	cout << "Type in your name: ";
	cin >> name;
	cout << endl;
// Bestäm startpokemon, bestämmer via typ
	while (typetest==1)
	{
		cout << "Choose pokémon for " << name << ":" << endl << "1.Armeno [Grass]" << endl << "2.Tuba [Fire]" << endl << "3.Plush [Water]" << endl << "Type here: ";
		cin >> cinstartpokemon;
		cout << endl;
		if (cinstartpokemon[0]=='1'&&cinstartpokemon[1]=='\0')
			type11=1;
		else if (cinstartpokemon[0]=='2'&&cinstartpokemon[1]=='\0')
			type11=2;
		else if (cinstartpokemon[0]=='3'&&cinstartpokemon[1]=='\0')
			type11=3;
		else
		{
			cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
			type11=0;
		}
		if (type11==1||type11==2||type11==3)
			typetest--;
	}
// Bestäm namn på startpokemon 
	while (pokenamntest==1)
	{
		cout << "Name your pokémon: ";
		cin >> poke1;
		cout << endl;
		if (poke1[1]=='\0'||poke1[2]=='\0'||poke1[3]=='\0'||poke1[4]=='\0'||poke1[5]=='\0'||poke1[6]=='\0'||poke1[7]=='\0'||poke1[8]=='\0'||poke1[9]=='\0'||poke1[10]=='\0')
			pokenamntest--;
		else
			cout << "Sorry! There's to many numbers/letters in your name! Try again!" << endl << endl;
	}
	strength11=lvl11+2; 
	typetest=1;
	hp11=10+lvl11*10;
	hpstart11=hp11;
	explvl1=10+lvl11*5;
// Visar startpokemon
	pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
// Skriver ut startposition och visar kartan
	map (world, x, y, xplace, t1, t2, t1x, t2x);
// Spelmotor, håller spelet igång
	while (spel==1)
	{
// Bestäm vad man ska göra
		while (gamealttest==1)
		{
			whattodo (world, y, x, t1x, t2x);
// Visar alternativ: Move, Pokemon, Prata med T1&T2, Genväg, Finish
			cin >> cingamealt;
			if (cingamealt[0]=='1'&&cingamealt[1]=='\0')
			{
				gamealt=1;
				gamealttest--;
			}
			else if (cingamealt[0]=='2'&&cingamealt[1]=='\0')
			{
				gamealt=2;
				gamealttest--;
			}
			else if (cingamealt[0]=='3'&&cingamealt[1]=='\0')
			{
				gamealt=3;
				gamealttest--;
			}
			else if (cingamealt[0]=='4'&&cingamealt[1]=='\0')
			{
				gamealt=4;
				gamealttest--;
			}
			else if (cingamealt[0]=='5'&&cingamealt[1]=='\0'&&((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4)))))
			{
				gamealt=5;
				gamealttest--;
			}
			else if (cingamealt[0]=='6'&&cingamealt[1]=='\0'&&world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1)))))
			{
				gamealt=6;
				gamealttest--;
			}
			else
			{
				gamealt=0;
				cout << endl << "Sorry! That number/letter isn't valid! Try again!" << endl;
			}
			cout << endl;
		}
		gamealttest=1;
		if (gamealt==1)
		{
// Bestäm hur man ska gå
			while (movetest==1)
			{
// Visar flyttalternativ: Upp, ner, vänster, höger och stå still
				movingalt (world, x, y, t1x, t2x);
				cin >> cinmove;
				cout << endl;
// Kontrollerar att cinmove är giltig
				if (cinmove[0]=='1'&&cinmove[1]=='\0')
				{
					move=1;
					movetest--;
				}
				else if (cinmove[0]=='2'&&cinmove[1]=='\0')
				{
					move=2;
					movetest--;
				}
				else if (cinmove[0]=='3'&&cinmove[1]=='\0'&&(world==1||world==3||world==4||(world==5&&((y==2&&((x==2&&t1x!=x)||(x>2)))||(y==3&&((x==6&&((t1x==(x-1)&&t2x!=x)||(t1x!=(x-1)&&t2x==x)||(t1x!=(x-1)&&t2x!=x)))||(x<6)))||(y==4)||(y==5)))||(world==6&&y<6)||(world==7)))
				{
					move=3;
					movetest--;
				}
				else if (cinmove[0]=='4'&&cinmove[1]=='\0'&&((world==1&&((x==2&&y>2&&y<10)||(x==7&&y>6&&y<10)||(x==10&&y>2&&y<7)||(x>2&&x<10&&y==2)||(y==7&&x==8)||(x>2&&x<7&&y==10)||(x>2&&x<7&&y>2&&y<10)||(x>6&&x<10&&y>2&&y<7)||((x==7||x==9)&&y==7)))||(world==3&&((x>1&&x<5)||(x==5&&y>1)||(x==6)||(x==7&&y==2)))||(world==4&&((x==1&&y>1&&y<7)||(x>1&&x<7)||(x==7&&y<7)||(x>7&&x<12)||(x==12&&y>1&&y<4)))||(world==5&&((y==2&&((x==3||x==5)&&t1x!=x)||(x==4))||(y==3&&((x==2&&t1x!=(x+1))||(x==6&&t1x!=(x-1)&&t2x!=x)||(x>2&&x<6&&((t1x!=(x-1)&&t1x!=(x+1))||(t2x!=x)))))||(y==4&&((x==2&&t1x!=x&&t2x!=(x+1))||(x==6&&t2x!=(x-1))||(x>2&&x<6&&((t1x!=x)||(t2x!=(x-1)&&t2x!=(x+1))))))||(y==5&&((x==2)||(t2x!=x&&(x==3||x==5))||(x==4)||(x==6&&t2x!=x)))))||(world==6&&y<6&&y>2)||(world==7&&((x>2&&x<5)||(y>2&&y<7)))))
				{
					move=4;
					movetest--;
				}
				else if (cinmove[0]=='5'&&cinmove[1]=='\0'&&((world==1&&((x>2&&x<7&&y>2&&y<10)||(x>6&&x<10&&y>2&&y<7)||((x==7||x==9)&&y==7)))||(world==3&&x==6&&y==2)||(world==4&&y>1&&x>1&&x<12&&((x<7&&y<7)||(x>6&&y<4)||(x==7&&y==4)))||(world==5&&x>2&&x<6&&((y==2&&x==4&&t1x!=x)||(y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))||(y==5&&x==4&&t2x!=x)))||(world==6&&x>2&&x<6&&((y==3&&x!=4)||(y==4)||(y==5&&x==4)))||(world==7&&x>2&&x<5&&y>2&&y<7)))
				{
					move=5;
					movetest--;
				}
				else
				{
					move=0;
					cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
				}
			}
			movetest=1;
// Movealternativ
			if (move==1)
			{
				if (world==1)
				{
					if ((y<10&&x<8)||(y<7&&(x==8||x==10))||(y<8&&x==9))
						y++;
					else 
						y--;
				}
				else if (world==3)
				{
					if (y<3)
						y++;
					else 
						y--;
				}
				else if (world==4)
				{
					if ((y<7&&x<8)||(y<4&&x>7)||(y==4&&x==10))
						y++;
					else 
						y--;
				}
				else if (world==5)
				{
					if ((y==2&&t1x!=x)||(y==3&&t2x!=x)||(y==4)||((x==2||x==4||x==6)&&y==5))
						y++;
					else if ((y==2&&x==4)||y==3||(y==4&&t1x!=x)||(y==5&&t2x!=x)||y==6)
						y--;
					else if (x>2)
						x--;
					else
						x++;
				}
				else if (world==6)
				{
					if ((y<6&&(x==2||x==4||x==6))||(y<5&&(x==3||x==5)))
						y++;
					else 
						y--;
				}
				else if (world==7)
				{
					if (y<7)
						y++;
					else
						y--;
				}
			}
			if (move==2)
			{
				if (world==1)
				{
					if (y>2&&((y<10&&x<8)||(y<7&&(x==8||x==10))||(y<8&&x==9)))
						y--;
					else if (x>2)
						x--;
					else 
						x++;
				}
				else if (world==3)
				{
					if ((y==2&&x==5)||(y==1&&x==6))
					{
// Kan ej gå på trappan till W6 utan Amateur Key
						if (amateurkey==0)
						{
							x++;
							x--;
							//Stay
							cout << "Sorry! You need Amateur Key to enter here!" << endl << endl;
						}
						else if (y==2&&x==5)
							y--;
						else
							x--;
					}
					else if (y==2&&x>4)
						y--;
					else if ((y==1&&x==5)||(x==1&&(y==1||y==2)))
						x++;
					else 
						x--;
				}
				else if (world==4)
				{
					if (y>1&&((x<8&&y<7)||(x>7&&y<4)||(x==10&&y==4)))
						y--;
					else if (x>1)
						x--;
					else
						x++;
				}
				else if (world==5)
				{
					if (((y==5&&(x==2||x==4||x==6)&&t2x!=x)||(y==4&&t1x!=x)||(y==3&&t2x!=x)||(x==4&&y==2&&t1x!=x)))
						y--;
					else if (x>2&&((y==2&&((x!=4&&t1x!=x)||(x==4&&t1x==x)))||(y==3&&t1x!=(x-1)&&t2x==x)||(y==4&&t1x==x&&t2x!=(x-1))||(y==5&&(((x==3||x==5)&&t2x!=x)||((x==4||x==6)&&t2x==x)))))
						x--;
					else if ((y==2&&((x==2&&t1x!=x)||((x==3||x==5)&&t1x==x)))||(y==3&&t1x==(x-1)&&t2x==x)||(y==4&&((x==2&&t1x==x)||(t1x==x&&t2x==(x-1))))||(y==5&&(x==3||x==5)&&t2x==x))
						x++;
				}
				else if (world==6)
				{
					if (((y<6&&(x==2||x==4||x==6))||(y<5&&(x==3||x==5)))&&((y>2&&x!=4)||(y>3&&x==4)))
						y--;
					else if (y<6&&x>2&&((y>2)||(y==2&&x!=5)))
						x--;
					else if (y<6&&x<6&&((y>2)||(y==2&&(x==2||x==5))))
						x++;
					else
					{
						x++;
						x--;
						//Stay
					}

				}
				else if (world==7)
				{
					if (y<7&&y>2)
						y--;
					else if (x>2)
						x--;
					else
						x++;
				}
			}
			if (move==3)
			{
				if (world==1)
				{
					if (x>2&&y>2&&((y<10&&x<8)||(y<7&&(x==8||x==10))||(y<8&&x==9)))
						x--;
					else if ((x==2&&y==2)||(x==10&&y==2)||(x==10&&y==7)||(x==2&&y==10)||(x==7&&y==10))
					{
						x++;
						x--;
						//Stay
					}
					else
						x++;
				}
				else if (world==3)
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
				else if (world==4)
				{
					if (x>1&&y>1&&((x<7&&y<7)||(x<12&&y<4)||(x==7&&y==4)||(x==10&&y==4)))
						x--;
					else if ((x==1&&(y==1||y==7))||(x==12&&(y==1||y==4))||(x==7&&y==7))
					{
						x++;
						x--;
						//Stay
					}
					else
						x++;
				}
				else if (world==5)
				{
					if ((y==2&&x==4&&x!=t1x)||(y==3&&x>2&&t1x!=(x-1)&&t2x!=x)||(y==4&&x>2&&x<7&&t1x!=x&&t2x!=(x-1))||(y==5&&t2x!=x&&(x==4||x==6)))
						x--;
					else if (((((x==2||x==6)&&t1x!=x)||(t1x==x&&(x==3||x==5)))&&y==2)||(y==3&&((x==2&&t1x==(x+1)&&t2x!=x)||(x==6&&((t1x==(x-1)&&t2x!=x)||(t1x!=(x-1)&&t2x==x)))||(x>2&&x<6&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)))||(y==4&&((x==2&&((t1x!=x&&t2x==(x+1))||(t1x==x&&t2x!=(x+1))))||(x==6&&((t1x!=x&&t2x==(x-1))||(t1x==x&&t2x!=(x-1))))||(x>2&&x<6&&t1x==x&&(t2x==(x-1)||t2x==(x+1)))))||(y==5&&x!=4&&t2x==x))
					{
						x++;
						x--;
						//Stay
					}
					else  
						x++;
				}
				else if (world==6)
				{
					if ((y==3&&(x==3||x==5||x==6))||(y==4&&x>2)||(y==5&&(x==4||x==6)))
						x--;
					else if ((y==3&&(x==2||x==4))||(y==4&&x==2)||(y==5&&(x==2||x==3||x==5)))
						x++;
					else
					{
						x++;
						x--;
						//Stay
					}
				}
				else if (world==7)
				{
					if (y<7&&y>2)
					{
						if (x>2)
							x--;
						else
							x++;
					}
					else if (x>2&&x<5)
					{
						if (y<7&&y>2)
							x--;
						else
							x++;
					}
				}
			}
			if (move==4)
			{
				if (world==1&&(x>2&&y>2&&((y<10&&x<7)||(y<8&&(x==7||x==9))||(y<7&&x==8))))
				{
					x++;
				}
				if (world==3&&((y==1&&(x==5||x==7))||(y==2&&(x==1||x>4&&x<7))||(y==3&&(x==1||x==7))))
				{
					x++;
				}
				if (world==4&&x>1&&y>1&&((x<7&&y<7)||(x<12&&y<4)||(x==7&&y==4)||(x==10&&y==4)))
				{
					x++;
				}
				if (world==5&&((x>2&&x<6&&((y==3&&t1x!=(x-1)&&t1x!=(x+1)&&t2x!=x)||(y==4&&t1x!=x&&t2x!=(x-1)&&t2x!=(x+1))))||(x==4&&y==2&&t1x!=x)||(x==4&&y==5&&t2x!=x)))
				{
					x++;
				}
				if (world==6&&((y==5&&x==4)||(y==4&&x>2&&x<6)||(y==3&&(x==3||x==5))))
				{
					x++;
				}
				if (world==7&&x>2&&x<5&&y>2&&y<7)
				{
					x++;
				}
			}
// Flyttning mellan världar
			if (world==1&&x==9&&y==8)
			{
				world=3;
				x=2;
				y=3;
			}
			else if (world==3)
			{
				if (x==1&&y==3)
				{
					world=1;
					x=9;
					y=7;
				}
				else if (x==7&&y==3)
				{
					world=4;
					x=2;
					y=7;
				}
				else if (x==5&&y==1)
				{
					world=7;
					x=5;
					y=6;
				}
			}
			else if (world==4)
			{
				if (x==1&&y==7)
				{
					world=3;
					x=6;
					y=3;
				}
				else if (x==10&&y==5)
				{
					world=5;
					x=4;
					y=2;
				}
			}
			else if (world==5)
			{
				if (x==4&&y==1)
				{
					world=4;
					x=10;
					y=4;
				}
				else if (x==4&&y==6)
				{
					world=6;
					x=4;
					y=5;
				}
			}
			else if (world==6&&x==4&&y==6)
			{
				world=5;
				x=4;
				y=5;
			}
			else if (world==7)
			{
				if (x==5&&y==7)
				{
					world=3;
					x=5;
					y=2;
				}
				else if (x==2&&y==4)
				{
					cout << "To World 7" << endl << endl;
				}
				else if (x==5&&y==2)
				{
					cout << "To World 8" << endl << endl;
				}
			}
// Tränareflytt/fight
			if (world==5)
			{
				if (y==3&&t1==1)
				{
					t1x=x-1;
					t1=2;
				}
				if (y==4&&t2==1)
				{
					t2x=x+1;
					t2=2;
				}
			}
			else if ((world==4)||(world==6))
			{
				if (t1==0)
					t1x=2;
				if (t2==0)
					t2x=6;
			}
// Visar kartan efter flytt, tränarflytt och världbyte
			map (world, x, y, xplace, t1, t2, t1x, t2x);
// Kontrollerar om man är i gräs och ifall man isf möter en pokemon
			enetest=rand()%4;
			if ((enetest>1&&((world==1&&((x<4&&(y==7||y==8))||(x<5&&(y==9||y==10))))||(world==4&&(((x==3||x==4||x==5)&&(y==5||y==6||y==7))||((x==1||x==2||x==3)&&(y==1||y==2))))))||(t1==2)||(t2==2)||(l1==2))
			{
// Nollställer tur- och escapevärdet
				turn=0;
				tryesc=0;
// Strid mot fiende
				if (world==1)
				{
// Bestämmer pokemon i gräsen i värld 1
					lvl21=rand()%2+1;
					type21=4;
				}
				else if (world==4)
				{
// Bestämmer pokemon i gräsen i värld 3
					lvl21=rand()%3+2;
					type21=4;
				}
				else if (world==5)
				{
					if (t1==2)
					{
						cout << "Trainer Novice Alan: I'm training to become a pokemontrainer!" << endl << endl;
						Sleep(2000);
						cout << "Trainer Novice Alan wants to fight!" << endl << endl;
						Sleep(1000);
// Tränare 1 Pokemon 1
						lvl21=2;
						type21=4;
						hp21=lvl21*10;
						hpstart21=hp21;
						strength21=lvl21;
// Tränare 1 Pokemon 2
						lvl22=2;
						type22=4;
						hp22=lvl22*10;
						hpstart22=hp22;
						strength22=lvl22;
					}
					else if (t2==2)
					{
						cout << "Trainer Novice Burly: I'll become the best pokemontrainer in the world!" << endl << endl;
						Sleep(2000);
						cout << "Trainer Novice Burly wants to fight!" << endl << endl;
						Sleep(1000);
// Tränare 2 Pokemon 1
						lvl21=3;
						type21=4;
						hp21=lvl21*10;
						hpstart21=hp21;
						strength21=lvl21;
// Tränare 2 Pokemon 2
						lvl22=3;
						type22=4;
						hp22=lvl22*10;
						hpstart22=hp22;
						strength22=lvl22;
					}
				}
				if (world==6&&l1==2)
				{
					cout << "Trainercoach Murgo: This is my school, here, I teach people to become better trainers. Maybe I can teach you a lesson or two." << endl << endl;
					Sleep(2000);
					cout << "Trainercoach Murgo wants to fight!" << endl << endl; //-------------------bookmark----------------
					Sleep(1000);
// Ledare 1 Pokemon 1
					lvl21=3;
					type21=4;
// Ledare 1 Pokemon 2
					lvl22=2;
					type22=4;
// Ledare 1 Pokemon 3
					lvl23=4;
					type23=4;
				}
// Bestämmer egenskaper för fiendepokemon 1
				strength21=lvl21;
				hp21=lvl21*10;
				hpstart21=hp21;
				if (t1==2||t2==2||l1==2)
				{
// Bestämmer egenskaper för fiendepokemon 2
					strength22=lvl22;
					hp22=lvl22*10;
					hpstart22=hp22;
				}
				if (l1==2)
				{
// Bestämmer egenskaper för fiendepokemon 3
					strength23=lvl23;
					hp23=lvl23*10;
					hpstart23=hp23;
				}
// Skriver ut fiendepokemonens egenskaper
				playertest=1;
				pokemon (lvl21, exp2, explvl1, type21, strength21, hp21, hpstart21, enemy, playertest);
				playertest=0;
// Strid!
// Nr 1 kommer med i strid
				giveexp1=1;
// Om Nr 1 är först och har 0 i HP så skickas Nr 2 ut istället
				if (hp11==0)
				{
// nr 1 till temp
					poketemp=poketest1;
					templvl=lvl11;
					tempexp=exp1;
					tempexplvl=explvl1;
					temptype=type11;
					tempstrength=strength11;
					temphp=hp11;
					temphpstart=hpstart11;
					strcpy (temppoke, poke1);
// nr 2 till nr 1
					poketest1=poketest2;
					lvl11=lvl12;
					exp1=exp2;
					explvl1=explvl2;
					type11=type12;
					strength11=strength12;
					hp11=hp12;
					hpstart11=hpstart12;
					strcpy (poke1, poke2);
// temp till nr 2
					poketest2=poketemp;
					lvl12=templvl;
					exp2=tempexp;
					explvl2=tempexplvl;
					type12=temptype;
					strength12=tempstrength;
					hp12=temphp;
					hpstart12=temphpstart;
					strcpy (poke2, temppoke);
// Nr 2 kommer med i strid
					giveexp2=1;
// Om Nr 1 och Nr 2 har 0 HP så skickar Nr 3 ut istället
					if (hp11==0)
					{
// nr 1 till temp
						poketemp=poketest1;
						templvl=lvl11;
						tempexp=exp1;
						tempexplvl=explvl1;
						temptype=type11;
						tempstrength=strength11;
						temphp=hp11;
						temphpstart=hpstart11;
						strcpy (temppoke, poke1);
// nr 3 till nr 1
						poketest1=poketest3;
						lvl11=lvl13;
						exp1=exp3;
						explvl1=explvl3;
						type11=type13;
						strength11=strength13;
						hp11=hp13;
						hpstart11=hpstart13;
						strcpy (poke1, poke3);
// temp till nr 3
						poketest3=poketemp;
						lvl13=templvl;
						exp3=tempexp;
						explvl3=tempexplvl;
						type13=temptype;
						strength13=tempstrength;
						hp13=temphp;
						hpstart13=temphpstart;
						strcpy (poke3, temppoke);
// Nr 3 kommer med i strid
						giveexp2=1;
					}
				}
				while ((hp11>0||hp12>0||hp13>0)&&hp21>0)
				{
// Player 1's tur
					if (turn%2==0)
					{
// Bestäm vad man ska göra i striden
						while (fighttest==1)
						{
							cout << "What do you wanna do?" << endl << "1.Fight" << endl << "2.Pokemon" << endl << "3.Pack" << endl << "4.Run" << endl << "Type here: ";
							cin >> cinfight;
							cout << endl;
// Kontrollera om cinfight är giltig
							if (cinfight[0]=='1'&&cinfight[1]=='\0')
							{
								fight=1;
								fighttest--;
							}
							else if (cinfight[0]=='2'&&cinfight[1]=='\0')
							{
								fight=2;
								fighttest--;
							}
							else if (cinfight[0]=='3'&&cinfight[1]=='\0')
							{
								fight=3;
								fighttest--;
							}
							else if (cinfight[0]=='4'&&cinfight[1]=='\0')
							{
								fight=4;
								fighttest--;
							}
							else
							{
								fight=0;
								cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
							}
						}
						fighttest=1;
// Om man valde Fight i striden
						if (fight==1)
						{
// Bestäm vilken attack man ska använda
							while (atttest==1)
							{
// Visar attacker etc (Player 1)
								chooseattack (type11, poke1);
								cin >> cinatthelp;
								cout << endl;
// Kontrollerar att cinatthelp är giltig
								if (cinatthelp[0]=='1'&&cinatthelp[1]=='\0')
								{
									atthelp1=1;
									atttest--;
								}
								else if (cinatthelp[0]=='2'&&cinatthelp[1]=='\0')
								{
									atthelp1=2;
									atttest--;
								}
								else if (cinatthelp[0]=='3'&&cinatthelp[1]=='\0'&&(type11==1||type11==2||type11==3))
								{
									atthelp1=3;
									atttest--;
								}
								else
								{
									atthelp1=0;
									cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
								}
							}
							atttest=1;
							if (atthelp1==1||(atthelp1==2&&(type11==1||type11==2||type11==3)))
							{
// Bestämmer ifall det ska blir plusskada i attacken
								if (type21==3)
									grassplus1=strength11+rand()%3;
								else if (type21==2)
									grassplus1=-1-rand()%3;
								else
									grassplus1=0;
								if (type21==1)
									fireplus1=strength11+rand()%3;
								else if (type21==3)
									fireplus1=-1-rand()%3;
								else
									fireplus1=0;
								if (type21==2)
									waterplus1=strength11+rand()%3;
								else if (type21==1)
									waterplus1=-1-rand()%3;
								else
									waterplus1=0;
// Bestämmer storleken på skadan i attacken
								if (atthelp1==1)
									att1=strength11+rand()%6;
								if (atthelp1==2&&type11==1)
									att1=strength11+rand()%4+grassplus1;
								if (atthelp1==2&&type11==2)
									att1=strength11+rand()%4+fireplus1;
								if (atthelp1==2&&type11==3)
									att1=strength11+rand()%4+waterplus1;
								if (att1<0)
									att1=0;
// Räknar ut hur mycket HP Player 2 har kvar
								hp21-=att1;
// Skriver ut själva attacken för Player 1
								player (atthelp1, type11, att1, poke1);
								if (hp21<0)
									hp21=0;
							}
						}
// Om man valde Pokemon i striden
						else if (fight==2)
						{
// Bestäm vad man ska göra (visa/byta pokemon)
							while (changetest==1)
							{
// Skriver ut alternativ för att byta/visa pokemon
								changepokemon (pokemonnr, poke1, poke2, poke3, hp11, hp12, hp13, deadpokemon);
								cin >> cinchange;
								cout << endl;
// Kontrollerar att cinchange är giltig
								if (cinchange[0]=='1'&&cinchange[1]=='\0')
									change=1;
								else if (cinchange[0]=='2'&&cinchange[1]=='\0'&&((pokemonnr>1)||(deadpokemon==0)))
									change=2;
								else if (cinchange[0]=='3'&&cinchange[1]=='\0'&&((pokemonnr==2&&hp12>0)||(pokemonnr==3&&(hp12>0||hp13>0))))
									change=3;
								else if (cinchange[0]=='4'&&cinchange[1]=='\0'&&pokemonnr==3&&hp12>0&&hp13>0)
									change=4;
								else 
									change=0;
								if (change==1||change==2||change==3||change==4)
									changetest--;
								else
									cout << "Sorry! That letter/number isn't valid! Try again!" << endl << endl;
							}
							deadpokemon=0; 
							changetest=1;
							if (change==1)
							{
// Byter med pokemon nr 2 i kön 
								if (hp12>0)
								{
// nr 1 till temp
									poketemp=poketest1;
									templvl=lvl11;
									tempexp=exp1;
									tempexplvl=explvl1;
									temptype=type11;
									tempstrength=strength11;
									temphp=hp11;
									temphpstart=hpstart11;
									strcpy (temppoke, poke1);
// nr 2 till nr 1
									poketest1=poketest2;
									lvl11=lvl12;
									exp1=exp2;
									explvl1=explvl2;
									type11=type12;
									strength11=strength12;
									hp11=hp12;
									hpstart11=hpstart12;
									strcpy (poke1, poke2);
// temp till nr 2
									poketest2=poketemp;
									lvl12=templvl;
									exp2=tempexp;
									explvl2=tempexplvl;
									type12=temptype;
									strength12=tempstrength;
									hp12=temphp;
									hpstart12=temphpstart;
									strcpy (poke2, temppoke);
// Nr 2 kommer med i strid
									giveexp2=1;
								}
// Byter med pokemon nr 3 i kön 
								else if (hp13>0)
								{
// nr 1 till temp
									poketemp=poketest1;
									templvl=lvl11;
									tempexp=exp1;
									tempexplvl=explvl1;
									temptype=type11;
									tempstrength=strength11;
									temphp=hp11;
									temphpstart=hpstart11;
									strcpy (temppoke, poke1);
// nr 3 till nr 1
									poketest1=poketest3;
									lvl11=lvl13;
									exp1=exp3;
									explvl1=explvl3;
									type11=type13;
									strength11=strength13;
									hp11=hp13;
									hpstart11=hpstart13;
									strcpy (poke1, poke3);
// temp till nr 3
									poketest3=poketemp;
									lvl13=templvl;
									exp3=tempexp;
									explvl3=tempexplvl;
									type13=temptype;
									strength13=tempstrength;
									hp13=temphp;
									hpstart13=temphpstart;
									strcpy (poke3, temppoke);
// Nr 3 kommer med i strid
									giveexp3=1;
								}
								else
								{
// Visar pokemon (1-3 beroende på hur många man har)
									pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
									if (pokemonnr>1)
									{
										pokemon (lvl12, exp2, explvl2, type12, strength12, hp12, hpstart12, poke2, playertest);
										if (pokemonnr>2)
										{
											pokemon (lvl13, exp3, explvl2, type13, strength13, hp13, hpstart12, poke3, playertest);
										}
									}
								}
// Gör så att motståndaren får en extra attack efter bytet
								if (hp12>0||hp13>0)
									turn++;
							}
// Byter med pokemon nr 3 i kön
							else if (change==2)
							{
								if (hp12>0&&hp13>0)
								{
// nr 1 till temp
									poketemp=poketest1;
									templvl=lvl11;
									tempexp=exp1;
									tempexplvl=explvl1;
									temptype=type11;
									tempstrength=strength11;
									temphp=hp11;
									temphpstart=hpstart11;
									strcpy (temppoke, poke1);
// nr 3 till nr 1
									poketest1=poketest3;
									lvl11=lvl13;
									exp1=exp3;
									explvl1=explvl3;
									type11=type13;
									strength11=strength13;
									hp11=hp13;
									hpstart11=hpstart13;
									strcpy (poke1, poke3);
// temp till nr 3
									poketest3=poketemp;
									lvl13=templvl;
									exp3=tempexp;
									explvl3=tempexplvl;
									type13=temptype;
									strength13=tempstrength;
									hp13=temphp;
									hpstart13=temphpstart;
									strcpy (poke3, temppoke);
// Nr 3 kommer med i strid
									giveexp3=1;
// Gör så att motståndaren får en extra attack efter bytet
									turn++;
								}
								else if (hp12>0||hp13>0)
								{
// Visar pokemon (1-3 beroende på hur många man har)
									pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
									if (pokemonnr>1)
									{
										pokemon (lvl12, exp2, explvl2, type12, strength12, hp12, hpstart12, poke2, playertest);
										if (pokemonnr>2)
										{
											pokemon (lvl13, exp3, explvl2, type13, strength13, hp13, hpstart12, poke3, playertest);
										}
									}
								}
								else
								{
									// Backar
								}
							}
							else if (change==3)
							{
								if (hp12>0&&hp13>0)
								{
// Visar pokemon (1-3 beroende på hur många man har)
									pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
									if (pokemonnr>1)
									{
										pokemon (lvl12, exp2, explvl2, type12, strength12, hp12, hpstart12, poke2, playertest);
										if (pokemonnr>2)
										{
											pokemon (lvl13, exp3, explvl2, type13, strength13, hp13, hpstart12, poke3, playertest);
										}
									}
								}
								else if (hp12>0||hp13>0)
								{
									// Backar
								}
							}
							else if (change==4&&hp12>0&&hp13>0)
							{
								// Backar
							}
						}
// Om man valde Pack i striden
						else if (fight==3)
						{
// Bestämmer vad man ska göra i Pack
							while (packtest==1)
							{
								cout << "Backpack: " << endl << "1";
								if (pokemonnr<3&&pokeball>0)
								{
									cout << ".Pokéball: " << pokeball << endl;
									if (amateurkey==1)
										cout << "2.Amateur Key" << endl << "3.Back" << endl;
									else
										cout << "2.Back" << endl;
								}
								else if (amateurkey==1)
								{
									cout << "Amateur Key" << endl << "2.Back" << endl;
								}
								else
									cout << ".Back" << endl;
								cout << "Type: ";
								cin >> cinpack;
								cout << endl;
// Kontrollerar om cinpack är giltig
								if (cinpack[0]=='1'&&cinpack[1]=='\0')
									backpack=1;
								else if (cinpack[0]=='2'&&cinpack[1]=='\0'&&pokemonnr<3)
									backpack=2;
								else 
									backpack=0;
								if (backpack==1||backpack==2)
								{
									packtest--;
								}
								else
									cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
							}
							packtest=1;
							if (backpack==1&&pokemonnr<3)
							{
								cout << "Throwing pokéball" << endl << "Trying catching this one" << endl << endl;
								Sleep(3000);
// Använder pokebollar
								pokeball--;
// Avgör om fångar pokemon eller ej
								catchtest=rand()%10+1;
								if (catchtest>6)
								{
									cout << "You caught it" << endl << "Type name for your new pokemon: ";
// Om man valde att försöka fånga fiendepokemonen och maxantalet inte är nått
									if (pokemonnr==1)
									{
// Har bara en pokemon	
										cin >> poke2;
										cout << endl;
										lvl12=lvl21;
										hp12=hp21;
										hpstart12=lvl12*10;
										type12=type21;
										strength12=lvl12;
										exp2=0;
										explvl2=10+lvl12*5;
										tryesc=lvl21+1;
										pokemonnr=2;
										hp21=0;
									}
									else if (pokemonnr==2)
									{
// Har två pokemon
										cin >> poke3;
										cout << endl;
										lvl13=lvl21;
										hp13=hp21;
										hpstart13=lvl13*10;
										type13=type21;
										strength13=lvl13;
										exp3=0;
										explvl3=10+lvl13*5;
										tryesc=lvl21+1;
										pokemonnr=3;
										hp21=0;
									}
								}
								else
								{
									cout << "Pokemon got away!" << endl << endl;
								}
							}
						}
// Om man valde Run i striden
						else if (fight==4)
						{
							cout << name << " tries to escape!" << endl << endl;
							tryesc=rand()%4+lvl11;
// Paus medan man försöker fly
							Sleep(2000);
							if (tryesc>lvl21)
								hp21=0;
// Skriver ut att man flyr eller ej
							escape (tryesc, lvl21, name);
						}
						else
						{
							cout << "Sorry! That number/letter isn't valid! Try again!" << endl;
						}
					}
// Player 2's tur
					if (turn%2==1)
					{
// Bestämmer ifall det ska blir plusskada i attacken
						if (type21==1||type21==2||type21==3)
							atthelp2=rand()%2+1;
						else
							atthelp2=1;
						if (type11==3)
							grassplus2=strength21+rand()%3;
						else if (type11==2)
							grassplus2=-1-rand()%3;
						else
							grassplus2=0;
						if (type11==1)
							fireplus2=strength21+rand()%3;
						else if (type11==3)
							fireplus2=-1-rand()%3;
						else 
							fireplus2=0;
						if (type11==2)
							waterplus2=strength21+rand()%3;
						else if (type11==1)
							waterplus2=-1-rand()%3;
						else
							waterplus2=0;
// Bestämmer storleken på skadan i attacken
						if (atthelp2==1)
							att2=strength21+rand()%6;
						if (atthelp2==2&&type21==1)
							att2=strength21+rand()%4+grassplus2;
						if (atthelp2==2&&type21==2)
							att2=strength21+rand()%4+fireplus2;
						if (atthelp2==2&&type21==3)
							att2=strength21+rand()%4+waterplus2;
						if (att2<0)
							att2=0;
// Räknar ut hur mycket HP Player 2 har kvar
						hp11-=att2;
// Skriver ut själva attacken för Player 1
						player (atthelp2, type21, att2, enemy);
						if (hp11<0)
							hp11=0;
						tryesc=0;
					}
					if (hp11==0)
					{
// Ska till byta pokemon, efter död pokemon
						fight=2;
						fighttest=0;
						deadpokemon=1;
					}
					if ((fight==1&&(atthelp1==1||(atthelp1==2&&(type11==1||type11==2||type11==3))))||fight==4||turn%2==1)
					{
// Skriver ut HP för både Player 1 och Player 2
						hp (tryesc, hp11, hp21, poke1, enemy);
						turn++;
					}
					else if (backpack==1&&pokemonnr<3)
					{
						turn++;
						backpack=0;
					}
// Exp för Player 1 (om HP för Player 2 är lika med 0 och Player 1 inte försökte fly)
					if (hp21==0&&tryesc<=lvl21)
					{
// Om pokemonen är död så får den ingen exp
						if (hp11==0)
							giveexp1=0;
						if (hp12==0)
							giveexp2=0;
						if (hp13==0)
							giveexp3=0;
						if (giveexp1==1)
						{
							exp1+=lvl21*5;
							cout << poke1 << " gets " << lvl21*5 << " experience!" << endl << endl;
						}
						if (giveexp2==1)
						{
							exp2+=lvl21*5;
							cout << poke2 << " gets " << lvl21*5 << " experience!" << endl << endl;
						}
						if (giveexp3==1)
						{
							exp3+=lvl21*5;
							cout << poke3 << " gets " << lvl21*5 << " experience!" << endl << endl;
						}
// Om Player 1 går upp i level
						if (exp1>=explvl1)
						{
							exp1-=explvl1;
							lvl11++;
							explvl1=10+lvl11*5;
							hp11+=10;
							hpstart11=10+lvl11*10;
							strength11=lvl11+2; 
							explvl1=10+lvl11*5;
							cout << poke1 << " turns into lvl " << lvl11 << endl << endl;
						}
					}			
					if (hp21==0)
					{
						if (hp22>0)
						{
// Byter till Fiende 2 (Flyttar 2:an till 1:an)
							lvl21=lvl22;
							type21=type22;
							hp21=hp22;
							hpstart21=hpstart22;
							strength21=strength22;
// Fiende 1 är död (flyttas till 2:an)
							hp22=0;
						}
						else if (hp22==0&&hp23>0)
						{
// Byter till Fiende 3 (Flyttar 3:an till 1:an)
							lvl21=lvl23;
							type21=type23;
							hp21=hp23;
							hpstart21=hpstart23;
							strength21=strength23;
// Fiende 2 är död (flyttas till 3:an)
							hp23=0;
						}
						if (hp21>0&&(t1==2||t2==2||l1==2))
						{
							if (t1==2)
							{
								cout << "Trainer Novice Alan";
							}
							else if (t2==2)
							{
								cout << "Trainer Novice Burly";
							}
							else if (l1==2)
							{
								cout << "Trainercoach Murgo";
							}
							cout << " sends out " << enemy << endl << endl;
// Visar fiendepokemon
							playertest=1;
							pokemon (lvl21, exp2, explvl1, type21, strength21, hp21, hpstart21, enemy, playertest);
							playertest=0;
// Backar tiden när	fienden dör
							turn--;
						}
					}
					if (hp21==0&&hp22==0&&hp23==0)
					{
						if (t1==2)
						{
							cout << "Trainer Novice Alan is defeated!" << endl << endl;
							t1=0;
						}
						if (t2==2)
						{
							cout << "Trainer Novice Burly is defeated!" << endl << endl;
							t2=0;
						}
						if (l1==2)
						{
							cout << "Trainercoach Murgo is defeated!" << endl << endl;
							amateurkey=1;
							l1=0;
						}
// Skriver ut kartan (efter strid)
						map (world, x, y, xplace, t1, t2, t1x, t2x);
					}
				}
// Slut på strid, byt tillbaka plats på pokemon
				if (poketest1==2)
				{
// Byter plats på 1 och 2
					if (poketest2==1)
					{
// nr 1 till temp
						poketemp=poketest1;
						templvl=lvl11;
						tempexp=exp1;
						tempexplvl=explvl1;
						temptype=type11;
						tempstrength=strength11;
						temphp=hp11;
						temphpstart=hpstart11;
						strcpy (temppoke, poke1);
// nr 2 till nr 1
						poketest1=poketest2;
						lvl11=lvl12;
						exp1=exp2;
						explvl1=explvl2;
						type11=type12;
						strength11=strength12;
						hp11=hp12;
						hpstart11=hpstart12;
						strcpy (poke1, poke2);
// temp till nr 2
						poketest2=poketemp;
						lvl12=templvl;
						exp2=tempexp;
						explvl2=tempexplvl;
						type12=temptype;
						strength12=tempstrength;
						hp12=temphp;
						hpstart12=temphpstart;
						strcpy (poke2, temppoke);
					}
// Byter plats på från 1 tll 2, 2 till 3 och 3 till 1
					else if (poketest2==3)
					{
// nr 3 till temp
						poketemp=poketest3;
						templvl=lvl13;
						tempexp=exp3;
						tempexplvl=explvl3;
						temptype=type13;
						tempstrength=strength13;
						temphp=hp13;
						temphpstart=hpstart13;
						strcpy (temppoke, poke3);
// nr 2 till nr 3
						poketest3=poketest2;
						lvl13=lvl12;
						exp3=exp2;
						explvl3=explvl2;
						type13=type12;
						strength13=strength12;
						hp13=hp12;
						hpstart13=hpstart12;
						strcpy (poke3, poke2);
// nr 1 till nr 2
						poketest2=poketest1;
						lvl12=lvl11;
						exp2=exp1;
						explvl2=explvl1;
						type12=type11;
						strength12=strength11;
						hp12=hp11;
						hpstart12=hpstart11;
						strcpy (poke2, poke1);
// temp till nr 1
						poketest1=poketemp;
						lvl11=templvl;
						exp1=tempexp;
						explvl1=tempexplvl;
						type11=temptype;
						strength11=tempstrength;
						hp11=temphp;
						hpstart11=temphpstart;
						strcpy (poke1, temppoke);
					}
				}
				else if (poketest1==3)
				{
// Byter plats på 1 och 3
					if (poketest3==1)
					{
// nr 1 till temp
						poketemp=poketest1;
						templvl=lvl11;
						tempexp=exp1;
						tempexplvl=explvl1;
						temptype=type11;
						tempstrength=strength11;
						temphp=hp11;
						temphpstart=hpstart11;
						strcpy (temppoke, poke1);
// nr 3 till nr 1
						poketest1=poketest3;
						lvl11=lvl13;
						exp1=exp3;
						explvl1=explvl3;
						type11=type13;
						strength11=strength13;
						hp11=hp13;
						hpstart11=hpstart13;
						strcpy (poke1, poke3);
// temp till nr 3
						poketest3=poketemp;
						lvl13=templvl;
						exp3=tempexp;
						explvl3=tempexplvl;
						type13=temptype;
						strength13=tempstrength;
						hp13=temphp;
						hpstart13=temphpstart;
						strcpy (poke3, temppoke);
					}
// Byter plats på från 1 till 3, 3 till 2 och 2 till 1
					else if (poketest3==2)
					{
// nr 1 till temp
						poketemp=poketest1;
						templvl=lvl11;
						tempexp=exp1;
						tempexplvl=explvl1;
						temptype=type11;
						tempstrength=strength11;
						temphp=hp11;
						temphpstart=hpstart11;
						strcpy (temppoke, poke1);
// nr 2 till nr 1
						poketest1=poketest2;
						lvl11=lvl12;
						exp1=exp2;
						explvl1=explvl2;
						type11=type12;
						strength11=strength12;
						hp11=hp12;
						hpstart11=hpstart12;
						strcpy (poke1, poke2);
// nr 3 till nr 2
						poketest2=poketest3;
						lvl12=lvl13;
						exp2=exp3;
						explvl2=explvl3;
						type12=type13;
						strength12=strength13;
						hp12=hp13;
						hpstart12=hpstart13;
						strcpy (poke2, poke3);
// temp till nr 3
						poketest3=poketemp;
						lvl13=templvl;
						exp3=tempexp;
						explvl3=tempexplvl;
						type13=temptype;
						strength13=tempstrength;
						hp13=temphp;
						hpstart13=temphpstart;
						strcpy (poke3, temppoke);
					}
				}
// Byter plats på 2 och 3
				else if (poketest2==3)
				{
// Nr 2 till temp
					poketemp=poketest2;
					templvl=lvl12;
					tempexp=exp2;
					tempexplvl=explvl2;
					temptype=type12;
					tempstrength=strength12;
					temphp=hp12;
					temphpstart=hpstart12;
					strcpy (temppoke, poke2);
// Nr 3 till Nr 2
					poketest2=poketest3;
					lvl12=lvl13;
					exp2=exp3;
					explvl2=explvl3;
					type12=type13;
					strength12=strength13;
					hp12=hp13;
					hpstart12=hpstart13;
					strcpy (poke2, poke3);
// temp till nr 3
					poketest3=poketemp;
					lvl13=templvl;
					exp3=tempexp;
					explvl3=tempexplvl;
					type13=temptype;
					strength13=tempstrength;
					hp13=temphp;
					hpstart13=temphpstart;
					strcpy (poke3, temppoke);
				}
// Nollställer byte efter död pokemon
				deadpokemon=0;
// Nollställer "giveexp"
				giveexp1=0;
				giveexp2=0;
				giveexp3=0;
			}
// Slut på möta fiende
// Om man ska hela sig
			if (world==1&&x==6&&y==6)
			{
				while (healtest==1)
				{
					cout << "Do you want to heal?" << endl << "1.Yes" << endl << "2.No" << endl << "Type here: ";
					cin >> cingoheal;
					if (cingoheal[0]=='1'&&cingoheal[1]=='\0')
						goheal=1;
					else if (cingoheal[0]=='2'&&cingoheal[1]=='\0')
						goheal=2;
					else
						goheal=0;
					cout << endl;
// Helning
					if (goheal==1)
					{
						hp11=10+lvl11*10;
						if (pokemonnr>1)
						{
							hp12=lvl12*10;
							if (pokemonnr>2)
							{
								hp13=lvl13*10;
							}
						}
						healtest--;
					}
					else if (goheal==2)
						healtest--; 
					else 
						cout << "Sorry! That number/letter isn't valid! Try again!" << endl << endl;
				}
				healtest=1;
// Skriver ut pokemonens egenskaper
				pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
// Visar kartan
				map (world, x, y, xplace, t1, t2, t1x, t2x);
			}
// Om alla Player 1's pokemon är döda
			if (hp11==0&&hp12==0&&hp13==0)
			{
// Återställer Tränarefightkontroll
				if (t1==2)
					t1=1;
				if (t2==2)
					t2=1;
				if (l1==2)
					l1=1;
// Återställer Player 1's position
				world=1;
				x=5;
				y=5;
// Återställer Tränares position
				t1x=2;
				t2x=6;
				cout << "You're dead!" << endl << endl;
// Återställer HP till max
				hp11=hpstart11;
				fighttest=1;
				if (pokemonnr>1)
				{
					hp12=hpstart12;
					if (pokemonnr>2)
					{
						hp13=hpstart13;
					}
				}
// Visa kartan
				map (world, x, y, xplace, t1, t2, t1x, t2x);
			}
		}
		else if (gamealt==2&&world==5&&(((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x))||((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1))))))
		{
// Pratar med T1, T2 eller L1 ifall de är angränsande
			if ((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)))||(y==4&&t1x==x))
			{
				if (t1==1)
				{
					t1=2;
					gamealt=1;
					gamealttest=0;
					move=4;
					movetest=0;
				}
			}
			else
			{
				if (t2==1)
				{
					t2=2;
					gamealt=1;
					gamealttest=0;
					move=4;
					movetest=0;
				}
			}
		}
		else if (gamealt==2&&world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4)))
		{
			//MÖTER L1-------------------bookmark
			if (l1==1)
			{
				l1=2;
				gamealt=1;
				gamealttest=0;
				move=4;
				movetest=0;
			}
		}
		else if (gamealt==3&&((world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1)))))))
		{
// Pratar med T2 ifall båda är angränsande
			cout << "PRATA T2" << endl;
			if (t2==1)
			{
				t2=2;
				gamealt=1;
				gamealttest=0;
				move=4;
				movetest=0;
			}
		}
		else if ((gamealt==2)||(gamealt==3&&((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4)))))||(gamealt==4&&world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1))))))
		{
// Bestämmer vad som ska göras i "visa pokemon"
			while (showtest==1)
			{
				cout << "Change place" << endl << "1.";
				if (pokemonnr==3)
				{
					cout << "Change " << poke1 << " for " << poke2 << endl << "2.Change " << poke1 << " for " << poke3 << endl << "3.Change " << poke2 << " for " << poke3 << endl << "4.Show pokemon" << endl << "5.Back" << endl;
				}
				else if (pokemonnr==2)
				{
					cout << "Change " << poke1 << " for " << poke2 << endl << "2.Show pokemon" << endl << "3.Back" << endl;
				}
				else if (pokemonnr==1)
				{
					cout << "Show pokemon" << endl << "2.Back" << endl;
				}
				cout << "Type here: ";
				cin >> cinshow;
				cout << endl;
				if (cinshow[0]=='1'&&cinshow[1]=='\0')
				{
					showpokemon=1;
					showtest--;
				}
				else if (cinshow[0]=='2'&&cinshow[1]=='\0')
				{
					showpokemon=2;
					showtest--;
				}
				else if (cinshow[0]=='3'&&cinshow[1]=='\0'&&pokemonnr>1)
				{
					showpokemon=3;
					showtest--;
				}
				else if (cinshow[0]=='4'&&cinshow[1]=='\0'&&pokemonnr>2)
				{
					showpokemon=4;
					showtest--;
				}
				else if (cinshow[0]=='5'&&cinshow[1]=='\0'&&pokemonnr>2)
				{
					showpokemon=5;
					showtest--;
				}
				else
				{
					showpokemon=0;
					cout << "Sorry! That number isn't valid! Try again!" << endl << endl;
				}
			}
			showtest=1;
// Byter plats på Nr1 och Nr2 (permanent)
			if (showpokemon==1&&pokemonnr>1)
			{
// nr 1 till temp
				templvl=lvl11;
				tempexp=exp1;
				tempexplvl=explvl1;
				temptype=type11;
				tempstrength=strength11;
				temphp=hp11;
				temphpstart=hpstart11;
				strcpy (temppoke, poke1);
// nr 2 till nr 1
				lvl11=lvl12;
				exp1=exp2;
				explvl1=explvl2;
				type11=type12;
				strength11=strength12;
				hp11=hp12;
				hpstart11=hpstart12;
				strcpy (poke1, poke2);
// temp till nr 2
				lvl12=templvl;
				exp2=tempexp;
				explvl2=tempexplvl;
				type12=temptype;
				strength12=tempstrength;
				hp12=temphp;
				hpstart12=temphpstart;
				strcpy (poke2, temppoke);
			}
// Byter plats på Nr1 och Nr3 (permanent)
			else if (showpokemon==2&&pokemonnr==3)
			{
// nr 1 till temp
				templvl=lvl11;
				tempexp=exp1;
				tempexplvl=explvl1;
				temptype=type11;
				tempstrength=strength11;
				temphp=hp11;
				temphpstart=hpstart11;
				strcpy (temppoke, poke1);
// nr 3 till nr 1
				lvl11=lvl13;
				exp1=exp3;
				explvl1=explvl3;
				type11=type13;
				strength11=strength13;
				hp11=hp13;
				hpstart11=hpstart13;
				strcpy (poke1, poke3);
// temp till nr 3
				lvl13=templvl;
				exp3=tempexp;
				explvl3=tempexplvl;
				type13=temptype;
				strength13=tempstrength;
				hp13=temphp;
				hpstart13=temphpstart;
				strcpy (poke3, temppoke);
			}
// Byter plats på Nr2 och Nr3 (permanent)
			else if (showpokemon==3&&pokemonnr==3)
			{
// Nr 2 till temp
				templvl=lvl12;
				tempexp=exp2;
				tempexplvl=explvl2;
				temptype=type12;
				tempstrength=strength12;
				temphp=hp12;
				temphpstart=hpstart12;
				strcpy (temppoke, poke2);
// Nr 3 till Nr 2
				lvl12=lvl13;
				exp2=exp3;
				explvl2=explvl3;
				type12=type13;
				strength12=strength13;
				hp12=hp13;
				hpstart12=hpstart13;
				strcpy (poke2, poke3);
// temp till nr 3
				lvl13=templvl;
				exp3=tempexp;
				explvl3=tempexplvl;
				type13=temptype;
				strength13=tempstrength;
				hp13=temphp;
				hpstart13=temphpstart;
				strcpy (poke3, temppoke);
			}
// Visar pokemon
			else if ((showpokemon==1&&pokemonnr==1)||(showpokemon==2&&pokemonnr==2)||(showpokemon==4&&pokemonnr==3))
			{
				pokemon (lvl11, exp1, explvl1, type11, strength11, hp11, hpstart11, poke1, playertest);
				if (pokemonnr>1)
				{
					pokemon (lvl12, exp2, explvl2, type12, strength12, hp12, hpstart12, poke2, playertest);
					if (pokemonnr>2)
					{
						pokemon (lvl13, exp3, explvl3, type13, strength13, hp13, hpstart13, poke3, playertest);
					}
				}
			}
			else 
			{
				// Backar
			}
		}
		else if (gamealt==3||(gamealt==4&&((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4)))))||(gamealt==5&&world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1))))))
		{
// Shortcut cheats!
			cout << "What do you want to do?" << endl << "1.Movecheat" << endl << "2.Trainercontroll" << endl << "3.iPokemon" << endl << "4.Back" << endl << "Type here: ";
			cin >> askcheat;
			cout << endl;
			if (askcheat==1)
			{
// Flyttfusk
				cout << "Where are you going?" << endl << "1.World 7" << endl << "2.World 6" << endl << "3.World 5" << endl << "4.World 4" << endl << "5.World 1" << endl << "6.Back" << endl << "Type here: ";
				cin >> movecheat;
				cout << endl;
				if (movecheat==1)
				{
					world=7;
					x=5;
					y=6;
					map (world, x, y, xplace, t1, t2, t1x, t2x);
				}
				else if (movecheat==2)
				{
					world=6;
					x=4;
					y=5;
					map (world, x, y, xplace, t1, t2, t1x, t2x);
				}
				else if (movecheat==3)
				{
					world=5;
					x=4;
					y=2;
					map (world, x, y, xplace, t1, t2, t1x, t2x);
				}
				else if (movecheat==4)
				{
					world=4;
					x=2;
					y=7;
					map (world, x, y, xplace, t1, t2, t1x, t2x);
				}
				else if (movecheat==5)
				{
					world=1;
					x=5;
					y=6;
					map (world, x, y, xplace, t1, t2, t1x, t2x);
				}
				else if (movecheat==6)
				{
// Backar upp ett steg till shortcuts
					if (world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1)))))
						gamealt=5;
					else if ((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4))))
						gamealt=4;
					else
						gamealt=3;
					gamealttest=0;
				}
			}
			else if (askcheat==2)
			{
// Tränarfusk
				cout << "What do you want to do?" << endl << "1.Position T1" << endl << "2.Position T2" << endl << "3.One T1" << endl << "4.One T2" << endl << "5.Back" << endl << "Type here: ";
				cin >> trainercheat;
				cout << endl;
				if (trainercheat==1)
				{
					cout << "Type your position for T1: ";
					cin >> t1x;
					cout << endl;
				}
				else if (trainercheat==2)
				{
					cout << "Type your position for T2: ";
					cin >> t2x;
					cout << endl;
				}
				else if (trainercheat==3)
				{
// Återställer T1
					t1=1;
				}
				else if (trainercheat==4)
				{
// Återställer T2
					t2=1;
				}
				else if (trainercheat==5)
				{
// Backar upp ett steg till shortcuts
					if (world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1)))))
						gamealt=5;
					else if (world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))
						gamealt=4;
					else
						gamealt=3;
					gamealttest=0;
				}
			}
			else if (askcheat==3)
			{	
// iPokemon: Bestämmer lvl och typ
				cout << "Bestäm lvl: ";
				cin >> lvl11;
				cout << endl << "Bestäm typ: ";
				cin >> type11;
				cout << endl;
				strength11=lvl11+2; 
				typetest=1;
				hp11=10+lvl11*10;
				hpstart11=hp11;
				explvl1=10+lvl11*5;
			}
			else if (askcheat==4)
			{
// Backar upp till valalternativ (move, pokemon, shortcuts, finish)
				gamealttest=1;
			}
		}
		else if (gamealt==4||(gamealt==5&&((world==5&&((y==2&&t1x==x)||(y==3&&(t1x==(x-1)||t1x==(x+1)||t2x==x))||(y==4&&(t1x==x||t2x==(x-1)||t2x==(x+1)))||(y==5&&t2x==x)))||(world==6&&((y==2&&(x==3||x==5))||(y==3&&x==4)))))||(gamealt==6&&world==5&&((y==3&&(t1x==(x-1)||t1x==(x+1))&&t2x==x)||(y==4&&t1x==x&&(t2x==(x-1)||t2x==(x+1))))))
		{
// Finish
			spel--;
			cout << "You're done!" << endl << endl;
		}
	}
	return 0;
}