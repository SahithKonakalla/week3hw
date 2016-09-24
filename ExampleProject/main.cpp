#include <iostream>
#include "Parser.h"
using namespace std;

/**
	Example Usage of Pointers. You Must Rewrite this method so that the pyramid is printed as such:
      *
     ***
    *****
   *******
  *********
 ***********
*************

**/
void pyramid(int levels, string* output){
	for (int i = 0; i < levels; i++){
		for (int j = i; j < levels; j++){
			(*output)+="*";
		}
		(*output)+="\n";
	}
}

int main(int argc, char *argv[]){
	int levels = argv[1];
	string py = "";
	string* pyLoc = &py;
	pyramid(levels, pyLoc);
	cout << "As Promised:\n\n" << *pyLoc << "\n\n";

	cout << "This next part must be done through cmdline args, this is just to prove that the classes i wrote work";
	cout << endl << endl;
	Parser p;
	cout<<"Cat Command: " << p.getCommandRef("cat") << endl;
	cout<<"nano Command: " << p.getCommandRef("nano") << endl;
	cout<<"ls Command: " << p.getCommandRef("ls") << endl;
	cout<<"rm Command: " << p.getCommandRef("rm") << endl;
	cout<<"cd Command: " << p.getCommandRef("cd") << endl;
	if (argv[1] == "nano") {
		return "A terminal text editor";
	}
	if (argv[1] == "ls") {
		return "Lists everything in the current directory";
	}
	if (argv[1] == "cd") {
		return "Change directory";
	}
	if (argv[1] == "rm") {
		return "Remove file";
	}
	return 0;
}
