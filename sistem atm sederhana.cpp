#include <iostream>
using namespace std;

int main()
{
    int pin;
    int password = 123;
    int count = 0;
    int entry;
    int balance = 0;
    int deposit = 0;
    int withdraw = 0;
    bool isTrue = true;
    
    do
    {
        cout << "**Welcome to TETITB Bank**\n";
        cout << "Enter yout pin:\n";
        cin >> pin;
        
        if(pin == password)
        {
            do
            {
                cout << "**Welcome to TETITB Bank**\n";
                cout << "1. Balance\n";
                cout << "2. Deposit\n";
                cout << "3. Withdraw\n";
                cout << "4. Exit\n";
                cout << "Choose an option:\n";
                cin >> entry;
            
                switch(entry)
                {
                    case 1:
                        cout << "Current balance Rp. " << balance << endl;
                        break;
                    case 2:
                        cout << "Deposit amount:\n";
                        cin >> deposit;
                        balance = balance + deposit;
                        break;
                    case 3:
                        if(balance <= 0)
                            cout << "Please deposit some funds.\n";
                        else
                        {
                            cout << "Withdraw amount:\n";
                            cin >> withdraw;
                            balance = balance - withdraw;
                        }
                         break;
                    case 4:
                        cout << "**Have a nice day!**\n";
                        isTrue = false;
                        break;
                }
            } while(isTrue != false);
        }
        else
        {
            count++;
            if(count == 3)
                isTrue = false;
            else
                cout << "Wrong pin.\n";
        }
    } while(isTrue != false);
    
    return 0;
}
