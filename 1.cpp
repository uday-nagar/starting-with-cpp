#include<iostream>
using namespace std;

int main(){
    int a ;
    cin >> a ;
    cin.ignore(); // to ignore the newline character after reading the integer
    cout << "hey " << "std::cout " <<endl ;
    cout << "this is my name"<< a << endl;
    
    string s ;
    getline(cin, s );
    cout << "this is the string you entered  "<<s;
    return 0;
}