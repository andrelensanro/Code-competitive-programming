#include<bits/stdc++.h>
using namespace std;
#define p(uno, dos) cout<<uno<<" "<<dos<<endl
/*terminado y aceptado*/
int main(){
    int test; cin>>test;
    while(test--){
        char c;
        bool f = true;
        pair<int, int> p1;
        p1.first = -1;
        pair<int, int> p2;
        p2.first = -1;
        int n; cin>>n;
        vector<vector<char>> v(n, vector<char>(n));
        for(int i=0; i<n; i++)//filas
            for(int j=0; j<n; j++){//columnas
                cin>>c;
                v[i][j] = c;
                if(c=='*'){
                    //p(i, j);
                    if(p1.first == -1){
                        p1.first = i;
                        p1.second = j;
                    }else{
                        p2.first = i;
                        p2.second = j;
                    }
                }
            }
        //1er caso 
        /*p(p1.first, p1.second);
        p(p2.first, p2.second);*/
        if(p1.first != p2.first && p1.second != p2.second){
            /*p(p1.first, p1.second);
            p(p2.first, p2.second);*/
            v[p2.first][p1.second] = '*';
            v[p1.first][p2.second] = '*';
            /*p(p2.first, p1.second);
            p(p1.first, p2.second);*/
        }else if(p1.second == p2.second){// las columnas son iguales
            if(p1.second == 0){
                v[p1.first][1] = '*';
                v[p2.first][1] = '*';
            }else{
                v[p1.first][0] = '*';
                v[p2.first][0] = '*';
            }
        }else{
            if(p1.first == 0){// filas son iguales
                v[1][p1.second] = '*';
                v[1][p2.second] = '*';
            }else{
                v[0][p1.second] = '*';
                v[0][p2.second] = '*';
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<v[i][j];
            cout<<endl;
        }
    }


    return 0;
}