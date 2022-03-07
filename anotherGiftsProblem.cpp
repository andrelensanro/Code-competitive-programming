#include<bits/stdc++.h>
using namespace std;
#define lli long long int
/*terminado y aceptado*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        lli minEat=0;
        vector<lli> cherr(n);
        vector<lli> water(n);
        lli minChe=10e9+5;
        lli minWater=10e9+5; 
        for(int i=0; i<n; i++){
            cin>>cherr[i];
            if(cherr[i]<minChe)
                minChe=cherr[i];
        }
        for(int i=0; i<n; i++){
            cin>>water[i];
            if(water[i]<minWater)
                minWater=water[i];
        }
        //cout<<minChe<<" "<<minWater<<endl;
        for(int i=0; i<n; i++){
            if(cherr[i] > minChe && water[i] > minWater){
                if(cherr[i]-minChe > water[i]-minWater){
                    lli aux=water[i]-minWater;
                    minEat+=aux;
                    water[i]-=aux;
                    cherr[i]-=aux;
                }else{
                    lli aux=cherr[i]-minChe;
                    minEat+=aux;
                    water[i]-=aux;
                    cherr[i]-=aux;
                }
                
            }
        }
        for(int i=0; i<n; i++){
            minEat+=(cherr[i]-minChe);
            minEat+=(water[i]-minWater);
        }
        cout<<minEat<<endl;
    }



    return 0;
}