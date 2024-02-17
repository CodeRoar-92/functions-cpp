
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

    #include<iostream>
    using namespace std;
    void table(int n);//function declare.
    int main(){
        int x;
        cout<<"Enter the Number: ";
        cin>>x;
        table(x);
        table(x);
        table(x); //Calling a Multiple function.
    }
    void table(int n ){
        int t=10;
        for(int i=1; i<=t; i++){  //Function definition.
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        }
    }