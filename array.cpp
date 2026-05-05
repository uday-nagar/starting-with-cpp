#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" index "<<i<<endl;
    }

    //2d array
    int arr2[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    //string is an array of characters

    
    return 0;
}