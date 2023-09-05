#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>


//#include "windows.h"
#include "Player.h"
#include "Enemy.h"
#include "Friend.h"
using namespace std;
/*
  _      _       _     _         _               _                   _
 | |    (_)     | |   | |       (_)             | |                 | |
 | |     _  __ _| |__ | |_ _ __  _ _ __   __ _  | |     ___  _ __ __| |___
 | |    | |/ _` | '_ \| __| '_ \| | '_ \ / _` | | |    / _ \| '__/ _` / __|
 | |____| | (_| | | | | |_| | | | | | | | (_| | | |___| (_) | | | (_| \__ \
 |______|_|\__, |_| |_|\__|_| |_|_|_| |_|\__, | |______\___/|_|  \__,_|___/
			__/ |                         __/ |
		   |___/                         |___/

																							   by Mager2112 (Пикулин К. М. ИУ8-31)
*/
void timer()// press any button
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 4); // light blue light
	cout << "  Press any key to continue\n";
	_getch();
	SetConsoleTextAttribute(hConsole, 7);
	system("cls");
} 
void menu() // Main menu
{
	cout << "\t\t\t\t\tLIGHTING LORDS\n";
	cout << "Do you want to play the game? y/n\n";
	string a;
	cin >> a;
	if (a == "y")
	{
		cout << "Time forward\n";
		Sleep(500);
		system("cls");
	}
	else exit(0);
}
void Bad_end(Player acc)
{
	cout << "  Avan didn't helped his tribe. They was killed by...";
	Sleep(3000);
}
void Good_end(Player acc)
{
	cout << "  Avan saved his people. And he became a legend that never dies.\nHe saved whole world from...";
	Sleep(3000);
}
Player death(Player &acc)
{
	system("cls");
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMM    MMMM      MMMM    MMMM          MMM  MMMM  MMMM\n";
	cout << "MMMM  MM  MM  MMMMMM  MMMM  MMMMMM  MMMMMMM  MMMM  MMMM\n";
	cout << "MMMM  MM  MM      MM        MMMMMM  MMMMMMM        MMMM\n";
	cout << "MMMM  MM  MM  MMMMMM  MMMM  MMMMMM  MMMMMMM  MMMM  MMMM\n";
	cout << "MMMM    MMMM      MM  MMMM  MMMMMM  MMMMMMM  MMMM  MMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";

	timer();
	acc.setHealth(0);
	return acc;
}
void End_Titles(Player acc)
{
	system("cls");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout << "\t\t\tLIGHTING LORDS\n";
	Sleep(2000);
	cout << "\t\t\tAuthor: Pikulin Konstantin IU8-31\n";
	cout << "\t\t\tCoworcers: Alexander Kolyesnikov, Glinskaya\n";
	cout << "\nExp earned: " << acc.getExp();
	Sleep(5000);
	system("cls");
	SetConsoleTextAttribute(hConsole, 7);
}

void begin()
{
	cout << "Tens of thousands of years ago, people began their Great Campaign." <<
		"\nThe homeland of the people was Aden, an island of life on Khara,\n whose sandy seas stretched all the way to the Gray Lake." <<
		"\n There were legends that beyond the boundless desert there" <<
		"\nis an endless forest stretching to the Gloomy Ice." <<
		"\nAnd on the other side of the sea of Storms was a land full of treasures.\n ";
	timer();
}
void text_1_battle_1()
{
	cout << "When they came, they took everything.\n Cattle, food and people into slavery.\n";
	timer();
}

void Title()
{
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMM  MMMMMMM  MM       MM        MM  MMMM  MM  MM  MMMM  MM       MMM\n";
	cout << "MMM  MMMMMMM  MM  MMMMMMMMMM  MMMMM    MM  MM  MM    MM  MM  MMMMMMMM\n";
	cout << "MMM  MMMMMMM  MM  MMM  MMMMM  MMMMM  M  M  MM  MM  M  M  MM  MMM  MMM\n";
	cout << "MMM  MMMMMMM  MM  MMM  MMMMM  MMMMM  MM    MM  MM  MM    MM  MMM  MMM\n";
	cout << "MMM       MM  MM       MMMMM  MMMMM  MMM   MM  MM  MMM   MM       MMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMM  MMMMMMM       MM       MM      MMMM       MMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMM  MMMMMMM  MMM  MM  MMM  MM  MMM  MMM  MMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMM  MMMMMMM  MMM  MM       MM  MMM  MMM       MMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMM  MMMMMMM  MMM  MM  M  MMMM  MMM  MMMMMMMM  MMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMM       MM       MM  MMM  MM      MMMM       MMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	
}
void Map()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11); // выделение голубым цветом
	cout << "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll\n" <<
		"llllllllllllllllllllllllllllllllllllllllloooollc::::cllllllllllllllllllllllllllllllllllllllll\n" <<
		"lllllllllllllllllllllllllllllllllld0KKKKXXXXX0d  Gray lllllllllllllllllllllllllllllllllllllll\n" <<
		"lllllllllllllllllllllllllllllllld0NMMMMMMMMMMMNOl Sea  ldxkOO0Kkollllllllllllllllllllllllllll\n" <<
		"lllllllllllllllllllllllllllllloONMMMMMMMMMMMMMMMWXXXNWWMMMMMWOollllllllllllllllllllllllllllll\n" <<
		"lllllllllllllllllllllllllllllxXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOllllllllllllllllllllllllllllll\n" <<
		"lllllllllllllllllllllllllllllllloONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNklllllllllllllllllllllllllll\n" <<
		"llllllllllllllllllllllllllllllldOOxOKKXNWWMMMMMMMMMMMMMMMMMMMMMMMNxllllllllllllllllllllllllll\n"<<
		"llllllllllllllllllllllllllllld0NMNxllloodxkkO00KXNNNWMMMWWWNNXXXK0kllllllllllllllllllllllllll\n"<<
		"llllllllllllllllllllllllllox0NMMMWklllllllllllllooddxkkkxxddoolllllllllllllllllllllllllllllll\n"<<
		"llllllllllllllllllllllllld0WMMMMMWOllllllllllllllllllllllllllllllllllllllllllllllllllllllllll\n"<<
		"llllllllllllodxO0xlllllllOWMMMMMMMN0xolll  Port  llllllllllllllllllllllllllllllllllllllllllll\n"<<
		"lllllllldxO0XNWMMNOolllllkNMMMMMMMMMWNKkxlllllllllllllllllllllllcclllllllllllllllllllllllllll\n"<<
		"lodxkO0XNWMMMMMMMMWXOdlloONMMMMMMMMMMMMMWXOdooollllllllllllllll   Tubal   lllllllllllllllllll\n"<<
		"KXNWMMMMMMMMMMMMMMMMMN0KNWMMMMMMMMMMMMMMMMMMWNX0Oxddlllllllllll   Castle  lllllllllllllllllll\n"<<
		"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNX0kxolllllllcclllllllllllllllllllllllllll\n"<<
		"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0olllllllllllllllllllllllllllllllllll\n"<<
		"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxollllllllllllllllllllllllllllllllll\n"<<
		"KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxollllllllllllllllllllllllllllllllllll\n"<<
		"loxk0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWNNXXK00OOkolol'   River   lllllllllllllllllllllll\n"<<
		"llllloxk0XNMMMMMMMMMMMMMMMMMWNNXXKK00OOkkxxdddoollllllldKO; Kingdom  llllllllllllllllllllllll\n"<<
		"lllllllllodkOKNWNXXKK00OOkkxxdooolllllllllllllllllllllllkNKdcllllllllllllllllllllllllllllllll\n"<<
		"lllllllllllllloddool Avan  lllllllllllllllllllllllllllllkNNOollllllllllllllllllllllllllllllll\n"<<
		"llllllllllllllllllll Tribe lllllllllllllllllllllllllllllllkNWKdllllllllllllllllllllllllllllll\n"<<
		"llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllkNMXkllllllllllllllllllllllllllll\n"<<
		"lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllo0WMNkllllllllllllllllllllllllllll\n";
	SetConsoleTextAttribute(hConsole, 7);
}
void Avan_Walking()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout << "MMMMMMMMMMXd.         .lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMX:             ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMWo               lWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMWl               :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMk.             .xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMWk'           .xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMXd;.     .,oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMWKOxdxkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkkxd0MMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO''c. cNMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx;.  .oNMMMMMMMMMMMMMMMMMMM\n";
	cout << "O00KXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO.   .dWMMMMWWWWWWNNNNXXXX\n";
	cout << "lllloodxkkO00KXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWW0,    'OXXXKKKKK0000000000\n";
	cout << "lllllllllllllloodxxkO00KXNNWMMMMMMMMMMMMMMMMWWWWWWNNNNXXXXXKKKOc. ..  ,k000000000000000000\n";
	cout << "lllllllllllllllllllllllloodxxkOO0KKKXXXXXKKKKKK00000000000OOO0O:  lo. ,k000000000000000000\n";
	cout << "lllllllllllllllllllllllllllllllllllooodddxxkkkkOOOkxdlc:;'..'',.  ';. .:ooddxkkkOOOO000000\n";
	cout << "llllllllllllllllllllllllllllllllllllllllc::;,,,,'...                        .......',,,;::\n";
	cout << "lllllllllllllllllllllllllllllllcc:;,'....                                                 \n";
	cout << "llllllllllllllllllllllcc:;,,'...                                                          \n";
	cout << "llllllllllllllc:;,,'...                                                                   \n";
	cout << "lllllc::;,'....                                                                           \n";
	cout << ",''...                                                                                    \n";
	cout << "                                                                                          \n";
	cout << "                                                                                          \n";
	SetConsoleTextAttribute(hConsole, 7);
}
void Good_City()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11); // выделение голубым цветом
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMWNNWWWWWWWWNNWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMN0000000000000000000NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMN0000000000000000000NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXK00000000000000000000K0KNMMMMMMMMMMM\n";
	cout << "MMMMMMMMMMMMN0000000000000000000NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0000000000000000000kollodxxxxxxdolll\n";
	cout << "cccccccccccccccccccccccccccdO000NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0000000000000000000o.               \n";
	cout << "                           .oxddkOO0KKKKK0OOOkkkkkxkOOOOkkkkO0KK0000000000000000000o.               \n";
	cout << "                           .:llllllccc:;;,...       .......,clok0000000000000000000o.               \n";
	cout << "                           .;;,''.....                    .'clok0000000000000000000o.               \n";
	cout << "                                                        .;clllokOOOOOOOOOOOOOOOOOO0l.               \n";
	cout << "                                                        .',;:cloooooooooooooooooood:                \n";
	cout << "                                                             ...',:clllllllllllllll;                \n";
	cout << "                                                                    ..',;:cllllllll;                \n";
	cout << "                           ..                                             ...';:cll;                \n";
	cout << "                           'c;..                                                 .c;                \n";
	cout << "                           'lllc;.                                                ,;                \n";
	cout << "                           'llllllc,.                                             .;'...............\n";
	cout << "                           'lllllllll:,.                                           ,llllllllllllllll\n";
	cout << "                           'llllllllllll,.                                         .clllllllllllllll\n";
	cout << "                          .,lllllllc:,'..                                           ,lllllllllllllll\n";
	cout << "            ,c::::::::::ccclllc:,'..                                                .cllllllllllllll\n";
	cout << "            ;llllllllllllc:;'..                                                      ,llllllllllllll\n";
	cout << "            ;llllllllc;,..                                                           .clllllllllllll\n";
	cout << "           .;lllc:,..                                                                 ;lllllllllllll\n";
	cout << "::::::::::::;,'.                                                                      .cllllllllllll\n";
	cout << "llllllc:,'..                                                                           ;llllllllllll\n";
	SetConsoleTextAttribute(hConsole, 7);
}
void text_1_battle_2()
{
	cout << " - You! Go to spirit world and I promise, you will find your leader soon!\n";
	cout <<
		"He ruthlessly killed that man mercilessly killed him and set out to take revenge\n" <<
		"to Lightning Lords.";
	timer();
	Avan_Walking();
	cout << "So he went to great adventure to resque his people. He went too long, but suddenly...\n";
	timer();
}
void text1(Player acc)
{
	cout << "Those tribe on Aden was ruled by Avan, mighty " << acc.getClass() << " warrior,\n" <<
		"who was unstoppable. But there came the horde, that could rule \n"
		"lightnings.They were called ...\n";
	timer();
	Title();
	timer();
}
Player Store(Player& acc, int exp)
{
	int hel = acc.getHealth();
	int dam = acc.getDamage();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\nWelcome to my store!\nWhat do you want?\n 1: New armor\n 2: New weapons\n 3: Nothing\n";
	int what;
	cin >> what;
	if (what == 1)
	{
		cout << "Before Health=" << acc.getHealth() << endl;
		acc.setHealth(hel += 40);
		acc.setExp(exp -= 50);
		cout << "Health = " << acc.getHealth();
		timer();
	}
	else if (what == 2)
	{
		cout << "Before Damage=" << acc.getDamage() << endl;
		acc.setDamage(dam += 40);
		acc.setExp(exp -= 50);
		cout << "Damage = " << acc.getDamage();
		timer();
	}
	SetConsoleTextAttribute(hConsole, 7);
	return acc;
}
Player simple_battle(Player &acc, Enemy e_acc, int exp)
{
	string what;
	int health = acc.getHealth();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "\t\tBATTLE!\n"; int i = 0; int j = 0;
	SetConsoleTextAttribute(hConsole, 7);
	do
	{
		timer();
		if (acc.getClass() == "Sword" && i == 0) // У мечника есть способность увеличивать урон
		{
			cout << "you can encrease 2x damage! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setDamage(acc.getDamage() * 2);
				acc.setExp(exp -= 50);
				i++;
			}
		}
		else if (acc.getClass() == "Arrow" && i == 0) // Лучник может увеличивать здоровье в 2 раза
		{
			cout << "you can encrease 2x health! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setHealth(acc.getHealth() * 2);
				acc.setExp(exp -= 50);
				i++;
			}
		}
		cout << "you attack the monster for " << acc.getDamage() << " damage\n";
		e_acc.Enemy_setHealth(e_acc.Enemy_getHealth() - acc.getDamage());
		Sleep(500);
		if (acc.getClass() == "Arrow" && i != 0 && j == 0)
		{
			cout << "Health low\n";
			acc.setHealth(acc.getHealth() / 2);
			j++;
		}
		if (acc.getClass() == "Sword" && i != 0 && j == 0)
		{
			cout << "Damage low\n";
			acc.setDamage(acc.getDamage() / 2);
			j++;
		}
		if (e_acc.Enemy_getHealth() <= 0) break;
		cout << "the monster counter attacks for " << e_acc.Enemy_getDamage() << " damage\n";
		acc.setHealth(acc.getHealth() - e_acc.Enemy_getDamage());
		cout << "You can escape. y/n\n";
		cin >> what;
		if (what == "y")
		{
			cout << "\tescape\n";
			break;
		}

	} while (e_acc.Enemy_getHealth() > 0 && acc.getHealth() > 0);
	if (e_acc.Enemy_getHealth() <= 0)
	{
		cout << "\nAden defeated monster!\n";
		acc.setExp(exp += 100);
		acc.setHealth(health);
		timer();
	}
	else if (e_acc.Enemy_getHealth() > 0 && acc.getHealth() <= 0)
	{
		cout << "Aden died";
		timer();
		death(acc);
	}
	else if (e_acc.Enemy_getHealth() > 0 && acc.getHealth() > 0)
	{
		cout << "Aden escaped like coward\n";
		acc.setHealth(health);
		acc.setHealth(health += 20);
	}
	return acc;

}

Player battle(Player &acc)//Рандомное сражение без союзников
{
	system("cls");
	wcout << "\n\t\tBattle\n";
	cout << "Class= " << acc.getClass() << endl << "Damage= " << acc.getDamage() << endl << "Health= "
		<< acc.getHealth() << endl << "Experience= " << acc.getExp() << endl;
	string _1class[3] = { "Soldier", "Warrior", "Guardian" };
	srand((unsigned)time(0));
	int rnum = (rand() % 3) + 1;
	Enemy e_account(_1class[0], 0, 0); // Враг
	int hel, dam;
	e_account.Enemy_setClass(_1class[rnum-1]);
	if (rnum == 1)
	{
		hel = 110;
		dam = 20;
		e_account.Enemy_setHealth(hel);
		e_account.Enemy_setDamage(dam);
	}
	if (rnum == 2)
	{
		hel = 150;
		dam = 40;
		e_account.Enemy_setHealth(hel);
		e_account.Enemy_setDamage(dam);
	}
	if (rnum == 3)
	{
		hel = 200;
		dam = 60;
		e_account.Enemy_setHealth(hel);
		e_account.Enemy_setDamage(dam);
	}
	cout << "Enemy Class= " << e_account.Enemy_getClass() << endl << "Damage= " << e_account.Enemy_getDamage() 
		<< endl << "Health= " << e_account.Enemy_getHealth() << endl;
	timer(); string what;
	simple_battle(acc, e_account, acc.getExp());
	return acc;
}

Player battle_vs_friend(Player &acc, Friend &fr)
{
	system("cls");
	wcout << "\nBattle\n";
	Enemy e_acc("class", 0, 0);
	e_acc.Enemy_setClass(fr.Friend_getClass());
	e_acc.Enemy_setDamage(fr.Friend_getDamage());
	e_acc.Enemy_setHealth(fr.Friend_getHealth());
	cout << "Enemy Class= " << e_acc.Enemy_getClass() << endl << "Damage= " << e_acc.Enemy_getDamage()
		<< endl << "Health= " << e_acc.Enemy_getHealth() << endl;
	timer(); string what;
	simple_battle(acc, e_acc, acc.getExp());
	
	return acc;
}

Player battle_with_friend(Player &acc, Friend fr, Enemy e_acc, int exp)
{
	cout << "\nBattle\n";
	cout << "Class= " << acc.getClass() << endl << "Damage= " << acc.getDamage() << endl << "Health= "
		<< acc.getHealth() << endl << "Experience= " << acc.getExp() << endl;

	wcout << "\tYour friend's\nHealth= " << fr.Friend_getHealth() << endl << "Damage= " << fr.Friend_getDamage()<<endl;
	cout << "Enemy Class= " << e_acc.Enemy_getClass() << endl << "Damage= " << e_acc.Enemy_getDamage()
		<< endl << "Health= " << e_acc.Enemy_getHealth() << endl;
	timer(); string what;
	//const int health = acc.getHealth();
	cout << "\t\tBATTLE!\n"; int i = 0; int j = 0;
	int health = acc.getHealth();
	//int fr_health = fr.Friend_getHealth();
	do
	{
		timer();
		if (acc.getClass() == "Sword" && i == 0) // У мечника есть способность увеличивать урон
		{
			cout << "you can encrease 2x damage! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setDamage(acc.getDamage() * 2);
				fr.Friend_setDamage(fr.Friend_getDamage() * 2);
				i++;
			}
		}
		else if (acc.getClass() == "Arrow" && i == 0) // Лучник может увеличивать здоровье в 2 раза
		{
			cout << "you can encrease 2x health! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setHealth(acc.getHealth() * 2);
				fr.Friend_setHealth(fr.Friend_getHealth() * 2);
				i++;
			}
		}
		cout << "you attack the monster for " << acc.getDamage() << " damage\n";
		Sleep(500);
		cout << "your friend attack the monster for" << fr.Friend_getDamage() << " damage\n";
		e_acc.Enemy_setHealth(e_acc.Enemy_getHealth() - acc.getDamage() - fr.Friend_getDamage());
		if (i == 1 && j == 0)
		{
			if (acc.getClass() == "Sword")
			{
				cout << "Damage low\n";
				acc.setDamage(acc.getDamage() / 2);
				fr.Friend_setDamage(fr.Friend_getDamage() / 2);
				j++;
			}
			if (acc.getClass() == "Arrow")
			{
				cout << "Health low\n";
				acc.setHealth(acc.getHealth() / 2);
				fr.Friend_setHealth(fr.Friend_getHealth() / 2);
				j++;
			}
		}
		if (e_acc.Enemy_getHealth() <= 0) break;
		cout << "the monster counter attacks for " << e_acc.Enemy_getDamage()/2 << " damage\n";
		Sleep(500);
		cout << "the monster counter attacks your friend for " << e_acc.Enemy_getDamage() / 2 << " damage\n";
		acc.setHealth(acc.getHealth() - e_acc.Enemy_getDamage());
		fr.Friend_setHealth(fr.Friend_getHealth() - e_acc.Enemy_getDamage());
		Sleep(1000);
	} while (e_acc.Enemy_getHealth() > 0 && acc.getHealth() > 0);

	if (e_acc.Enemy_getHealth() <= 0)
	{
		cout << "\nAden defeated monster!\n";
		acc.setExp(exp += 100);
		acc.setHealth(health);
	}
	else death(acc);
	return acc;
}

Player test_Friend(Player &acc, Friend &f_acc)
{
	Good_City();
	Enemy e_acc(" ", 0, 0);
	e_acc.Enemy_setClass("Warrior");
	e_acc.Enemy_setDamage(80);
	e_acc.Enemy_setHealth(290);
	cout << "He was heading east on the trail of the killers. And after that he fouded giant city made of cupper and sand.\n Soon warriors arrived and its lord, very beautiful woman\n";
	int loyalty = f_acc.Friend_getLoyalty();
	cout << " - Who are you? She asked.\n 1: A friend!\n 2: Who are you?\n 3: Get lost";
	int what;
	cin >> what;
	if (what == 1)
	{
		cout<< "- I want to kill those bastards, who stole my tribe!Do you know where are they ?\n";
		timer();
		cout << "- Oh yea... Filthy Tubal. His tribe came from Gray sea and take our food. I understand your feelings";
		Store(acc, acc.getExp());
		cout << "- Shit! They're attacking again! - Mira yelled\n";
		battle_with_friend(acc, f_acc, e_acc, acc.getExp());
		if (acc.getHealth() > 0)
		{
			cout << "Mira and Avan fought with this barbarians and wiped out them. Streets were full of blood\nAfter that Mira gave to him a map\n";
			Map();
		}
			
	}
	if (what == 2)
	{
		f_acc.Friend_setLoyalty(loyalty += 1);
		cout << "- I am mistress of this kingdom, Mira! And are you man from sands?\n";
		timer();
		cout << "- Yes, I am. I want to kill those bastards, who stole my tribe! Do you know where are they?\n";
		Store(acc, acc.getExp());
		cout << "- Shit! They're attacking again! - Mira yelled\n";
		battle_with_friend(acc, f_acc, e_acc, acc.getExp());
		if (acc.getHealth() > 0)
		{
			cout << "Mira and Avan fought with this barbarians and wiped out them. Streets were full of blood\n After that Mira gave to him a map\n";
			Map();
		}
			
	}
	if (what == 3)
	{   
		
		cout << "- How dare you!\nPrepare to die!";
		f_acc.Friend_setLoyalty(loyalty -= 2);
		timer();
		battle_vs_friend(acc, f_acc);
		if (acc.getHealth() > 0)
			cout << "Avan killed Mira and escaped before Barbarians's army\n After that he found a map of Khar.\n";
		Map();
	}
	//cout << "ending";
	timer();
	return acc;
}

Player random_event(Player& acc) // случайное событие
{
	int hel = acc.getHealth();
	int dam = acc.getDamage();
	srand((unsigned)time(0));
	int rnum = (rand() % 3) + 1;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	if (rnum == 1)
	{
		cout << " You have found new armor. Health encrised\n";
		acc.setHealth(hel += 20);
		cout << "Health = " << acc.getHealth();
		timer();
	}
	else if (rnum == 2)
	{
		cout << "You have found new weapons. Damage encrised\n";
		acc.setDamage(dam += 20);
		cout << "Damage = " << acc.getDamage();
		timer();
	}
	else if (rnum == 3)
	{
		battle(acc);
	}
	SetConsoleTextAttribute(hConsole, 7);
	return acc;
}

Player Tubal_Castle(Player& acc, Friend fr)
{
	cout << "Avan walked throught warm sands. But soon sand became dirt and air turned cold\n";
	cout << " - This must be Tubal's castle, where he keep my tribe. - Avan looked up to giant scary stone building.\n";
	cout << " - Maybe you're right. - Mira agreed.\nBut soon battle begins\n";
	timer();
	Enemy e_acc("Guradian", 300, 100);
	battle_with_friend(acc, fr, e_acc, acc.getExp());
	timer();
	return acc;
}
Player Tubal_Castle_2(Player& acc, Friend fr)
{
	cout << "Soon arrived reinforsments\n";
	timer();
	Enemy e_acc_1("Soldier", 250, 120);
	battle_with_friend(acc, fr, e_acc_1, acc.getExp());
	timer();
	return acc;
}
Player Tubal_Castle_3(Player& acc, Friend fr)
{
	cout << "\n - Why you killing our people?\n - You shouldn't exist. Not every nation can live. And the mission will be fulfilled. Today or tomorrow.\n";
	timer();
	random_event(acc);
	cout << "Mira and Avan freed all prisoners from this castle. They tell about Lightning Lord's technologies and how conter them\n";
	timer();
	return acc;
}
void Speech()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	        cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	        cout << "MMMMMMMMMMMMMMMMW0xdlcld0XNMMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMMMMMMk.      ..oNMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMMMMMK;         :NMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMMMMNo         : NMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMMMMO.         .oWMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMMM0,        ; OXMMMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMWK0l        ., ; ccc:l0MMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMWO :                   .cXMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMX;                       oWMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMX;                       .xNMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMWd.                        '0MMMMMMMMMMMMMM\n";
		cout << "MMMMMMNo.                         .kWMMMMMMMMMMMMM\n";
		cout << "MMMMMMx.                           :NMMMMMMMMMMMMM\n";
		cout << "MMMMMWc.cc.                  .'    .dNMMMMMMMMMMMM\n";
		cout << "MMMMMK, ,                     oX :  ; OMMMMMMMMMMM\n";
		cout << "MMMMMk.   Mo                          cWMMMMMMMMMM\n";
		cout << "MMMMMXl.    :N                    XWc.xWMMMMMMMMMM\n";
		cout << "MMMMMMNl    '0X:                     lNMMMMMMMMMMM\n";
		cout << "MMMMMMMk.cc..                    dNl.OMMMMMMMMMMMM\n";
		cout << "MMMMMMMd; Kx.                      ; XMMMMMMMMMMMM\n";
		cout << "MMMMMMM0llx : ;                Xx., kWMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMNc;               XMXOxONMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMX :              cNMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMMx.              .dMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMWc      ':.      .kMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMN : lx.         , KMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMMK, : KX :        .xMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "MMMMMMMMMWd. : NMK;         dMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "NWMMMMMMXl.lWK;            .xMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "',:ldkOx,       oNc        .kMMMMMMMMMMMMMMMMMMMMM\n";
		cout << "l0,                        .kMMMMMMMMMMMMMMMMMMMMM\n";
		cout << ".'.                        .OMMMMMMMMMMMMMMMMMMMMM\n";
		cout << ".;                           ldxO0XWMMMMMMMMMMMMMM\n";
		cout << "..,                                ; codk0XNMMMMMM\n";
		cout << "..'                                         ;:ldkO\n";
		SetConsoleTextAttribute(hConsole, 7);
	cout << " - Comrades! We came to wipe out barbarians who slaughtered your brothers\n They are almost unstoppable, but not unbeatable.\n"
		<< "They can build machines, but all machines can be broken! With water they are useless!\n"
		<< "Lightning Lords want do kill us all. So please defend your homes and motherlands from those bastards! - Yelled Avan.\n";
	cout << " - Yes! - Answered all else\n";
}
void Pre_Battle_Talk()
{
	cout << " - I don't know how we will destroy them... - Mira said sad.\n";
	cout << " - Mira. We've been through so much. We will definetly win this battle and revenge them!\n";
	cout << " - This is like he said. 'Not every nation can live' and we want to kill them all...\n";
	cout << " - No. Not everyone. Now I understand, that I was wrong about it.\n";
	timer();
}
Player Port(Player& acc)
{
	cout << "Avan went to the port. He took boat and arrived to another coast\n";
	timer();
	random_event(acc);
	Enemy e_acc("Guardian", 100, 50);
	cout << "But Avan didn't know that port is full of Tubal's soldiers\n";
	simple_battle(acc, e_acc, acc.getExp());
	cout << "\n - Why you killing our people?\n - You shouldn't exist. Not every nation can live. And the mission will be fulfilled. Today or tomorrow.\n";
	timer();
	return acc;
}
Player Final_Battle(Player& acc)
{
	int hel = acc.getHealth();
	int dam = acc.getDamage();
	acc.setHealth(hel += 50);
	acc.setDamage(dam += 50);
	cout << "Avan arrived to Lightning Lords capital. Everything went according to plan. Avan attacked from the rear, and the main troops in the forehead.\n";
	cout << "Soon Avan meet Tubal Himself\n";
	Enemy Tubal("Leader of Lightning Lords", 1000, 100);
	timer();
	cout << "\t\t\t\tFINAL BATTLE\n";
	int i = 0; int count = 0;
	string what;
	do
	{
		count++;
		if (count == 2)
		{
			cout << " - I not even scratched! - Said Tubal\n";
			cout << " - Even if you win this fight, my friends will take down you!\n";
			timer();
		}
		timer();
		if (acc.getClass() == "Sword" && i == 0) // У мечника есть способность увеличивать урон
		{
			cout << "you can encrease 2x damage! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setDamage(acc.getDamage() * 2);
				i++;
			}
		}
		else if (acc.getClass() == "Arrow" && i == 0) // Лучник может увеличивать здоровье в 2 раза
		{
			cout << "you can encrease 2x health! y/n\n";
			cin >> what;
			if (what == "y")
			{
				acc.setHealth(acc.getHealth() * 2);
				i++;
			}
		}
		else
		{
			if (acc.getClass() == "Arrow") acc.setHealth(acc.getHealth() / 2);
			if (acc.getClass() == "Sword") acc.setDamage(acc.getDamage() / 2);
		}
		cout << "you attack the monster for " << acc.getDamage() << " damage\n";
		Tubal.Enemy_setHealth(Tubal.Enemy_getHealth() - acc.getDamage());
		Sleep(500);
		if (Tubal.Enemy_getHealth() <= 0) break;
		cout << "the monster counter attacks for " << Tubal.Enemy_getDamage() << " damage\n";
		acc.setHealth(acc.getHealth() - Tubal.Enemy_getDamage());
	} while (Tubal.Enemy_getHealth() > 0 && acc.getHealth() > 0);
	if (acc.getHealth() <= 0)
		Bad_end(acc);
	if (acc.getHealth() > 0)
		Good_end(acc);
	return acc;
}
Player After_Port_Battle(Player& acc)
{
	int what;
	Enemy e_acc("Soldier", 200, 50);
	simple_battle(acc, e_acc, acc.getExp());
	cout << "Avan saw giand dam on this bay over the Gray lake.\n And he understood that he can kill all Lightning lords and let his tribe die with them.\n"
		<< "Or he can help them, but die like hero\n";
	return acc;
}
int main() //Сценарий игры
{
	menu();
	int End = 0;
	int what; string what_tribe;
	int dam = 0;
	int hel = 0;
	int exp = 0;
	string _class[3] = { "Sword", "Arrow", "Spear" };
	cout << "Choose class:\n" <<
		"1:Sword\n2:Arrow\n3:Spear" << endl;
	cin >> what;
	Player account(_class[0], 0, 0, 0, false);
	account.setClass(_class[what - 1]);
	if (what == 1)
	{
		dam = 70;
		hel = 100;
	}
	if (what == 2)
	{
		dam = 50;
		hel = 75;
	}
	if (what == 3)
	{
		dam = 90;
		hel = 200;
	}
	while (End != 1) // цикл игры
	{
		account.setExp(0);
		account.setHealth(hel);
		account.setDamage(dam);
		int hel_2 = hel;
		int dam_2 = dam;
		system("cls");
		menu();
		begin();// Начало игры
		text1(account);
		text_1_battle_1();
		battle(account); // Первое сражение
		if (account.getHealth() <= 0)
			continue;
		if (account.getExp() > 0)
			text_1_battle_2();
		account.setDamage(dam_2 += 10);
		account.setHealth(hel_2 += 30);
		random_event(account);
		if (account.getHealth() <= 0)
			continue;
		// meeting friend
		string name = "Mira";
		Friend f_acc(" ", 0, 0, 0);
		f_acc.Friend_setClass(name);
		f_acc.Friend_setDamage(100);
		f_acc.Friend_setHealth(150);
		f_acc.Friend_setLoyalty(1);
		test_Friend(account, f_acc); // Встреча с союзником
		if (account.getHealth() <= 0)
			continue;
		for (int i = 0; i < 5; i++)
		{
			random_event(account);
			if (account.getHealth() <= 0)
				continue;
		}
			
		if (f_acc.Friend_getLoyalty() >= 1)
		{
			Tubal_Castle(account, f_acc);
			if (account.getHealth() <= 0)
				continue;
			Tubal_Castle_2(account, f_acc);
			if (account.getHealth() <= 0)
				continue;
			Tubal_Castle_3(account, f_acc);
			Pre_Battle_Talk();
			Speech();
			Store(account, account.getExp());
			Final_Battle(account);
			End = 1;
		}
		else if (f_acc.Friend_getLoyalty() < 0)
		{
			Port(account);
			if (account.getHealth() <= 0)
				continue;
			After_Port_Battle(account);
			cout << " 1:Kill Lightning Lords\n 2:Save tribe\n";
			cin >> what;
			if (what == 1)
			{
				Bad_end(account);
				End = 1;
			}
				
			if (what == 2)
			{
				Speech();
				Final_Battle(account);
				End = 1;
			}
				
		}
		
		timer();
	}
	End_Titles(account);
	// Конец игры
	
	
}
