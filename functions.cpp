#include <iostream>
using namespace std;
//various functions in c++

//void function

void greet(){
    cout<<"hello world"<<endl;
}
int sum(int a, int b){
    return a+b;
}

//these are similar to java


//
// pass by reference
int keepValue(int a){// add & before a to make it pass by reference
    a+=5;
    cout<<"inside function "<<a<<endl;
    return a;
}



int main(){
    greet();
    int x, y;
    cin>>x>>y;
    cout<<sum(x, y)<<endl;


    int k = 5;
    cout<<keepValue(k)<<endl; // this will print 10
    cout<<k<<endl; // this will print 5 because k is passed by value
    return 0;
}