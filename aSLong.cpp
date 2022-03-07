#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
    int i=0, a=0, b=0;  
    string cadena;
    cin>>cadena;
    for(i=0; i<cadena.length(); i++){
        if(cadena[i]=='a')
            a++;
        else 
            b++;
    }
    if(a>b)
        cout<<a+b<<endl;
    else 
        cout<<a+(a-1)<<endl;
    return 0;
}