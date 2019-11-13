#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
#include "Relation.h"

using namespace std;
// fill in details

Relation::Relation(string Sname, Vector<String>String Nschemes) {

	name = Sname;
	attrNameVect = Nschemes;

}

Relation Relation::select1(string val, int column){

	return 0;
}

Relation Relation::select2(int column1, int column2){

	return 0;
}

Relation Relation::project(vector <int>){
	
	return 0;
}

Relation Relation::rename(Scheme header){

	return 0;
}

