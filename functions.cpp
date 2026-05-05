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
int main(){
    greet();
    int x, y;
    cin>>x>>y;
    cout<<sum(x, y)<<endl;
    return 0;
}

//these are similar to java