#include<iostream>
using namespace std;


int main(){
    //write your code here
    int arr[]={1,2,4,5};
    for(int i=0;i<4;i++){
        int x=arr[i];
        for(int j=0;j<=x;j++){
            cout<<"*"<<endl;
        }
        cout<<"    ";
    }
    
}