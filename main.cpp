/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	int N;
	float price;
	float totalcost=0;
	int shipping_fee=140;
	cout<<"Enter number of products";
	cin>>N;
	for (int i=1; i<=N; i++) {
		cout<<"Enter price of product:"<<i<<endl;
		cin>>price;
		totalcost+=price;
	}
	if (totalcost < 2000) {
		totalcost+=shipping_fee;
		cout<<"Shipping fee is:"<<shipping_fee<<endl;
	} else {
		cout<<"Free shipping(cost>= 2000)"<<endl;
	}
	cout<<"Number of items:"<<N<<endl;
	cout<<"Final total cost:"<<totalcost<<endl;

	return 0;
}
