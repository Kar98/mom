#include "stdafx.h"
#include "Resources.h"
#include <sstream>

using namespace std;

enum Resource { GOLD, SALT, CATTLE, SHEEP, FISH, SHELLFISH, SUGAR, TEA, COFFEE };

class Resources
{
	string name;
	bool luxury;
	int currentPrice;
	int basePrice;

	Resources::Resources(Resource r) {
		SetResource(r);
	}

public:
	void SetResource(Resource r) {
		switch (r) {
		case GOLD:
			name = "Gold";
			luxury = true;
			basePrice = 100;
			currentPrice = basePrice;
			break;
		case SALT:
			name = "Salt";
			luxury = false;
			basePrice = 20;
			currentPrice = basePrice;
		}
	};
	
	


};