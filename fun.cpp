#include<iostream>
using namespace std;
void statment(); //Function Declaring.
int main(){
    statment(); //Function Calling.
}
void statment(){
    cout<<"My name is CodeRoar-92"; // function Definition.
}

#include<iostream>
using namespace std;
void max(int a, int b);
int main(){
    int x,y;
    cout<<"Enter the Numbers: ";
    cin>>x>>y;
    max(x,y);
}
void max(int a,int b){
    if( a>b ){
        cout<<"Maximum Number is: "<<a;
    }
    else{
        cout<<"Maximum Number is: "<<b;
    }
}