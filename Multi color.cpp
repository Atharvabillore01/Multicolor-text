#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
char ch;
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    string whatever;
     int t=0;
     cout<<"write whatever you want: "<<endl;
     getline(cin,whatever);
     for(int i=0;i<whatever.length();i++)
    { 
     t>=9 ? t=1 : t++;
     if(t==1){
        SetConsoleTextAttribute(color,1);
     }
    else{
        SetConsoleTextAttribute(color,t);
    }
    cout<<whatever.at(i);
    };
}