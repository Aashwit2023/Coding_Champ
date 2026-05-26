#include <bits/stdc++.h>
using namespace std;
class Account {
    // Encapsulation: data is hidden inside the class
    private:
        int balance;
        int pin;
        int accountNumber;
        string accountHolderName;
        queue<pair<string, int>> five_transac;
    public:
        // Constructor: initializes object when it is created
        //If we not implement then the Default constructor it allot a garbage values in the data member.
        Account(int b, int p, int accNumber, string holderName) {
            balance = b;
            pin = p;
            accountNumber = accNumber;
            accountHolderName = holderName;
            cout << holderName << " your account is sucessfully created." << endl;
        }

        //All methods are is Shown abstraction
        // Abstraction: internal logic hidden from user
        // Helper function to check if PIN is wrong
        bool invalidPin(int p) {
            return p != pin;
        }
        void checkBalance() { 
            cout << "Current Balance: " << balance << endl;
            return ;
        }
        void deposit(int amount) {
            //ABSTRACTION:-
            //User don't know how the Balance is updated
            //How the Pin is Validate 
            //Also All logic is Hidden
            if (amount <= 0) {
                cout << "Amount should be greater than 0." << endl;
                return;
            }
            balance += amount;
            if (five_transac.size() >= 5) {
                five_transac.pop();
            }
            five_transac.push({"Deposite : ", amount});
            cout << "Deposited sucessfully." << endl;
            return;
        } 
        void withdraw(int amount, int p) {
            if (invalidPin(p)) {
                cout << "Enter Valid Pin!" << endl;
                return;
            }
            if (balance < amount) {
               cout << "You have insufficient balance." << endl;
               return ;
            } 
            balance -= amount;
            if (five_transac.size() > 5) {
                five_transac.pop();
            }
            five_transac.push({"Withdraw : ", amount});
            cout << "Sucessfully Withdaw your amount." << endl;
            return;
        }
        void LastTransaction() {
            vector<pair<string, int>> temp;
            while (!five_transac.empty()) {
                temp.push_back(five_transac.front());
                five_transac.pop();
            }
            for (auto &it: temp) {
                cout << it.first << " " << it.second << endl;
                five_transac.push(it);
            }
            return;            
        }
        void changePIN() {
            cout << "This Function is coming soon" << endl;
            return;
        }
        ~Account() {
            //In this Destructor we only delete Pointrs when we create.
            // int* ptr = new int;
            // delete ptr;
        }
};
class ATM {
    private:
        int pin;
    public:
        void start(Account &acc) {
            cout << "Enter PIN: " << endl;
            cin >> pin;
            if (acc.invalidPin(pin)) {
                cout << "Enter Valid PIN" << endl;
                return;
            } 
            cout << "Menu" << endl;
            cout << "1 : Check Balance" << endl;
            cout << "2 : Deposite " << endl;
            cout << "3 : Withdraw" << endl;
            cout << "4 : Change PIN" << endl;
            cout << "5 : LastTransaction" << endl;
            cout << "6 : Exit" << endl;
            while (true) {
                int operation;
                cin >> operation;
                if (operation == 1) {
                    acc.checkBalance();
                } else if (operation == 2) {
                    int amount;
                    cout << "Enter amount: "<< endl;
                    cin >> amount;
                    acc.deposit(amount);
                } else if (operation == 3) {
                    int amount;
                    cout << "Enter amount: " << endl;
                    cin >> amount;
                    acc.withdraw(amount, pin);
                } else if (operation == 4) {
                    acc.changePIN();
                } else if (operation == 5) {
                    acc.LastTransaction();
                } else if (operation == 6) {
                    cout << "Sucsessfully Exit." << endl;
                    break;
                } else {
                    cout << "INVALID INPUT" << endl;
                }
                cout << "Reselect Operaions:: ";
            }
            return;
        }
        ~ATM() {}
};
int main() {
    Account User1(0, 1234, 122333, "Rahul");
    ATM atm;
    atm.start(User1);
    return 0;
}