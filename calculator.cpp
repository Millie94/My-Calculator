#include <iostream>
#include <string>
using namespace std;

string cont(string choice){
    if(choice == "yes"){
       return("true");
    }else if(choice == "no"){
        cout << "Thank you for using the calculator, goodbye." <<endl;
        return 0;
    }
}

int main(){
    do{
        double first, second, total;
        char op;
        string choice;

        cout << "Welcome to the Calculator application! \n Enter your first number" << endl;
        cin >> first;

        cout << "Please enter the operation you would like to use (+ - * /)" << endl;
        cin >> op;

        cout << "Please enter your second number" << endl;
        cin >> second;

        if(op=='+'){
            total = first+second;
            cout << "Your total is " << total <<
                "\n Would you like to continue? \nPlease enter yes or no"<<endl;
            cin >> choice;
            cont(choice);
        } else if(op=='-'){
            total = first - second;
            cout << "Your total is " << total <<
                "\n Would you like to continue? \nPlease enter yes or no"<<endl;
            cin >> choice;
            cont(choice);
        } else if(op=='*'){
            total = first * second;
            cout << "Your total is " << total <<
                "\n Would you like to continue? \nPlease enter yes or no"<<endl;
            cin >> choice;
            cont(choice);
        } else if(op=='/'){
            total = first / second;
            cout << "Your total is " << total <<
                "\n Would you like to continue? \nPlease enter yes or no"<<endl;
            cin >> choice;
            cont(choice);
        }

    }while(true);
}
