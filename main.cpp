#include <iostream>
#include <iomanip>

using namespace std;

double product_func(double);
double product_func();

int main() {
    int x;
    cout << "Enter a number:";
    cin >> x;
    double result = product_func(x);
    cout << "Result of the recursion is: " << fixed << setprecision(2) <<result << endl;
    cout << "Enter a number:";
    double overloaded_result = product_func();
    cout << "Result of the overloaded recursion is: "<< fixed << setprecision(2) <<overloaded_result;
    return 0;
}

double product_func(double number){
    if(number == 1){
        return ((number/(number+2))-10);
    } else{
        return ((number/(number+2))-10) * product_func(number-1);
    }
}

double product_func(){
    static double number;
    cin >> number;
    if(number == 1){
        return ((number/(number+2))-10);
    } else{
        return ((number/(number+2))-10) * product_func(number-1);
    }
}
