#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int check_banana (string){
int string1, string2;
	string data = "Banana"; 
 	transform(data.begin(), data.end(), data.begin(), ::tolower);
	tring string1 ("There are two bananas in this haystack with bananas.");
  	string string2 ("Banana");
  	size_t found = string1.find(string2);
  if (found!=std::string::npos)
   	cout << "'banana' found at: " << found << endl;
return 0;}
