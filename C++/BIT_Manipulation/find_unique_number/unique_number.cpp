#include<iostream>

using namespace std;

int find_unique(int arr[],int n){
     int xorsum=0;
     for(int i=0;i<n;i++){
        cout<<xorsum<<" XOR "<<arr[i]<<" = ";
        xorsum=(xorsum^arr[i]);
        cout<<xorsum<<" ";cout<<endl;
     }
    
     return xorsum;
}

int main(){
    int arr[5]={7,2,5,5,7};
    cout<<find_unique(arr,5);
    return 0;
}  