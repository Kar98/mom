// consoleapp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "Resources.h"
#include "Civilisation.h"

using namespace std;


int main()
{
	int tmp;
	bool run = true;
	std::string resp;
	
	Civilisation mongol(new string ("Germany"), new string("Kaiser"));
	Civilisation france(new string("France"), new string("Napolean"));

	Resources* gold = new Resources(new string("Gold"), true, 100);
	Resources* silver = new Resources(new string("Silver"), true, 60);
	Resources* salt = new Resources(new string("Salt"), false, 20);
	Resources* dyes = new Resources(new string("Dyes"), true, 50);




	while (run) 
	{
		cin >> resp;

	}


	

	cin >> tmp;
	return 0;
}
