#include<iostream>
using namespace std;

int main()
{
	int number, maximum, evenSum = 0, oddSum = 0;
	
	cout << "\nPlease Enter the Maximum Limit for Even & Odd Numbers  =  ";
	cin >> maximum;	
	
	for(number = 1; number <= maximum; number++)
	{
  		if ( number % 2 == 0 ) 
		{
			evenSum = evenSum + number;
		}
		else
		{
			oddSum = oddSum + number;
		}
	}
	
	cout << "\nThe Sum of All Even Numbers upto " << maximum << " = " << evenSum;
	cout << "\nThe Sum of All Odd Numbers upto " << maximum << "  = " << oddSum;
	
 	return 0;
}
