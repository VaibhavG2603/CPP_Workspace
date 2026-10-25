#include<iostream>
using namespace std;

int main(){
     int size =4;
    int arr[size];
    int brr[5]={ };
    for (int index = 0; index < size; index++)
    {
        arr[index] = -1;
        cout << arr[index] << " ";
    }
    cout << endl;
    for (int bindex = 0; bindex < 5; bindex++)
    {
        cout << brr[bindex] << " ";
    }
    
    
    return 0;
}