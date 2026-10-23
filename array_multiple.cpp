#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
     int size = 5;
     for(int index = 0;index<=size-1;index++){
           
          int multiple =arr[index]*10;
          cout<< multiple <<" ";
     }
     
    return 0;
}