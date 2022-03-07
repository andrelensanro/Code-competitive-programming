#include <bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
long long arrayManipulation(int n, vector<vector<int>> queries){
    vector<long long int> results(n+2, 0);
    long long int max = -1;
    int queries_t = queries.size();
    for( int i = 0; i < queries_t; i ++ ){
        results[queries[i][0]] += queries[i][2];
        results[queries[i][1]+1] -= queries[i][2];
    }
    //BARRIDO
    for( int i = 2; i < n+1; i++ ){
        results[i] += results[i-1];
        if( max < results[i] )
            max = results[i];
    }
    return max;
}
int main(){
    int n, cant_q; cin>>n>>cant_q;
    vector<vector<int>> queries(cant_q);
    int aux=0;
    for(int i=0; i<cant_q; i++){
        for(int j=0; j<3; j++){
            cin>>aux;
            queries[i].push_back(aux);
        }
    }
    long long resultado = arrayManipulation(n,queries);
    cout<<resultado<<endl;
    return 0;
}
    