/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int N;
	float totalamount;
	float monthlyPayment;
	float principle;
	int months;
	float monthly_rate=0.06;
	cout<<"Enter number of customers:";
	cin>>N;
	for ( int i=1; i<=N; i++){
        cout<<"Customer"<<i<<endl;
	cout<<"Enter principle amount:";
	cin>>principle;
	cout<<"Enter number of months:";
	cin>>months;
	totalamount=principle*(1+monthly_rate*months);
	monthlyPayment=totalamount / months;
	cout<<"Approximate monthlyPayment:"<<monthlyPayment<<endl;
	if (monthlyPayment > 25000) {
	cout<<"Warning:monthlyPayment exceeds 25000!"<<endl;
	}
   }
    return 0;
   }




