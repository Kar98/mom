#include "stdafx.h"
#include "Resources.h"
/*
std::string* name;
bool luxury;
int price;*/

Resources::Resources() {}

Resources::Resources(std::string* name, bool luxury, int price)
{
	_name = name;
	_luxury = luxury;
	_price = price;
}