#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
  	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0 ;i<n ;i++)
  		cin>>a[i];
  	sort(a,a+n);
  	int ans = 0;
  	int i;
  	if(a[0]>n)
    	cout<<n<<endl;
	else
	{
		for(i=n-1 ;i>=0 ;i--)
		{
			if(a[i]<=n-i)
			{
				ans = n-i-1;
  				break;
	  		}
		}
		cout<<ans<<endl;
	}
return 0;
}
