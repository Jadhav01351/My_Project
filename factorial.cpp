#include<iostream>
using namespace std;


int factorial(int n)
{
	if(n==1||n==0)//base case
	{
		return 1;
	}
	
	int resultfact=factorial(n-1);
	int result=n*resultfact;
	
	return result;
}
int main()
{
	int n;
	cin>>n;
	
	cout<<factorial(n);
}
