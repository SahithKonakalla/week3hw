#include "Parser.h"
//we dont need to type 'using namespace std;' since that was defined in Parser.h
Parser::Parser() {

}

string Parser::getCommandRef(string cmd){
	if (cmd == "nano") {
		return "A terminal text editor";
	}
	if (cmd == "ls") {
		return "Lists everything in the current directory";
	}
	if (cmd == "cd") {
		return "Change directory";
	}
	if (cmd == "rm") {
		return "Remove file";
	}
	if (cmd == "cat"){
		return "Cats are cool";
	}
	return "reference";
}
//we dont need to redefine the class here since we already did that in
