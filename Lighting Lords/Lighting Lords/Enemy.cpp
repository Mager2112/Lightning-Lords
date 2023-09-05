/*
Copyright Mager 2022
All rights reserved lmao
*/
#include <iostream> 
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include "Enemy.h"
Enemy::Enemy(string Class, int Health, int Damage)
{
	//cout << "Enemy appeared\n";
	Enemy_setClass(Class);
	Enemy_setHealth(Health);
	Enemy_setDamage(Damage);
}
Enemy::~Enemy()
{
	//cout << "Enemy defeated\n";
}
string Enemy::Enemy_getClass()
{
	return EClass;
}
void Enemy::Enemy_setClass(string newClass)
{
	EClass = newClass;
}
int Enemy::Enemy_getDamage()
{
	return EDamage;
}
void Enemy::Enemy_setDamage(int newDamage)
{
	EDamage = newDamage;
}
int Enemy::Enemy_getHealth()
{
	return EHealth;
}
void Enemy::Enemy_setHealth(int newHealth)
{
	EHealth = newHealth;
}
