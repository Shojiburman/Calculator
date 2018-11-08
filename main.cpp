#include <iostream>
#include<cmath>
#include<string>

using namespace std;

#define PI 3.14159265

class calculator{
double num1, num2;
public:
    int factorial(int x){
        int m = 1;
        for(int i = x; i > 0; i--){
            m = m * i;
        }
        return m;
    }
    double summation(double x, double y){
        return x+y;
    }
    double substraction(double x, double y){
        return x-y;
    }
    double multiplication(double x, double y){
        return x*y;
    }
    double divition(double x, double y){
        return x/y;
    }
    double power(double x, double y){
        double result = log(x);
        result = result*y;
        result = exp(result);
        return result;
    }
    int modulas(int x, int y){
        return (x%y);
    }
    double SIN(double x){
        return sin(x*PI/180); // converted to degree
    }
    double COS(double x){
        return cos(x*PI/180); // converted to degree
    }
    double TAN(double x){
        return tan(x*PI/180); // converted to degree
    }

            //inverse functions begin here........

    double ASIN(double x){
        return asin(x)* 180 / PI; // converted to degree
    }
    double ACOS(double x){
        return acos(x)* 180 / PI; // converted to degree
    }
    double ATAN(double x){
        return atan(x)* 180 / PI; // converted to degree
    }
};

void Display(){
    calculator c;
    double c1, c2;
    double a,b,p;
    char op;
    string t;

    cout<<"                                   Follow the instruction"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "|----------------------------------------------------------------------------------------------------------|"<<endl;
    cout<<"||     For algebra -- press 0        |";cout<<"   For tangent -- press 1   |";cout<<"     For inverse tangent -- press 2    ||"<<endl;
    cout<<"||# For SUMMATION -- press (a+b)     |";cout<<"# For sin(a) -- press (asin)|";cout<<"# For sin inverse (a) -- press (a sini)||"<<endl;
    cout<<"||# For SUBSTRACTION -- press (a-b)  |";cout<<"# For cos(a) -- press (acos)|";cout<<"# For cos inverse (a) -- press (a cosi)||"<<endl;
    cout<<"||# For MULTIPLICATION -- press (a*b)|";cout<<"# For tan(a) -- press (atan)|";cout<<"# For tan inverse (a) -- press (a tani)||"<<endl;
    cout<<"||# For DIVITION -- press (a/b)      |";cout<<"                            |";cout<<"                                       ||"<<endl;
    cout<<"||# For POWER -- press (a^b)         |";cout<<"                            |";cout<<"                                       ||"<<endl;
    cout<<"||# For MODULAS -- press (a%b)       |";cout<<"                            |";cout<<"                                       ||"<<endl;
    cout << "|----------------------------------------------------------------------------------------------------------|"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------"<<endl;
    start:
        cout<<"Enter Your choice: ";
        cin >> c1;
        cout<<"Enter your operation"<<endl;
        if(c1 == 0){
            goto first;
        }
        else if(c1 == 1){
            goto second;
        }
        else if(c1 == 2){
            goto third;
        }
        else{
            goto end;
        }

    first:                      //first starts here
        cin >> a;
    first_reused:
        cin >> op;
    if(op == '!'){
        p = c.factorial(a);
        cout << "= "<< p << endl;
    }
    else if(op == '+'){
        cin >> b;
        p = c.summation(a,b);
        cout << "="<< p << endl;
    }
    else if(op == '-'){
        cin >> b;
        p = c.substraction(a,b);
        cout << "= "<< p << endl;
    }
    else if(op == '*'){
        cin >> b;
        p = c.multiplication(a,b);
        cout << "= "<< p << endl;
    }
    else if(op == '/'){
        cin >> b;
        p = c.divition(a,b);
        cout << "= "<< p << endl;
    }
    else if(op == '^'){
        cin >> b;
        p = c.power(a,b);
        cout << "= "<< p << endl;
    }
    else if(op == '%'){
        cin >> b;
        p = c.modulas(a,b);
        cout << "= "<< p << endl;
    }
    cout<<endl<<"To continue algebra -- press 0"<<endl;
    cout<<"To continue tangent -- press 1"<<endl;
    cout<<"To continue inverse tangent -- press 2"<<endl;
    cout<<"To start new -- press 3"<<endl;
    cout<<"To quit -- press 4"<<endl;

    cin>> c2;
    if(c2 == 0){
        a = p;
        cout << "Ans ";
        goto first_reused;
    }
    else if(c2 == 1){
        a = p;
        cout << "Ans ";
        goto second_reused;
    }
    else if(c2 == 2){
        a = p;
        cout << "Ans ";
        goto third_reused;
    }
    else if(c2 == 3){
        p = 0;
        goto start;
    }
    else {
        p = 0;
        goto end;
    }
    second:                             //Second starts here
    cin >> a;
    second_reused:
    cin >> t;
    if(t == "sin"){
        p = c.SIN(a);
        cout << "= "<< p << endl;
    }
    else if(t == "cos"){
        p = c.COS(a);
        cout << "= "<< p << endl;
    }
    else if(t == "tan"){
        p = c.TAN(a);
        cout << "= "<< p << endl;
    }

    cout<<endl<<"To continue algebra -- press 0"<<endl;
    cout<<"To continue tangent -- press 1"<<endl;
    cout<<"To continue inverse tangent -- press 2"<<endl;
    cout<<"To start new -- press 3"<<endl;
    cout<<"To quit -- press 4"<<endl;

    cin>> c2;
  if(c2 == 0){
        a = p;
        cout << "Ans ";
        goto first_reused;
    }
    else if(c2 == 1){
        a = p;
        cout << "Ans ";
        goto second_reused;
    }
    else if(c2 == 2){
        a = p;
        cout << "Ans ";
        goto third_reused;
    }
    else if(c2 == 3){
        p = 0;
        goto start;
    }
    else {
        p = 0;
        goto end;
    }
                //Third  starts here

    third:
    cin >> a;
    third_reused:
    cin >> t;
    if(t == "sini"){
        p = c.ASIN(a);
        cout << "= "<< p << endl;
    }
    else if(t == "cosi"){
        p = c.ACOS(a);
        cout << "= "<< p << endl;
    }
    else if(t == "tani"){
        p = c.ATAN(a);
        cout << "= "<< p << endl;
    }
    cout<<endl<<"To continue algebra -- press 0"<<endl; //change these lines into cout
    cout<<"To continue tangent -- press 1"<<endl;
    cout<<"To continue inverse tangent -- press 2"<<endl;
    cout<<"To start new -- press 3"<<endl;
    cout<<"To quit -- press 4"<<endl;

    cin>> c2;
    if(c2 == 0){
        a = p;
        cout << "Ans ";
        goto first_reused;
    }
    else if(c2 == 1){
        a = p;
        cout << "Ans ";
        goto second_reused;
    }
    else if(c2 == 2){
        a = p;
        cout << "Ans ";
        goto third_reused;
    }
    else if(c2 == 3){
        p = 0;
        goto start;
    }
    else {
        p = 0;
        goto end;
    }
    end:
    cout <<endl<< "Thanks For Using! " << endl;
}

int main()
{
    Display();
    return 0;
}
