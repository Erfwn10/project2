#include <iostream>
using namespace std;
int main()
{
	float temp_f,temp_c;
	cout<<"enter temp of faranhiet>>";
	cin>>temp_f;	
	temp_c=(temp_f*5.9)-32;
	cout<<"celsius:"<<temp_c<<endl;
	return 0; 
}