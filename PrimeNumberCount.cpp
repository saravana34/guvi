using namespace std;
#include<iostream>
int isPrime(int n)
{
	if(n<=1)
		return 0;
	else if(n<=3)
		return 1;
	else if(n%2==0 || n%3==0)
		return 0;
	else
	{
		for(int i=5;i*i<=n;i=i+6)
		{
			if(n%i==0 || n%(i+2)==0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int l,r,count=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		int prime=isPrime(i);
		if(prime==1)
			count++;
	}
	cout<<count;
	return 0;
}
