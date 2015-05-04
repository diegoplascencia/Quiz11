#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

void readNumbersFromFile(string filename){
	ifstream infile (filename);
	string line;
	int total = 0;
	int lineas = 0;
	vector <int> numeros;
	while(1){
  	getline (infile, line);
		  if (infile.eof()) break;
		  lineas++;
		  int l = atoi(line.c_str());
	  	total = total + l;
	  	numeros.push_back(l);}
	  	
	cout << "El total de valores es: " << total << endl;
	cout << "El numero de valores es: " << lineas << endl;
	cout << "El promedio es: " << total/lineas << endl;
	}

int main (){
	readNumbersFromFile("random_numbers.txt");
return 0;}
