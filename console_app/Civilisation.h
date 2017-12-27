#pragma once
#include <string>
#include "Resources.h"

class Civilisation {
	int width, height;




public:
	Civilisation(std::string* name, std::string* leader);
	Civilisation(char* name, char* leader);
	std::string ReturnName();

	void AddResource(Resources* resourceToAdd);

};
