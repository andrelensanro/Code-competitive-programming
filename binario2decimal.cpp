#include<bits/stdc++.h>
using namespace std;
/*terminado y funciona*/
int binario2decimal(string str, int count){
    if(count == str.size()-1)
        return str[count]-'0';
    count++;
    int resultado = binario2decimal(str, count);
    count--;
    return resultado + (str[count]-'0')*(pow(2, str.size()-1-count));
}
int main(){
    string str; cin>>str;
    cout<<binario2decimal(str, 0)<<endl;
    return 0;
}