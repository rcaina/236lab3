#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
#include "Relation.h"

using namespace std;
// fill in details

Relation::Relation(string Sname, Scheme Nschemes) {

	name = Sname;
	attrName = Nschemes;

}

string Relation::getName(){

	return name;
}
/*
Scheme Relation::getAttributes(){

	return return attrName;
}*/

Relation Relation::select1(string val, int column){

	return this;
}

Relation Relation::select2(int column1, int column2){

	return this;
}

Relation Relation::project(vector <int>){
	
	return this;
}

Relation Relation::rename(Scheme header){

	return this;
}

void Relation::addTuple(Tuple tup){

	tupleVect.insert(tup);
	
	return;	
}

void Relation::printTuple(){
	
	for(Tuple tup: tupleVect){

//                cout << tup.toString();
        }
}

void Relation::toString(){

		cout << name << "=";
		//for(Tuple tup: tupleVect){

		//	cout << tup << "\n";
		//}	

}


