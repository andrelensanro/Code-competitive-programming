#include<bits/stdc++.h>
using namespace std;
/*terminado y aceptado*/
int main(){
	int t,r,a; 
	cin>>t;
	while(t--){
		cin>>a;
		a = (((((a*567)/9)+7492)*235)/47)-498;	
		a = abs(a);
		a = a%100;
		if(a<10)
			cout<<"0\n";
		else{
			r = a/10;
			cout<<r<<endl;		
		}		
	}
	return 0;
}
