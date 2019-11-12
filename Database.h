#pragma once
#ifndef DATABASE_H
#define DATABASE_H

#include "Interpreter.h"
#include "Relation.h"
#include <map>

using namespace std;

class Database {

	public:

	private:
		
		map <string, Relation> relationMap;

};
#endif


