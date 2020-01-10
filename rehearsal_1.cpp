#include <iostream>
using namespace std;

int main(){

    string name;
    double x;
    cout << "what is your name: ";
    cin >> name;
    cout << "what is your grade: ";
    cin >> x;

    if(x >= 3.50){
        cout << name << "InW Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << name <<"!!!";
    }
    


}

