 #include <iostream>
using namespace std;

int main()
{
    int num;
    int fact=1;
    cout<<"Hello World";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact *=i;
    }
        cout<<"factorial of "<<num <<"is"<<fact<<endl;
    

    return 0;
}
