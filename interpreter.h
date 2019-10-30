#pragma once
#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>
#include <iostream>
#include <vector>
#include "database.h"
#include "parser.h"

using namespace std;

//Process schemes into relations

class interpreter {

	public:
		interpreter(){}
		~interpreter(){}
		
		void setSchemeVect(vector <predicate> schemes){

			schemeVect = schemes;
		}

		void setFactVect(vector <predicate> facts){

                        factVect = facts;
                }

		void setQueryVect(vector <predicate> queries){

                        queryVect = queries;
                }

	//	evaluatePredicate(){}  (will need this for lab 4)

	private:

		vector <predicate> schemeVect;
		vector <predicate> factVect;
		vector <predicate> queryVect;

};
#endif


