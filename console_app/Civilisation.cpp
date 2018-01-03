#include "stdafx.h"
#include "Civilisation.h"
#include <sstream>
#include <vector>

using namespace std;
struct res {
	Resources* resource;
	int number = 0; //how many there are.
};

string _name;
string _leader;
int _score;
size_t resSize = 10;



std::vector<res> _resources;


Civilisation::Civilisation(std::string * name, std::string * leader)
{
	_name = *name;
	_leader = *leader;
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

void Civilisation::AddResource(Resources * resourceToAdd)
{
	res* r = new res;
	r->resource = resourceToAdd;
	r->number += 1;
	_resources.push_back(*r);
	
}
