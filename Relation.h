#pragma once
#ifndef RELATION_H
#define RELATION_H

#include <set>
#include "Tuple.h"
#include "Scheme.h"

using namespace std;

class Relation {

	public:
		Relation(string Sname, string Nschemes);
		Relation select1(string val, int column);
		Relation select2(int column1, int column2);
		Relation project(vector <int>);
		Relation rename(Scheme header);
		void toString();
		void addTuple(Tuple tup);
		void printTuple();

	private:
		string name;
		string attrName;
		set <Tuple> tupleVect;

};
#endif


