#include<iostream>
using namespace std;
 
int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n; j++)
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k )
                  count++;
    }
    return count;
}
int main()
{
   int i,len,x, arr[10];
     cin>>len;
    for(i=0;i<len;i++){
    	cin>>arr[i];
	}
	cin>>x;
    cout<< countPairsWithDiffK(arr, len, x);
    return 0;
}
