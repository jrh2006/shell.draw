#include "help.h"
#include <cstdio>
#include <iostream>
void help(size_t l){
	printf("Draw Help\n\t");
	printf("list <%d> , You can input: \n\t\t$draw -h %%num of list%% \n***\n",l);
	switch(l){
		1:{
			std::cout << "-sys " << "--Catch System Information." << endl;
		}
	}
	std::cout << "\n***\n";
}
