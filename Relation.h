#pragma once
#ifndef RELATION_H
#define RELATION_H

#include <set>
#include "Tuple.h"
#include "Scheme.h"

using namespace std;

class Relation {

	public:
		Relation(string Sname, Vector<String> Nschemes);
		Relation select1(string val, int column);
		Relation select2(int column1, int column2);
		Relation project(vector <int>);
		Relation rename(Scheme header);
		void toString();

	private:
		string name;
		Scheme attrNameVect;
		set <Tuple> tupleVect;

};
#endif


