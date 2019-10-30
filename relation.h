#pragma once
#ifndef RELATION_H
#define RELATION_H

#include "database.h"
#include <set>

using namespace std;

class relation {

	public:

	private:
		string name;
		vector <string> attrNameVect;
		set <tuple> tupleVect;

};
#endif


