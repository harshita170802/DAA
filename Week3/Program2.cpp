#include <bits/stdc++.h>
using namespace std;
 
void swap(int *xp, int *yp)
{
	
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int selectionSort(int arr[], int n)
{
    int i,c=0, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx]){
        	c++;
            min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
    return c;
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
   int i,len,x, arr[10];
     cin>>len;
    for(i=0;i<len;i++){
    	cin>>arr[i];
	}
	int c = selectionSort(arr, len);
    printArray(arr, len);
     cout<<"comparisons = "<<c;
    return 0;
}
