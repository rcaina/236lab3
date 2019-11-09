#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include "Interpreter.h"
#include "Relation.h"
#include <map>

using namespace std;

class database {

	public:

	private:
		vector <Relation> relationVect;
		map <string, Relation> relationMap;

};
#endif


