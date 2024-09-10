#include<iostream>
using namespace std;


void print(int i  , int n){
    if (i>n)
    {
        return;
    }
    else{
       
        cout<<i<<endl;
        i++;
       

        print(i,n);
    }
    
}


int main(){

    int i = 1 , n  ; 
    cin>>n;

    

    print(i,n);
    return 1 ;
}