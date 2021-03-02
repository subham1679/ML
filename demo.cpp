#include <iostream> 
#include <math.h> 
using namespace std; 

bool isPower(int x, int y) 
{ 
	// logarithm function to calculate value 
	int res1 = log(y) / log(x); 
	double res2 = log(y) / log(x); 

	return (res1 == res2); 
} 

int main() 
{ 
	cout << isPower(27, 729) << endl; 
	return 0; 
} 
