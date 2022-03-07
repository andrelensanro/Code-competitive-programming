#include<bits/stdc++.h>
using namespace std;
/*termindo y aceptado 1.14h */
bool backspaceCompare(string S, string T) {
        bool f = false;
        int i = S.size()-1, j = T.size()-1; 
        int contNum1 = 0, contNum2 = 0;
        char ultS = '\0', ultT = '\0';
        int contS = 0;
        for(; i >= 0 || j >= 0;){
            if(i>=0 && !f){
                if( S[i] == '#' ){
                    contNum1++;
                    i--;
                }else if(contNum1>0){//hacemos un backspace 
                    contNum1--;
                    i--;
                }else{// no hay pendiente un backspace, eres parte de la repsuesta
                    f = true;
                    ultS = S[i];
                    cout<<"busco a "<<ultS<<endl;
                    i--;
                }
            }
            if(j>=0 && f || (j>=0 && i<0)){
                if( T[j] == '#' ){
                    contNum2++;
                    j--;
                }else if(contNum2 > 0){
                    contNum2--;
                    j--;
                }else{
                    if(T[j] == ultS){
                        cout<<"lo encontre"<<endl;
                        ultS = '\0';
                        j--;
                        f = false;
                    }else{
                        return false;
                    }
                }
            }
            if(j<0 && ultS != '\0'){// cuando se acaba 2 y sigues buscando
                i = -1;
            }
        }
        return ultS == '\0'? true :  false;
}
int main(){
    string s = "j##yc##bs#srqpfzantto###########i#mwb", t = "j##yc##bs#srqpf#zantto###########i#mwb";
    cout<<backspaceCompare(s, t)<<endl;
}
