#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, digit, ans=0;
    cin>>n;
    while(n!=0){
        digit = n%10;
        //cout<<digit<<endl;
        ans = (  ans *10) + digit;
        n = n/10;
    }
    cout<<ans;
}