/*
Copyright Mager 2022
All rights reserved lmao
*/
#include <iostream>
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include "Player.h"
using namespace std;
Player::Player(string Class, int Damage, int Health, int Exp, bool Tribe)
{
	setClass(Class);
	setDamage(Damage);
	setHealth(Health);
	setExp(Exp);
	setTribe(Tribe);
	//cout << "Begin of story\n";
}
Player::~Player()
{
	//cout << "end of story\n";
}
string Player::getClass() const
{
	return Class;
}
void Player::setClass(string newClass)
{
	Class = newClass;
}
int Player::getDamage()
{
	return Damage;
}
void Player::setDamage(int newDamage)
{
	Damage = newDamage;
}
int Player::getHealth()
{
	return Health;
}
void Player::setHealth(int newHealth)
{
	Health = newHealth;
}
int Player::getExp()
{
	return Exp;
}
void Player::setExp(int newExp)
{
	Exp = newExp;
}
bool Player::getTribe()
{
	return Tribe;
}
void Player::setTribe(int newTribe)
{
	Tribe = newTribe;
}
