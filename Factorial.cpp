using namespace std;
#include<iostream>
int main()
{
	int n;
	cin>>n;
	long long int fact=1;
	if(n>20 || n<=0)
	{
		cout<<"Factorials for less than 20";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		cout<<fact;	
	}
	return 0;
}
