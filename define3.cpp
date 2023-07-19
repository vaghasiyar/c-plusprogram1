#include<iostream>
using namespace std;
class Test{
    int testCode, noCandidate, centerReqd;
    char description[30];
    int calcent(){
        return (noCandidate/100+1);
    }
    public:
    void schedual(){
        cout<<"Enter Test Code : ";
        cin>>testCode;
        cout<<"Description : ";
        cin>>description;
        cout<<"No. Of Candidate : ";
        cin>>noCandidate;
        centerReqd = calcent();
    }
    void disptest(){
        cout<<"test Code is : "<<testCode<<endl;
        cout<<"description : "<<description<<endl;
        cout<<"all Candidate : "<<noCandidate<<endl;
        cout<<"centerReqd : "<<centerReqd;
    }
};
int main(){
    Test a;
    a.schedual();
    a.disptest();
}