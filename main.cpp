#include <iostream>
#include<vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include "COW.h"
using namespace std;

int main()
{
	int *mass = new int[100000];
	 int weight=0;
	 int variable = 0;
	 ifstream inFile("file.in.txt", ios::in); 
	 if (!inFile) {
		
		 cerr << "Failed opening" << endl; 
		 
		 exit(1);
		
	}

	  while (inFile >> weight) {
		  
		  mass[variable] = weight;
		  variable++;
			  
		  }
	
	 COW IN(mass,mass[0]);
			 
	  
	 
	  
	   
	  return 0;

	 
}
