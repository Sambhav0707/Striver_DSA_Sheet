#include<iostream>
using namespace std;


void print(int i  , int n){
    if (n<i)
    {
        return;
    }
    else{
         print(i+1,n);
         
         
         
        cout<<i<<endl;
        
       

       
    }
    
}


int main(){

    int i=1, n  ; 
    cin>>n;

    

    print(i,n);
    return 1 ;
}