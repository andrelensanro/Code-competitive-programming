#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
    map<long long int, int> m;
    int n, max=-1;
    cin>>n;
    long long int x; 
    for(int i=0; i<n; i++){
        cin>>x;
        m[x]++;
    }
    map<long long int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second > max)
            max = it->second;
    }
    cout<<max<<endl;
    return 0;
}