#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){


    cout<<"Hellow world!";     //print a message on console.
    cout<<"\nSakib you are a little programmer.";       //use \n for make a new line.
    cout<<endl<<"1st line"<<endl<<"2nd line"<<endl;      //you can also use 'endl' for new line.
    
    //Veriable declaration and get value from user  and print the value
    int num1;
    float num2;
    double num3;
    char ch='c';
    cout<<setprecision(5);
    cout<<"Please enter integer float double and charecter type data: ";
    cin>>num1>>num2>>num3;
    cout<<endl <<"Enterd number is : "<<num1<<"  "<<num2<<"  "<<num3<<"  "<<ch;
    
    getch();
    return 0;
}