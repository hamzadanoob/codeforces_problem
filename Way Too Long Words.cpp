#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;

int a=s.size();
int p=a-2;
if(a<=10){
    cout<<s<<endl;

}else{cout<<s[0]<<p<<s[a-1]<<endl;}
}
}

