#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
    long long int n, c; cin>>n;
    vector<long long int> a(n+1);
    a[0]=-1;
    for(int i=1; i<=n; i++){
        cin>>c;
        a[c]=i;
    }
    long long int m, aux, pos, v=0, p=0; cin>>m;
    for(int i=0; i<m; i++){
        cin>>aux;
        pos = a[aux]-1;
        v += pos+1;
        p += n-pos;
    }
    cout<<v<<" "<<p<<endl;
    return 0;
}