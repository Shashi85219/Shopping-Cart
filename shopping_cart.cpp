// ONLINE SHOPPING CART    //

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

	float totamt;
	class item
	{
		private:
			char name[25];
			int qty;
			float rate,amount;
			int total;
		public:
			void getdata()
			{
				cout<<"Enter the product name :";
				cin>>name;
				cout<<"\nEnter the rate :";
				cin>>rate;
				cout<<"\n Enter the quantity :";
				cin>>qty;
			}
			void printdata()
			{
				cout<<setw(12)<<name;
				cout<<setw(9)<<qty;
				cout<<setw(9)<<rate;
				amount=rate*qty;
				total=amount+totamt;
				cout<<setw(8)<<amount<<endl;
			}
	};
	
	
int main()
{

item shop[10];
char ch='y';
int n=0,i;
while(ch=='y' || ch=='y')
{
	shop[n].getdata();
	n++;
	cout<<"do you want to continouew y/n"<<endl;
	cin>>ch;
}
	cout<<"\t *******************"<<endl;
	cout<<"\t shopping List"<<endl;
	cout<<"\t **********************************"<<endl;
	cout<<"\t name - quantity - rate- amount\n";
	for(i=0; i<n; i++)
	{
		shop[i].printdata();
		cout<<"\t ------------------------"<<endl;
		cout<<"\t total bill :"<<totamt;
	}
	
	return 0;
}