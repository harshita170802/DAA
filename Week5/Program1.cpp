#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define RANGE 255
int countSort(char arr[])
{
	int c=0;
    char output[strlen(arr)];
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
    for (i = 0; arr[i]; ++i)
        ++count[arr[i]];
    
    for (i = 0;i <= RANGE; ++i){
    	if(count[i]>1){
   		c=count[i];
   }
}
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i - 1];
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
 
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
	return c;
}
int main()
{
   int i,len;
   char arr[10];
     cin>>len;
    for(i=0;i<len;i++){
    	cin>>arr[i];
	}
   int c=  countSort(arr);
    for(i=0;i<len;i++){
    if(arr[i]==arr[i+1]){
    	cout<<arr[i]<<" "<<c;
    	break;
	}	
	}
    return 0;
}
