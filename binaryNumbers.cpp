#include <bits/stdc++.h>
using namespace std;
/*termiando y aceptado*/
int main()
{
    int n;
    cin >> n;
    int maximo = 0;
    int count_one = 0;
    while(n>0){
        //cout<<n%2<<endl;
        if(n%2==0){
            if( count_one > maximo ){
                maximo = count_one;
            }
            count_one = 0;
            //cout<<"iniciazo"<<endl;
        }else{
            //cout<<"cuento"<<endl;
            count_one++;
        }
        n/=2;
    }
    if(maximo < count_one)
        cout<<count_one<<endl;
    else
        cout<<maximo<<endl;
    return 0;
}