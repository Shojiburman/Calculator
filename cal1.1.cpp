#include <iostream>
#include<cmath>

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
};

int main()
{
    calculator c;
    int n;
    double a,b,p;
    char op;
    cout<<"Follow the instruction"<<endl;
    cout<<"1 : SUMMATION(a+b)"<<endl;
    cout<<"2 : SUBSTRACTION(a-b)"<<endl;
    cout<<"3 : MULTIPLICATION(a*b)"<<endl;
    cout<<"4 : DIVITION(a/b)"<<endl;
    //cout<<"5 : sin"<<endl;
    //cout<<"6 : cos"<<endl;
    //cout<<"7 : tan"<<endl;
    cout<<"8 : square(a^b)"<<endl;
    cout<<"8 : modulas(a%b)"<<endl;
    start:
        cin >> a;
    reused:
        cin >> op;
    if(op == '!'){
        p = c.factorial(a);
        cout << p << endl;
    }
    else if(op == '+'){
        cin >> b;
        p = c.summation(a,b);
        cout << p << endl;
    }
    else if(op == '-'){
        cin >> b;
        p = c.substraction(a,b);
        cout << p << endl;
    }
    else if(op == '*'){
        cin >> b;
        p = c.multiplication(a,b);
        cout << p << endl;
    }
    else if(op == '/'){
        cin >> b;
        p = c.divition(a,b);
        cout << p << endl;
    }
    else if(op == '^'){
        cin >> b;
        p = c.power(a,b);
        cout << p << endl;
    }
    else if(op == '%'){
        cin >> b;
        p = c.modulas(a,b);
        cout << p << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
