#include <iostream>
using namespace std;
int main(){
    //pragram that tells if youre an adult or not

    int age;
    cin>>age;
    if (age>=18){
        cout<< "you are an adult";
    }
    else{
        cout<<"you are not an adult";
    }
    cout<<endl;
    cin.ignore();
    string str;
    getline(cin,str);
    cout<<"you entered "<<str<< endl;
    
    
    // switvh caae example
    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";
            break;
            default:
            cout<<"invalid day";
        }
        
        return 0;
    }
