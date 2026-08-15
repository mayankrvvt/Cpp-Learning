#include <iostream>
#include <string>
using namespace std;

void checkbalance(double balance, string num)
{
    cout << "Enter Your Account Number : ";
    cin >> num;

    if (num.length() == 12)
    {
        cout << "Your Current Balance is : ₹" << balance << endl;
    }
    else
    {
        cout << "Enter Correct Account Number" << endl;
    }
}

double deposit(double balance, string num, double ammount)
{
    cout << "Enter Your Account Number : ";
    cin >> num;

    if (num.length() == 12)
    {
        cout << "Enter Amount : ";
        cin >> ammount;

        if (ammount > 0)
        {
            balance = balance + ammount;

            cout << "Money Deposited" << endl;
            cout << "Available Balance : ₹" << balance << endl;
        }
        else
        {
            cout << "Invalid Amount" << endl;
        }
    }
    else
    {
        cout << "Enter Correct Account Number" << endl;
    }

    return balance;
}

double withdraw(double balance, string num, double ammount)
{
    cout << "Enter Your Account Number : ";
    cin >> num;

    if (num.length() == 12)
    {
        cout << "Enter Amount : ";
        cin >> ammount;

        if (ammount <= 0)
        {
            cout << "Invalid Amount" << endl;
        }
        else if (ammount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - ammount;

            cout << "Money Withdrawn" << endl;
            cout << "Available Balance : ₹" << balance << endl;
        }
    }
    else
    {
        cout << "Enter Correct Account Number" << endl;
    }

    return balance;
}

double transfer(double balance, string num, double ammount)
{
    cout << "Enter The Account Number In Which You Want To Transfer : ";
    cin >> num;

    if (num.length() == 12)
    {
        cout << "Enter Amount : ";
        cin >> ammount;

        if (ammount <= 0)
        {
            cout << "Invalid Amount" << endl;
        }
        else if (ammount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - ammount;

            cout << "Money Transferred" << endl;
            cout << "Available Balance : ₹" << balance << endl;
        }
    }
    else
    {
        cout << "Enter Correct Account Number" << endl;
    }

    return balance;
}

int main()
{
    int opp;
    string num;
    double balance = 0;
    double ammount;

    do
    {
        cout << endl;
        cout << "-------------------------------------" << endl;
        cout << "            SIMPLE ATM              " << endl;
        cout << "-------------------------------------" << endl;

        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Exit" << endl;

        cout << "-------------------------------------" << endl;
        cout << "Enter Your Choice : ";
        cin >> opp;

        switch (opp)
        {
            case 1:
                checkbalance(balance, num);
                break;

            case 2:
                balance = deposit(balance, num, ammount);
                break;

            case 3:
                balance = withdraw(balance, num, ammount);
                break;

            case 4:
                balance = transfer(balance, num, ammount);
                break;

            case 5:
                cout << "Thank You For Using ATM!" << endl;
                break;

            default:
                cout << "Invalid Input" << endl;
        }

    } while (opp != 5);

    return 0;
}