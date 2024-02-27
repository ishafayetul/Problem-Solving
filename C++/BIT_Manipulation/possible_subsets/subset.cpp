#include<iostream>

using namespace std;

void subset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
           
        } cout<<endl;
    }
}
int main(){
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    subset(ar,10);
    return 0;
}  