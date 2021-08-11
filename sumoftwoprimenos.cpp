#include <iostream>
using namespace std;

bool isprime(int no){
    for(int j=2;j<no;j++){
        if(no%j==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int no;
    cout<<"Enter the Number:"<<endl;
    cin>>no;
    for(int i=0;i<no;i++){
        if(isprime(i) && isprime(no-i)){
            cout<<no<<"="<<no-i<<"+"<<i<<endl;
        }
    }
    return 0;
}
