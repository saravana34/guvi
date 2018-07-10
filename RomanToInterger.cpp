using namespace std;
#include<iostream>
int value(char s)
{
	
	switch(s)
	{
		case 'I': return 1;
				  break;
		case 'V': return 5;
				  break;
		case 'X': return 10;
				  break;
		case 'L': return 50;
				  break;
		case 'C': return 100;
				  break;
		case 'D': return 500;
				  break;
		case 'M': return 1000;
				  break;
		default : return 0;
	}
	return 0;
}
int main()
{
	string str;
	cin>>str;
	int val1=0,val2=0,res=0;
	for(int i=0;i<str.length();i++)
	{
		val1=value(str[i]);
		if(i+1<str.length())
		{
			val2=value(str[i+1]);
			if(val1>val2)
			{
				res=res+val1;
			}
			else
			{
				res=res+val2-val1;
				i++;
			}
		}
		else
		{
			res=res+val1;
		}
	}
	cout<<res;
	return 0;
}


/*if(curVal>=val)
		{
			curVal+=val;
			//sum=sum+curVal;
		}
		else
		{
			//val-=curVal;
			curVal-=val;
			//curVal=val;
			//sum=sum+val;
		}
		cout<<curVal<<"\t";*/
