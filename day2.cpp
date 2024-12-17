#include <iostream>
using namespace std;
// return function
int addition(int a, int b){
    return a + b  ;
    
}
// void function
void dosometing(char name){
    cout << "do something " << name;
}
int main(){
    cout << addition(10,29); 
    dosometing('idk');
    int a;
    cin >> a;
    // Control flow statements
    if(a==18 || a>18){
        cout<<"you are an adult";
    }
    else{
        cout<<"you are a minor";
    }
    switch(a){
        case 1:
            cout << "sunday ";
        break;
        case 2:
            cout << "monday ";
        break;
        case 3:
            cout << "tuesday ";
        break;
        case 4:
            cout << "wednesday ";
        break;
        case 5:
            cout << "thirsday ";
        break;
        case 6:
            cout << "friday ";
        break;
        case 7:
            cout << "saturday ";
        break;
        default:
            cout << "Invalid";
            
    }
    for(int i=0;i<=5;i++){
        cout << "Counting "<< i << endl;
    }
    int j = 0;
    while( j <= 5){
        cout << "counting with while loop" << j <<endl;
        j++;
    };
    int k = 0;
    do{
        cout << "counting with do while loop" << k << endl;
        k++;
    }
    while(k <= 5 );

}
