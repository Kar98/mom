#include "stdafx.h"
#include "Resources.h"

std::string* name;
bool luxury;
int price;

Resources::Resources() {}

Resources::Resources(std::string* _name, bool _luxury, int _price)
{
	name = _name;
	luxury = _luxury;
	price = _price;
}