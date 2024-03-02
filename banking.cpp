#include<iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{  double balance = 0;
    int choice = 0;
 
        do{      //do while loop

            cout<<"Enter your choice\n\n";

        cout<<"1. Show balance \n";
        cout<<"2. Deposit Money \n";
        cout<<"3. Withdraw money \n";
        cout<<"4. Exit \n";

        cin>>choice;

        switch(choice)
        {
            case 1:
            showBalance(balance);
            break;

            case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;

            case 3:
            balance = balance - withdraw(balance);
            showBalance(balance);
            break;

            case 4:
            cout<<"Thanks for visiting";
             break;

            default:
            cout<<"Invalid Choice";
            break;


        }

            } while(choice !=4);

    return 0;
}

void showBalance(double balance){

        cout<<"Your balance is "<<balance <<"rupees\n";
}

double deposit(){
    double amount = 0;
     cout<<"Enter amount to be deposited: ";
        cin>>amount;

        if(amount>0)
        {
            return amount;
        }
        else{
        cout<<"Thats not a valid amount\n";
        return 0;
        }

}

double withdraw(double balance){

    double amount =0;
    cout<<"Enter amount to be withdraw:";
        cin>>amount;

        if(amount > balance)
        {
            cout<<"Insufficient funds-_-";
            return 0;
        }
        else if(amount < 0)
        {
            cout<<"Thats not a valid amount";
            return 0;
        }

        else{
        return amount;
        }
 return 0;
}