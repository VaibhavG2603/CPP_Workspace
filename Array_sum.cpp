#include<iostream>
using namespace std;

int main(){
     int arr[]={10,20,30,40,50};
     int size = 5;
     int sum=0;
     for(int index = 0;index<=size-1;index++){
           
          sum =arr[index]+sum;
     }
     cout<<"Sum of Array: "<< sum <<endl;
    return 0;
}
