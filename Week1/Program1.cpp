#include <bits/stdc++.h>
using namespace std;
 #include<iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for (i = 1; i <= n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}
 int main(void)
{
    int i,n,x, arr[10];
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
	cin>>x;
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Not Present"
        : cout << "Present " << result;
    return 0;
}
