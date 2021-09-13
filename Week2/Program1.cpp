#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n,int x)
{
    int c=0;
   
    for(int i=0;i<=n;i++){
    	if(arr[i]==x){
    		c++;
		}
	}

    return c;
}
int main()
{
	int i,len,x, arr[10];
     cin>>len;
    for(i=0;i<len;i++){
    	cin>>arr[i];
	}
	cin>>x;
 
   int c= search(arr, len,x);
   if(c==0){
    cout<<"Not Present";
}
 	
	 else{
	 cout  << "present "<<c<< "times"<<"\n";}
    return 0;
}
