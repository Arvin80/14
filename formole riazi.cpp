#include <iostream>
using namespace std;
#include <math.h>
#include <conio.h>
int main(){
    float x,y;
    cin>>x>>y;
    clrscr();
    gotoxy(14,2);
    cout<<sin(sqrt((log(x+y*x*x))/(pow(x,3)+sqrt(x+y*y))));
    return 0;
}
