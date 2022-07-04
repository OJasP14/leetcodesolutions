#include<iostream>

using namespace std;

int main(){
    int n,sum=0,prod=1;
    cin>>n;
    while(n!=0){
        sum = (n%10) + sum;
        prod = (n%10) * prod;
        n=(n/10);
    }
    int sol = prod - sum;
    cout<<sol<<endl;
}