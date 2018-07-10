using namespace std;
#include<iostream>
int main()
{
	int num;
	cin>>num;
	int temp=0;
	int x;
	while(num>0)
	{
		x=num%10;
		/*if(temp>INT_MAX/10 ||(temp==INT_MAX/10)&&(x>7))
			return 0;
		if(temp<INT_MIN/10||(temp==INT_MIN/10)&&(x<-8))
			return 0;*/
		temp=temp*10+x;
		num=num/10;
	}
	cout<<temp;
	return 0;
}
