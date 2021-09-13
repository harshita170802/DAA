#include <bits/stdc++.h>
using namespace std;
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]){
            i++;
        }
        else if (arr2[j] < arr1[i]){
		
            j++;
        }
        else 
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int i,m,n, arr1[10],arr2[10];
     cin>>m;
     cin>>n;
    for(i=0;i<m;i++){
    	cin>>arr1[i];
	}
	for(i=0;i<n;i++){
    	cin>>arr2[i];
	}
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}
