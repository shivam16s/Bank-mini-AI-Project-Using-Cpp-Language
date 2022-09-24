#include<iostream>
//#include<string>
using namespace std;
class bank
{ 
    private:
    /*   data */
    public: 
    string accname,accadd;
    float bal=0;
    void openacc()
    {
        cout<<endl<<"Enter your Full Name :";
        cin.ignore();
        getline(cin,accname);
        //cin>>accname;
        cout<<endl<<"Enter your Address :";
        getline(cin,accadd);
        //cin>>accadd;
        cout<<endl<<"Enter the Account Bank Balance :";
        cin>>bal;
        cout<<"\n Your Account is Created ";
    }
    void accdetails()
    {
        cout<<"\nYour Account Name is :";
        cout<<accname;
         cout<<"\nYour Address is :";
        cout<<accadd;
        cout<<"\nYour Account Bank Balance is :";
        cout<<bal;

    }
    void withdraw()
    {
        float w = 0.0;
        cout<<"\nEnter the Amount to withdraw :";
        cin>>w;
        if(w<=bal)
        {
            cout<<"\nSuccessful Withdrawal";
            bal=bal-w;
            cout<<"\nBank Balance is :";
            cout<<bal;
        }
        else
        {
            cout<<"\nInsuficiant Bank Balance";
            cout<<"\nYour Bank Balance is :";
            cout<<bal;
        }
    
    }
    void creadit()
    {
         float c = 0.0;
        cout<<"\nEnter the Amount to Credit :";
        cin>>c;
        if(c>0)
        {
            cout<<"\nSuccessfully credited";
            bal=bal+c;
            cout<<"\nBank Balance is :";
            cout<<bal;
        }
        else{
            cout << "\n Enter the valid Credit Amount";
        }
    }
};
int fun()
{
    cout<<"\n\n1: Open New Bank Account";
    cout<<"\n2: Bank Account Datails";
    cout<<"\n3: Withdraw Amount From your Bank Account";
    cout<<"\n4: Creadit Amount on Your Bank Account ";
    cout<<"\n5: exit";
    cout<<"\n Enter the Number :";
    int i;
    cin>>i;
    return i;

}
int main()
{
    bank b1;
    
    int b=fun();
    cout<<b;
    while(b!=5){
        switch (b)
        {
            case 1:
                b1.openacc();
                b=fun();
                break;

            case 2:
                b1.accdetails();
                b=fun();
                break;

            case 3:
                b1.withdraw();
                b=fun();
                break;

            case 4:
                b1.creadit();
                b=fun();
                break;

            default:
                cout<<"Plese Try Again";
                b=fun();
        }
    }
}
