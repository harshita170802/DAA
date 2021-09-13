#include <bits/stdc++.h>
using namespace std;
int insertionSort(int A[], int size)
{
   int i, key, j,c=0;
   for(i = 1; i < size; i++)
   {
       key = A[i];
       j = i - 1;
       while (j >= 0 && A[j] > key)
       { c++;
           A[j + 1] = A[j];
           j = j - 1;
       }
       A[j + 1] = key;
   }
   return c;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
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
    int c= insertionSort(arr, len);
 
    printArray(arr, len);
    cout<<"comparisons = "<<c;
 
    return 0;
}
