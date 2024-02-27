#include<iostream>

using namespace std;
bool powerOf2(int n){
    return ((n & (n-1)) == 0) ? true : false;
}

int main(){
    cout<<powerOf2(16);
    return 0;
}