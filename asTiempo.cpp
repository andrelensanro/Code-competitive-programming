#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
    int count=0, otros=0; 
    string cadena;
    cin>>cadena;
    for(int i=0; i<cadena.size(); i++){
        if(cadena[i]=='a')
            count++;
        else
            otros++;
    }
    if(count>otros)
        cout<<cadena.size()<<endl;
    else 
        cout<<count+(count-1)<<endl;
    return 0;
    
}