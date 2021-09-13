#include <iostream>
using namespace std;
 
int merge(int arr[], int l, int m, int r)
{
    int c=0,n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
    	 c++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
   int i,arr_size, arr[10];
     cin>>arr_size;
    for(i=0;i<arr_size;i++){
    	cin>>arr[i];
	}
    int c = mergeSort(arr, 0, arr_size - 1);
    printArray(arr, arr_size);
    cout<<"comparisons="<<c;
    return 0;
}
