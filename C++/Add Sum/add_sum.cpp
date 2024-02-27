#include<iostream>

using namespace std;

int main(){
    int ar[10000];

    for(int i=0;i<sizeof(ar)/4;i++){
        cin>>ar[i];
    }
    int tar;
    cin>>tar;

    for(int i=0;i<sizeof(ar)/4;i++){
        if(ar[i]<tar){
            for(int j=i+1;j<sizeof(ar)/4;j++){
                if(ar[i]+ar[j]==tar){
                    cout<<"["<<i<<" , "<<j<<"]"<<endl;
                    break;
                }
            }
        }
    }
    
return 0;
}
