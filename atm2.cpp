#include<iostream>
using namespace std;
class ATM
{
    private:
    long long code;
    int bal;
    public:
    long long cardno;

    void setdata()
    {
        code=10001;
        bal=50000;
        cardno=500;
    }
    int checkcode(int);//declaration
    void showbal();
    void withdraw(int);

};
int ATM::checkcode(int c)
{
    if(code==c)
 {
    return 1;
 }
 else
 {
    return 0;
 }
}
void ATM::showbal()
{
    cout<<"\n:current balance is="<<bal;
}
void ATM::withdraw(int amt)
{
    if(bal>=amt)
    {
        bal=bal-amt;
        cout<<"\n:withdraw successful current balance are="<<bal;
    }
    else
    {
        cout<<"\n:withdraw failed insufficient balance;";
    }
}
int main()
{
    int usercode;
    int ch,amt;
    ATM a;
    a.setdata();
    cout<<"\n enter your code:";
    cin>>usercode;
    if(a.checkcode(usercode))
    {
        cout<<"\n1.Balance check:"<<endl;
        cout<<"\n2.withdraw:"<<endl;
        cout<<"\n1.Enter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
        a.showbal();
        break;
        case 2:
        cout<<endl<<"\n enter the amount:";
        cin>>amt;
        a.withdraw(amt);
        break;
        default:
        cout<<"\n invalid choice:";
        }

    }
    else
    {
        cout<<" incorrect code:";
    }
}
