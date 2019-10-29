#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>
#include "Lexer.h"
#include "Tokens.h"
#include "parser.h"

using namespace std;


int main(int argc, char* argv[]) {

	Lexer activate(argv[1]);
        
	parser parsing;
	parsing.setvector(activate.getVector());
  	parsing.startParser();
	
	return 0;
}
