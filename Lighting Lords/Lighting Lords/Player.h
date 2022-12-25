#pragma once
#include <iostream>
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;
class Player
{
public:
	string Class;
	int Damage;
	int Health;
	int Exp;
	bool Tribe;
	Player(string, int, int, int, bool); // Конструктор
	~Player();
	string getClass() const;
	void setClass(string newClass);
	int getDamage();
	void setDamage(int newDamage);
	int getHealth();
	void setHealth(int newHealth);
	int getExp();
	void setExp(int newExp);
	bool getTribe();
	void setTribe(int newTribe);

};
