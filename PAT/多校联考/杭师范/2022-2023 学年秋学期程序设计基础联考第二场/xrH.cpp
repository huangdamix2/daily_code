#include <iostream>
using namespace std; 
int ans[1100];
unsigned long long n,mp[110],x,k;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	    for(int i=0;i<=9;i++)
		{
			cin >> mp[i];
		}
		cin >> x >> k;
		for(int j=1;j<=k;j++)
		{
			long long pre=x,now=0,a[200]={0},tot=0;
			while(pre)
			{
				a[++tot]=pre%10;
				pre/=10;
			}
			for(long long i=tot;i>=1;i--)
			{
				now=now*10+mp[a[i]];
			}
			// printf("%d\n", now);
			x=now+x;
		}
		if (t) cout << "\n";
		// cout<<x<<endl;	
	}
    return 0; 
}