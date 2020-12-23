#pragma once
#include <iostream>
#include <string>
#include<iomanip>
#include<vector>
using namespace std;

class Weapon
{
private:
	bool owned = false;
	int price,maxUse,damage;
	string name;
	string weaponSound;
	string weaponMagic;
public:

	Weapon()
	{
		setName("");
	}
	Weapon(string name, string sound, int price, int max,int damage)
	{
		setName(name);
		setSound(sound);
		setPrice(price);
		setMaxUse(max);
		setDamage(damage);
	}
	void setName(string wName)
	{
		name = wName;
	}
	void setSound(string wSound)
	{
		weaponSound = wSound;
	}
	void setPrice(int wPrice)
	{
		price = wPrice;
	}
	void setowned()
	{
		owned = true;
	}
	void setMaxUse(int max)
	{
		maxUse = max;
	}
	void setDamage(int dmg)
	{
		damage = dmg;
	}
	string getName()
	{
		return  name;
	}
	string getSound()
	{
		return weaponSound;
	}
	int getPrice()
	{
		return price;
	}
	int getMaxUse()
	{
		return maxUse;
	}
	int getDamage()
	{
		return damage;
	}
	bool getowned()
	{
		return owned;
	}

};