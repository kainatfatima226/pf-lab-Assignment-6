#include<iostream>
using namespace std;
int main(){
    int i=1; 
    while(i<=5){
        cout<<"row="<<i;
        int j=1;
        while(j<=10){
            cout<<"seats:"<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
