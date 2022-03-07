#include<bits/stdc++.h>
using namespace std;
#define lli long long 
/*terminado y aceptado*/
int main(){
    lli t;
    cin>>t;
    lli k, p, n;
    while(t--){
        cin>>k>>p>>n;
        if(p>k)
            cout<<"0"<<endl;
        else
            cout<<((k-p)*n)<<endl;
    }
    return 0;
}