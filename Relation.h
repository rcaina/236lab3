#pragma once
#ifndef RELATION_H
#define RELATION_H

#include <set>
#include "Tuple.h"
#include "Scheme.h"

using namespace std;

class Relation {

	public:
		Relation(string name, Scheme schemes);
		Relation select1(Relation& relation);
		Relation select2(Relation& relation);
		Relation project(Relation& relation);
		Relation rename(Relation& relation);

	private:
		string name;
		vector <string> attrNameVect;
		set <Tuple> tupleVect;

};
#endif


