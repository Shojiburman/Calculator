#include <iostream>
#include<cmath>
#include<string>

using namespace std;
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
        return pow(x,y);
    }
    int modulas(int x, int y){
        return (x%y);
    }
    double SIN(double x){
        return sin(x);
    }
    double COS(double x){
        return cos(x);
    }
    double TAN(double x){
        return tan(x);
    }
};

int main()
{
    calculator c;
    int c1, c2;
    double a,b,p;
    char op;
    string t;
    cout<<"Follow the instruction"<<endl;
    cout<<"For algebra -- press 0 "<<endl;
    cout<<"1 : For SUMMATION -- press (a+b)"<<endl;
    cout<<"2 : For SUBSTRACTION -- press (a-b)"<<endl;
    cout<<"3 : For MULTIPLICATION -- press (a*b)"<<endl;
    cout<<"4 : For DIVITION -- press (a/b)"<<endl;
    cout<<"5 : For square -- press (a^b)"<<endl;
    cout<<"6 : For modulas -- press (a%b)"<<endl;
    cout << "-------------------------------------"<<endl;
    cout<<"For tangent -- press 1"<<endl;
    cout<<"1 : For sin(a) -- press (asin)"<<endl;
    cout<<"2 : For cos(a) -- press (acos)"<<endl;
    cout<<"3 : For tan(a) -- press (atan)\n"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    start:
        cin >> c1;
        if(c1 == 0){
            goto first;
        }
        else{
            goto second;
        }
    first:
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
    cout<<"\nTo continue algebra -- press 0\nTo continue tangent -- press 1\nTo start new -- press 2\nTo quit -- press 3"<<endl;
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
        p = 0;
        goto start;
    }
    else if(c2 == 3){
        p = 0;
        goto end;
    }
    second:
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

    cout<<"\nTo continue algebra -- press 0\nTo continue tangent -- press 1\nTo start new -- press 2\nTo quit -- press 3"<<endl;
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
        p = 0;
        goto start;
    }
    else if(c2 == 3){
        p = 0;
        goto end;
    }
    cout << "Hello world!" << endl;
    end:
    return 0;
}
