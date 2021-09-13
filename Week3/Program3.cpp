#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
  int i,len, numRay[10];
     cin>>len;
    for(i=0;i<len;i++){
    	cin>>numRay[i];
	}
    for (int i = 0; i < len; i++) {
        numRay[numRay[i] % len]
            = numRay[numRay[i] % len] + len;
    }
    for (int i = 0; i < len; i++) {
        if (numRay[i] >= len* 2) {
            cout << "YES " << endl;
            break;
        }
        else{
        	if(i==len-1){
        		cout<<"No";
			}
			else{
				continue;
			}
		}}
    return 0;
}
