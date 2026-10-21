#include<iostream>
using namespace std;

int main(){
    int count = 5,i;
    
    for(char ch = 'A'; ch<='Z';ch++){
        cout << ch << " ";
    }
    cout << endl;

    for(char ch = 'Z'; ch>='A';ch--){
        cout << ch << " ";
    }
    cout<< endl;

    // for (int i = 0; i <= count; i++);
    // {  
    //     int i;
    //     cout << i << " ";

    // }
     //cout << endl;
     for(i=1;i<=count;i++);
     {
        cout << i<< " ";
     }
    return 0;
}