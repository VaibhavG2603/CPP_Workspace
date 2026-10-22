#include<iostream>
using namespace std;

void FunCount(int n){

    for(int i=1;i<=n;i++){

        cout << i << " ";
        
        }
    }

int main(){
    int number;
     cout << "Enter the Number Which you want to count: " <<endl;
     cin >> number;
     FunCount(number);
    return 0;
}