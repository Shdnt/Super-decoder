#include <iostream>

using namespace std;

int main () {
    int num_01;
    string str_01;

    Input_label:
    cout<<"Enter an integer"<<endl;
    cin>>num_01;

    if (    (cin.fail()) ) {
        cin.clear();
        cout<<endl;
        cout<<"Error. Please enter a valid option."<<endl<<endl;
        cin.ignore(1000,'\n');
        goto Input_label;
    }
    
    //Ignore the remaing inputs
    cin.ignore(1000,'\n');

    cout<<endl<<endl;
    cout<<"Input integer is: "<<num_01;
    cout<<endl;
    getline(cin,str_01);
    cout<<str_01<<endl;
    cout<<"******************"<<endl;
    cout<<"Enter new string ";
    cin>>str_01;
    cout<<"New string is: "<<str_01;
    




    return 0;
}