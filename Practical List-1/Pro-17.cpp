#include<iostream>
using namespace std;
int fib(int );
int main()
{
	int n,i;
	cout<<"I am Shyamal Bharadava "<<endl;
	cout<<"En_no    220130318069 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<fib(i);
	}
	return 0;
}
int fib(int n)
{
	if(n<=1)
		return n;
		return fib(n-1) + fib(n-2);
}
