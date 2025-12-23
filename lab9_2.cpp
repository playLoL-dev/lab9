#include<iostream>
using namespace std;

void printO( double a, double b )
{
	if(a == 0 || b <= 0)
	{
   	cout << "Invalid input";
	}
	else
	{
   		int i = 0;
   			while (i < a)
   			{
				int j = 0;
   				while (j < b)
   				{
   					cout << "O";
   					j++;
   				}
				cout << endl;
   				i++;
			}
	}
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
