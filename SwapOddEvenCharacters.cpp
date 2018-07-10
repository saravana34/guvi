using namespace std;
#include<iostream>
int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(i+1<str.length())
		{
			swap(str[i],str[i+1]);
			i++;
		}
	}
	cout<<str;
	return 0;
}
