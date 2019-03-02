#include "index.h" /*Program Head File.*/
#include <iostream>
using namespace std;
extern help(size_t num);
int main(int argv, char **args){
	if(argv < 2)	/*Do not have args!*/
		help(1);
	return 0;
}
