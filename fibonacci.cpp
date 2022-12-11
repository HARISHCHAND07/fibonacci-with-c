#include<iostream>
using namespace std;
fab(int n){
    
    if(n==0)//if(n<=1)return n;
    return 0;
    if(n==1)
    return 1;
    int ans= fab(n-1)+fab(n-2);
    return ans;
}
int main(){
    int n,sum;
    cout<<"enter the place of fabonnaci where you want to print sum=";
    cin>>n;
    sum=fab(n);
    cout<<"the sum is ="<<sum;

    return 0;
}