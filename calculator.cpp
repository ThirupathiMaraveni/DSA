#include <iostream>
using namespace std;

void calculate(int a, int b){
    int sum = a + b;
    cout<<"Sum of a and b is : "<<sum<<endl;
}
void calculate(double a, double b){
    double sum = a + b;
    cout<<"Sum of two decimal numbers: "<<sum<<endl;
}

void calculate(int a, int b, int c){
    int sum = a + b + c;
    cout<<"Sum of the three integers: "<<sum<<endl; 
}

void displayMessage(string message = "Calculation Completed"){
    cout<<message<<endl;

}

int main(){
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    calculate(a,b);
    double x,y;
    cout<<"Enter any two double values: ";
    cin>>x>>y;
    calculate(x,y);
    int p,q,r;
    cout<<"Enter any Three numbers: ";
    cin>>p>>q>>r;
    calculate(p,q,r);
    string mess;
    cout<<"Enter any message: ";
    cin>>mess;
    displayMessage(mess);
    displayMessage();
    return 0;
}
