#include <iostream>
using namespace std;
int main(){
    float number,sum=0.0;
    cout<<"Enter a number:";
    cin>>number;
    sum+=number;
    while(number!=0.0){
        cout<<"Enetr number:";
        cin>>number;
        sum+=number;
    }
    cout<<"Sum="<<sum;
    return 0;
}




