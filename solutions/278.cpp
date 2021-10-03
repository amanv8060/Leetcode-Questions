#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int t1=0,t2=1,t3;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<t1<<" ";
			continue;
		}
		if(i==2)
		{
			cout<<t2<<" ";
			continue;
		}
		else
		{
			t3=t1+t2;
			cout<<t3<<" ";
			t1=t2;
			t2=t3;
					}
	}
}

