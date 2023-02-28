#include <iostream>
#include <string>

using namespace std;

// Classes
class Person {
    private:
        void initName() {
            string firstName, lastName, fullName;

            cout << "Hey, user! To start, please enter your first name here: ";
            cin >> firstName;
            cout << "Please enter your last name here: ";
            cin >> lastName;

            fullName = firstName + " " + lastName;

            setName(firstName, lastName, fullName);
        }

        void initAge() {
            int age;

            cout << "\nHello, " << getFirstName() << "! Please enter your age here: ";
            cin >> age;

            setAge(age);
        }

    protected:
        string FirstName, LastName, FullName;
        int Age;

    public:
        Person() {
            initName();
            initAge();
        };

        void setName(string firstName, string lastName, string fullName) {
            FirstName = firstName;
            LastName = lastName;
            FullName = fullName;
        }

        void setAge(int age) { Age = age; }
        string getFirstName() { return FirstName; }
        string getLastName() { return LastName; }
        string getFullName() { return FullName; }
        int getAge() { return Age; }
};

class BankAccount: public Person {
    private:
        string AccountHolder;
        int Balance;

    public:
        BankAccount() {
            AccountHolder = this->FullName;
            Balance = 0;
        }

        string getAccountHolder() { return AccountHolder; }
        int getBalance() { return Balance; }
};

// Main
int main() {
    BankAccount *myPerson = new BankAccount();

    cout << "\nIt's nice to meet you, " << (myPerson)->getFirstName() << "! Welcome to your new lifestyle." << "! We have opened a bank account for you to manage your finances. You will start out with a $" << (myPerson)->getBalance() << " balance. Kudos.\n\n";

    return 0;
}