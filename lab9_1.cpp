#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan , interest , payment ;
	int i = 0;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	double interest_amount = loan * interest / 100;
	double total = loan + interest_amount;
	double NewBalance = total - payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 

	while (NewBalance >= 0)
	{
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << loan ;
	cout << setw(13) << left << interest_amount;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	i++;
	loan = NewBalance;
	interest_amount = loan * interest / 100;
	total = loan + interest_amount;
	NewBalance = total - payment;
	}
	if (NewBalance < 0)
		{
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << loan ;
		cout << setw(13) << left << interest_amount;
		cout << setw(13) << left << total;
		cout << setw(13) << left << total;
		cout << setw(13) << left << 0.00;
		cout << "\n";
		}
	return 0;
}