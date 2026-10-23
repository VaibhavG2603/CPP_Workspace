# include<iostream>
# include<cmath>
using namespace std;


int main(){
     double P,Anual_rate;
     int year;

     cout<<" Enter the investment amount: "<<endl;
     cin>> P;
     cout<<" Enter the Anual retuen rate: "<<endl;
     cin>> Anual_rate;
     cout<<" Enter the Investment duration: "<<endl;
     cin>> year;
     
     //Convert anual data to monthly data
     double i = (Anual_rate/12.0)/100.00; //Monthly interest rate
     int n = year*12;  //Total number of months

     //SIP formula 
     double compound_factor = pow((1+i),n);
     double numerator = compound_factor -1;
     double maturity_amount = P * (numerator/i)*(1+i);

     double total_investment = P*n;
     double estimated_return = maturity_amount - total_investment;

     cout<< "Total investment: " <<total_investment<<endl;
     cout<< "Estimeted return: " <<estimated_return<<endl;
     cout<< "Maturity amount: " <<maturity_amount<<endl;
    return 0;
}