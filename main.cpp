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
    int c1, c2;
    double a,b,p;
    char op;
    string t;

    cout<<"                                   Follow the Instruction"<<endl<<endl
          << "------------------------------------------------------------------------------------------------------------"<<endl
       << "|----------------------------------------------------------------------------------------------------------|"<<endl
        <<"||     For algebra -- press 0        |"     <<"   For tangent -- press 1   |"     <<"     For inverse tangent -- press 2    ||"<<endl
        <<"||# For SUMMATION -- press (a+b)     |"     <<"# For sin(a) -- press (asin)|"     <<"# For sin inverse (a) -- press (a sini)||"<<endl
        <<"||# For SUBSTRACTION -- press (a-b)  |"     <<"# For cos(a) -- press (acos)|"     <<"# For cos inverse (a) -- press (a cosi)||"<<endl
        <<"||# For MULTIPLICATION -- press (a*b)|"     <<"# For tan(a) -- press (atan)|"     <<"# For tan inverse (a) -- press (a tani)||"<<endl
        <<"||# For DIVITION -- press (a/b)      |"     <<"                            |"     <<"                                       ||"<<endl
        <<"||# For POWER -- press (a^b)         |"     <<"                            |"     <<"                                       ||"<<endl
        <<"||# For MODULAS -- press (a%b)       |"     <<"                            |"     <<"                                       ||"<<endl
        << "|----------------------------------------------------------------------------------------------------------|"<<endl
        << "------------------------------------------------------------------------------------------------------------"<<endl;
    start:
        cout<<"Enter Your choice: ";
        cin >> c1;
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
            cout<< "Wrong expression" <<endl;
            goto end;
        }

                                                            //first starts here

    first:
        cout<<"Enter your operation"<<endl;
        cin >> a;
    first_reused:
        cin >> op;
        if(op == '!'){
            p = c.factorial(a);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '+'){
            cin >> b;
            p = c.summation(a,b);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '-'){
            cin >> b;
            p = c.substraction(a,b);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '*'){
            cin >> b;
            p = c.multiplication(a,b);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '/'){
            cin >> b;
            p = c.divition(a,b);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '^'){
            cin >> b;
            p = c.power(a,b);
            cout << "Ans = "<< p << endl;
        }
        else if(op == '%'){
            cin >> b;
            p = c.modulas(a,b);
            cout << "Ans = "<< p << endl;
        }
        else{
            p = 0;
            cout<< "Wrong expression" <<endl;
            goto end;
        }

    reused_option:
    cout<<endl<<"To continue algebra -- press 0"<<endl
    <<"To continue tangent -- press 1"<<endl
    <<"To continue inverse tangent -- press 2"<<endl
    <<"To start new -- press 3"<<endl
    <<"To quit -- press 4"<<endl;

    cin>> c2;
    choice_condition:
        if(c2<=4 && c2>=0){
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
            else if(c2 == 4){
                p = 0;
                goto end;
            }
        }
        else{
        cout<< "Wrong expression" <<endl;
        goto end;
    }

                                //Second starts here

    second:
    cout<<"Enter your operation"<<endl;
    cin >> a;
    second_reused:
    cin >> t;
    if(t == "sin"){
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else if(t == "cos"){
        p = c.COS(a);
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else if(t == "tan"){
        p = c.TAN(a);
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else{
        cout<< "Wrong expression" <<endl;
        goto end;
    }
    goto reused_option;


                //Third  starts here

    third:
    cout<<"Enter your operation"<<endl;
    cin >> a;
    third_reused:
    cin >> t;
    if(t == "sini"){
        p = c.ASIN(a);
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else if(t == "cosi"){
        p = c.ACOS(a);
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else if(t == "tani"){
        p = c.ATAN(a);
        p==p? cout << "= "<< p << endl:
          cout << "Math Error" << endl;
    }
    else{
        cout<< "Wrong expression" <<endl;
        goto end;
    }

    goto reused_option;

    end:
    cout <<endl<< "Thanks For Using! " << endl;
}

int main()
{
    Display();
    return 0;
}
