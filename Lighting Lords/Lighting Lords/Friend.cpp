/*
Copyright Mager 2022
All rights reserved lmao
*/
#include <iostream>
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include "Friend.h"
Friend::Friend(string Class, int Health, int Damage, int Loyalty)
{
	//cout << "Enemy appeared\n";
	Friend_setClass(Class);
	Friend_setHealth(Health);
	Friend_setDamage(Damage);
}
Friend::~Friend()
{
	//cout << "Enemy defeated\n";
}
string Friend::Friend_getClass()
{
	return name;
}
void Friend::Friend_setClass(string newname)
{
	name = newname;
}
int Friend::Friend_getDamage()
{
	return FrDamage;
}
void Friend::Friend_setDamage(int newDamage)
{
	FrDamage = newDamage;
}
int Friend::Friend_getHealth()
{
	return FrHealth;
}
void Friend::Friend_setHealth(int newHealth)
{
	FrHealth = newHealth;
}
int Friend::Friend_getLoyalty()
{
	return Loyalty;
}
void Friend::Friend_setLoyalty(int newLoyalty)
{
	Loyalty = newLoyalty;
}
