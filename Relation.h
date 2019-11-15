#pragma once
#ifndef RELATION_H
#define RELATION_H

#include <set>
#include "Tuple.h"
#include "Scheme.h"

using namespace std;

class Relation {

	public:
		Relation(string name, Scheme scheme);
		Relation select1(string val, int column);
		Relation select2(int column1, int column2);
		Relation project(vector <int>);
		
		string getName();
		Scheme getScheme();
		
		Relation rename(Scheme header);
		string toString();
		void addTuple(Tuple tup);
		int getSize();

	private:
		string name;
		Scheme scheme;
		set <Tuple> tupleVect;

};
#endif


