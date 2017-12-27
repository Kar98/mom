#include "stdafx.h"
#include "Civilisation.h"
#include <sstream>
#include "Resources.h"

using namespace std;

struct res {
	Resources* resource;
	int number;
};

string _name;
string _leader;
int _score;
res* _resources;
int* foo;

Civilisation::Civilisation(std::string * name, std::string * leader)
{
	_name = *name;
	_leader = *leader;
	foo = new int[5];
	res = new Resources[2];
}

Civilisation::Civilisation(char * name, char * leader)
{
	_name = *name;
	_leader = *leader;
}

std::string Civilisation::ReturnName()
{
	return _name;
}

void AddResource(Resources* resourceToAdd) 
{
	_resources[0]->resource = resourceToAdd;
	_resources[0]->number += _resources[0]->number;

}
