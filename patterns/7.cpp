#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
         cout<<i;  
        }
        cout<<endl;
    }
}

