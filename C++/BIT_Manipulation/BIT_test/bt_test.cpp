#include<iostream>

using namespace std;

int get_bit(int n,int pos){
    /*
    12        = 1100
    1         = 0001
    1<<2      = 0100
    12 & 1<<2 = 1100
                0100
                ----
                0100
    */
    if((n & (1<<pos)) != 0) 
        return 1;             
    else 
        return 0;
}

int set_bit(int n, int pos){
    return (n | (1<<pos));
}

int clear_bit(int n, int pos){
    return (n & (~(1<<pos)));
}

int update_bit(int n,int pos, int v){
    n = (n & ~(1 << pos));
    return (n | (v<<pos));    
}
int main(){
    int a=12;
    //cout<<get_bit(a,2)<<endl;
    //cout<<set_bit(a,0)<<endl;
    //cout<<clear_bit(a,2);
    cout<<update_bit(a,0,1);
    return 0;
}