#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado UVa*/
void showpq(priority_queue<int,vector<int>,greater<int>> gq){
    priority_queue<int,vector<int>,greater<int>> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    map<int, int> key; //id time 
    string s; 
    int id, time, k;
    while(1){
        cin>>s;
        if(s=="#"){
            cin>>k;
            break;
        }
        cin>>id>>time;
        key[id] = time;
        pq.push(time);
    }
    map<int, int>:: iterator it;
    int aux;
    while(k>0){
        while(!pq.empty() && k>0){
            for(it = key.begin(); it!=key.end() && k>0; it++){
                if( pq.top() % it->second == 0){
                    cout<<it->first<<endl;
                    pq.push(pq.top() + it->second);
                    k--;
                }
            }
            aux = pq.top();
            pq.pop();
            while(pq.top() == aux){
                pq.pop();                
            }
        }
    }
    return 0;
}