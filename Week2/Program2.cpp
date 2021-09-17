#include<bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
 	int t;
 	cout<<"Enter the no. of test cases:-";
 	cin>>t;
 	while(t--)
 	{
 		int n,i,j,k,f=0;
 		cout<<"Enter the size of array:-";
 		cin>>n;
 		int arr[n];
 		cout<<"Enter the elements of array:-";
 		for(i=0;i<n;i++)
 		{
 			cin>>arr[i];
		}
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				for(k=j+1;k<n;k++)
				{
					if(arr[i]+arr[j]==arr[k])
					{
						f=1;
						cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
						break;
					}
				}
			}
		}
	
		if(f==0)
		{
			cout<<"No sequence found\n";
		}
    }
	return 0;	
}
