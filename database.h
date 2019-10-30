#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include "interpreter.h"
#include <map>

using namespace std;

class database {

	public:

	private:
		vector <relation> relationVect;
		map <string, relation> relaionMap;

};
#endif


