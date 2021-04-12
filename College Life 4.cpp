#include<bits/stdc++.h>
using namespace std;
#define Int  long long int
#define endl "\n"
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Int  N, E, H, A, B, C;
		cin>>N>>E>>H>>A>>B>>C;
		vector<Int > ans;
		vector<Int > v;
		for(int i=0;i<=N+1;i++)
		{
			v.push_back(i);
		}
		for(Int  i =0; i<=N; i++)
		{
			Int  x1 = lower_bound(v.begin(), v.end(), (2*N-E-2*i))-v.begin();
			Int  x2 = upper_bound(v.begin(), v.end(), (H-3*i))-v.begin()-1;
			if(x2<x1 || x1==N+1)
			continue;
			if(x2==N+1 && x2+3*i>H)
			continue;
			Int  y;
			if(C>A)
			y = (x1<(N-i)?x1:(N-i));
			else
			y = (x2<(N-i)?x2:(N-i));
			Int  x = N-y-i;
			if(y+2*i>=2*N-E && y+3*i<=H)
			{
				ans.push_back(A*x+B*i+C*y);
			}
		}
		if(ans.size()==0)
		cout<<"-1"<<endl;
		else
		{
			Int  min = ans[0];
			for(Int  i = 0;i<ans.size();i++)
			{
				if(ans[i]<min)
				min = ans[i];
			}
			cout<<min<<endl;
		}
	}
	return 0;
}
