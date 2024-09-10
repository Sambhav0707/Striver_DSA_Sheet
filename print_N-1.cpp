#include<iostream>
using namespace std;


void print(int n , int i=1){

    if(n<i){
        return;
    }else{
        cout<<n<<endl;
        n--;
        print(n,i);
    }

}

int main(){

    int i=1 ,n;
    cin>>n;

    print(n,i);
}