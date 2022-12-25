#pragma once
#include <iostream> // Заголовочный файл врага
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;
class Friend
{
private:
	string name;
	int FrDamage;
	int FrHealth;
	int Loyalty;
public:
	Friend(string, int, int, int);
	~Friend();
	string Friend_getClass();
	void Friend_setClass(string newClass);
	int Friend_getDamage();
	void Friend_setDamage(int newDamage);
	int Friend_getHealth();
	void Friend_setHealth(int newHealth);
	int Friend_getLoyalty();
	void Friend_setLoyalty(int newLoyalty);

};