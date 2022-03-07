#include<bits/stdc++.h>
using namespace std;
/*contest 6ta actividad 2020*/
/*terminado, pero no lo pude probar*/
int main(){
    string s;
    cin>>s;
    char final_s = s[s.size()-1];
    vector<string> v_final_s;
    bool f=false;
    //vector<char> letras_ini(26);
    vector<int> cont_letras_ini(26,0);//0-a(97) 1-b(98) 2-c ... 25-z
    int cant_animales; cin>>cant_animales;
    for(int i=0; i<cant_animales; i++){
        string aux; cin>>aux;
        if(aux[0]==final_s)
            v_final_s.push_back(aux);
        else
            cont_letras_ini[aux[0]-97]+=1;
    }
    if(v_final_s.size()==0){
        cout<<"?\n";
    }

    

    if(v_final_s.size()==1){

        string str = v_final_s[0];
        //cout<<str<<endl;
        int final_str = str[str.size()-1];
        if(cont_letras_ini[final_str-97]==0)//eres ganador
            cout<<str<<"!"<<endl;
        else
            cout<<str<<endl;
    }
    cont_letras_ini[final_s-97]+=1;
    if(v_final_s.size()>1){
        //cout<<"\nlista de palabras que pueden hacer que gane\n";
        for(int i=0; i<v_final_s.size(); i++){ // oscarabajo oso
            string str1 = v_final_s[i]; // oscarabajo 
            int final_str1 = str1[str1.size()-1]; // o
            //cout<<final_str1<<" "<<str1<<endl;
            if(cont_letras_ini[final_str1-97]==0){
                f=true;
                cout<<str1<<"!"<<endl;
                break;
            }
        }
        if(f==false)
            cout<<v_final_s[0]<<endl;
    }
}
