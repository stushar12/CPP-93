#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int p;
	cin>>p;
	while(p--)
	{
	    int n;
	    cin>>n;
	    vector<int> v,v1;
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	        v1.push_back(x);
	    }
	    
	    next_permutation(v.begin(),v.end());
	    int flag=0;
	    for(int i=0;i<v.size();i++)
	    {
	        if(v[i]==v1[i])
	        flag=1;
	        else
	        flag=0;
	    }
	    if(flag==1)
	    {
	        sort(v.begin(),v.end());
	         for(int i=0;i<v.size();i++)
	    {
	      cout<<v[i]<<" ";
	    }
	    }
	    else
	    {
	    for(int i=0;i<v.size();i++)
	    {
	      cout<<v[i]<<" ";
	    }
	    }
	    cout<<endl;
	}
}