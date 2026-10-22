#include<iostream>
using namespace std;

int FuncSI(int P,int R,int T){

    return (P*R*T)/100;
}

int main(){
     int Principle, Rate, Time;
     cout <<"Enter the Values of Principle,Rate and time "<<endl<< "To calculate Simple interest: " << endl;
     cin >> Principle>>Rate>>Time;
    int result = FuncSI(Principle,Rate,Time);
    cout<< "The Simple Interest is: " << result << endl;
    return 0;
}