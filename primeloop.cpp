#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	int i,j,r,s,s1,k,k2,t,t1,c=0,c1=0;
	cin>>n;
	k=log10(n);
	if((k%2)==0)
		k2=pow(10,k)+1;
    else
    	k2=pow(10,k);
	cout<<k<<endl;
	cout<<k2<<endl;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c+=1;
		}
	}
	if(c==2)
	{
		c=0;
		cout<<n<<" is a prime number"<<endl;
		for(j=1;j<=k;j++)
		{
			r=n%10;
			s=(r*k2)+n/10;
			for(i=1;i<=s;i++)
				{
					if(s%i==0)
						{
							c+=1;
						}
				}
			if(c==2)
				{
					cout<<s<<" is also prime number"<<endl;
					c1+=1;
					if(c1==k)
						cout<<"all its numbers are satisfied";
				}
			else
				{
					cout<<s<<" is not a prime number"<<endl;
				}
			n=s;
			c=0;
	    }
	}
	else
	{
		cout<<"it is not a prime number"<<endl;
	}
}