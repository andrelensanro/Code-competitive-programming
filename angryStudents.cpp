#include<bits/stdc++.h>
using namespace std;
/*terminado y acpetado*/
int main(){
    int i=0;
    int times; cin>>times;
    while(times--){
        int flag=0, flag1=0, count=0;
        int tam=0; cin>>tam;
        string cadena; cin>>cadena;
        while(1){
            flag=0;
            flag1=0;
            for(i=0; i<tam; i++){
                if(cadena[i]=='A' && i!=tam-1){
                    flag=1;
                    if(cadena[i+1]=='P'){
                        flag1=2;
                        cadena[i+1]='A';
                        i++;
                    }
                }
            }
            if(flag1==2){
                count++;
            }else
                break;
        }
        cout<<count<<endl;
    }

    return 0;
}