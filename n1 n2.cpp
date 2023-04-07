#include <iostream>
using namespace std;
int main()
{
	float n1,n2,sum,difference,product,quotient;
	cout<<"enter first number>>";
	cin>>n1;
	cout<<"enter second number>>";
	cin>>n2;
	sum=n1+n2;
	difference=n1-n2;
	product=n1*n2;
	quotient=n1/n2;
	cout<<"your sum:"<<sum<<"\n";
	cout<<"your difference:"<<difference<<"\n";
	cout<<"your product:"<<product<<"\n";
	cout<<"your quotient:"<<quotient<<"\n"<<endl;
	return 0;
}