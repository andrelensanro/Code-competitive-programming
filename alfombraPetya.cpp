#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
    int n, i, j, k, l;
    cin>>n;
    char mat[n+1][2*n+1];
    for(i=0; i<n+1; i++)
        for(j=0; j<2*n+1; j++)
            mat[i][j]='0';
    int count=n;
    for(i=0; i<n+1; i++){
        for(j=0; j<count; j++){
            mat[i][j]=' ';
        }
        count--;
    }
    count=0;
    for(i=0; i<n; i++){ 
        for(j=n; j<2*n+1; j++){
            mat[i][j+count]='0';
            count++;
            mat[i][j+count]=' ';
            break;
        }
    }
    count=n;
    for(i=1; i<=n; i++){
        int aux = 1;
        for(j=count; j<=n; j++){
            mat[j][i]=aux+'0';
            mat[j][2*n-i]=aux+'0';
            aux++;
        }
        count--;
    }
    for(i=0; i<n+1; i++){
        for(j=0; j<=n+i && j<2*n+1; j++){
            cout<<mat[i][j];
            if(j<n+i)
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=n-1; i>=0; i--){
        for(j=0; j<=n+i && j<2*n+1; j++){
            cout<<mat[i][j];
            if(j<n+i)
                cout<<" ";
            /*
            cout<<"'"<<mat[i][j]<<"'";
            if(j<n+i)
                cout<<"' '";
            */
        }
        cout<<endl;
    }
    return 0;
}