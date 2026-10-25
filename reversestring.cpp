#include<iostream>
#include<string>
using namespace std;

string RevString(string name,int len){
      int ptr = 0;
      int l = len-1;

      while(ptr<l){

        swap(name[ptr],name[l]);
        ptr++;
        l--;
      }
      
      return name;
  }
int main(){
    
    string str = "Vaibhav";
    int length = str.length();
    cout <<"String: " << str <<endl<< "Length: "<< length<<endl;
    string  Reverse = RevString(str,length);
    cout << "Reverse String is: " << Reverse <<endl;
    return 0;
}