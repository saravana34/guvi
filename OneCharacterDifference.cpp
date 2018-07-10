using namespace std;
#include<iostream>
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int count=0,flag=0;
	if(str1.length()!=str2.length())	
		return 0;
	else
	{
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]!=str2[i])
			{
				count++;
				if(count>1)
				{
					flag=1;
					break;
				}
			}
		}
	}
	if(flag==1)
		cout<<"Not Same";
	else
		cout<<"Same";
	return 0;
}
