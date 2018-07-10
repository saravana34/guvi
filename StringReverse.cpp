using namespace std;
#include<iostream>
int main()
{
	string str;
	cin>>str;
	/**** Method 1 *****/
	string tempStr;
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	do
	{
		tempStr+=str[--i];
	}while(i>=0);
	cout<<"\n"<<tempStr;
	
	/*******Method 2 *****/
	/*int len=str.length();
	for(int i=0;i<len/2;i++)
	{
		swap(str[i],str[len-i-1]);
	}
	cout<<str;
	return 0;
}
