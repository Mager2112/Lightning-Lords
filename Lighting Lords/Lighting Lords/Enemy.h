/*
Copyright Mager 2022
All rights reserved lmao
*/
#pragma once
#include <iostream>
#include "windows.h"
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;
class Enemy
{
private:
	string EClass;
	int EDamage;
	int EHealth;
public:
	Enemy(string, int, int);
	~Enemy();
	string Enemy_getClass();
	void Enemy_setClass(string newClass);
	int Enemy_getDamage();
	void Enemy_setDamage(int newDamage);
	int Enemy_getHealth();
	void Enemy_setHealth(int newHealth);

};
