#include<iostream>

using namespace std;
int i=0;

int count_number_of_1(int n){
    if(n==0){
        return i;
    }
    else {
       i++;
       return count_number_of_1((n & (n-1)));
    }
}
int main(){
    cout<<count_number_of_1(15);
    return 0;
}