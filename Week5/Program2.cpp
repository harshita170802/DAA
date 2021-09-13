#include <bits/stdc++.h>
using namespace std;
int printPairs(int arr[], int n, int sum)
{
    int count = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                	cout << "(" << arr[i] << ", "<< arr[j] << ")" << endl;
}
int main()
{
   int i,n,sum, arr[10];
     cin>>n;
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
    cin>>sum;
    printPairs(arr, n, sum);
    return 0;
}
