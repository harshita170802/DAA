#include <bits/stdc++.h>
using namespace std;
 
int jumpSearch(int arr[], int x, int n)
{    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev+1;
 
    return -1;
}
int main()
{
    int i,n,x, arr[10];
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
	cin>>x;
    int index = jumpSearch(arr, x, n);
    cout << "Present" << index;
    return 0;
}
