#include<iostream>
using namespace std;
class solution {
    public:
    int a[5]={1,2,3,4,5};
    int target = 5;
    
    void returnvalue(int a[5] , int target){
        for(int i=0;i<=5;i++){
            for (int j=i+1;j<5;j++){
                if(a[i]+a[j]==target){
                    return true;
                }
            }
        }
        return false;
    }
 

};

int main(){
    int a[5]={1,2,3,4,5};
    int target=5;
    solution s;
    s.returnvalue(a[5],target);
    }


