#include<iostream>
using namespace std;
class book
{
    private:
    int bookNo;
    char bookTitle[30];
    float price;

    float total_cost(int n)
    {
        return price * n;
    }

    public:

    void input()
    {
        cout<<"enter book no : ";
        cin>>bookNo;
        cout<<"enter book title : ";
        cin>>bookTitle;
        cout<<"enter book price : ";
        cin>>price;
    }

    void purchase()
    {
        int n;
        cout << "Enter the n: ";
        cin >> n;

        float totalCost = total_cost(n);
        cout << "Total cost : " <<totalCost<< endl;
    }

};

int main()
{
    book b;
    b.input();
    b.purchase();
}