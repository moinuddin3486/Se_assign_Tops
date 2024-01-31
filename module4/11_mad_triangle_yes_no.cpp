 
#include <iostream>
using namespace std; 


void checkTriangle(int x, int y, int z)
{
	
		if (x == y && y == z)
		cout << "Equilateral Triangle";

	
	else if (x == y || y == z || z == x)
		cout << "Isosceles Triangle";

	
	else
		cout << "Scalene Triangle";
}


int main()
{
	
	
	int x = 8, y = 7, z = 9;
	
	
	checkTriangle(x, y, z);
}


