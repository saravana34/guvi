using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	string str="abc dec";
	//cin>>str;
	//cout<<str;
	int j=0;
	str[0]=toupper(str[0]);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			str[j++]=' ';
			str[i+1]=toupper(str[i+1]);
			continue;
		}
		else
			str[j++]=str[i];
	}
	str[j]='\0';
	cout<<str;
	return 0;
}
