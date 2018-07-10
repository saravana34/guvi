using namespace std;
#include<iostream>
#include<bits/stdc++.h>
int iosmorphic(string str1, string str2)
{
	bool visited[256]={false};
	int map[256];
	memset(map,-1,sizeof(map));
	if(str1.length()!=str2.length())
		return 0;
	for(int i=0;i<str1.length();i++)
	{
		if(map[str1[i]]==-1)
		{
			if(visited [str2[i]]==true)
				return 0;
			visited[str2[i]]=true;
			map[str1[i]]=str2[i];
		}
		else if(map[str1[i]]!=str2[i])
			return 0;
	}
	return 1;
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int res=iosmorphic(str1,str2);
	if(res==1)
		cout<<"Isomorphic";
	else
		cout<<"Not Isomorphic";
	return 0;
}
