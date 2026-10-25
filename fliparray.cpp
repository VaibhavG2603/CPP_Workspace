#include<iostream>
using namespace std;

int FlipArray(int arr[],int size){
    
      for(int i=0;i<size;i++){
        if(i==0){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        cout << arr[i] << " "; 
      }
}
int main(){
     
    int arr[]={10,20,30,40};
    int size=4;
    FlipArray(arr,size);
    return 0;
}