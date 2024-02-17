/


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