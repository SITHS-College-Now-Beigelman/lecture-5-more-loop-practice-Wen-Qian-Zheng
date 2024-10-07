/* Wen Qian Zheng
Lecture 5
October 7th, 2024*/
#include <iomanip>
#include <string>
#include <iostream> // necessity

using namespace std; // shorten our cout statements! make sure to have semicolon

int main() // ALL C++ programs require the function main
{ // opening bracket for the code
    string transactionInput;
    int transaction, transactionCount = 0;
    double debit, credit, account;

    cout << "Please input your account balance!\n> $"; // prompts user to input their current balance
    cin >> account; // inputs their balance into variable account
    cout << "\nHow many transactions will you be making today?\n> "; // asks user how many transactions will be made
    cin >> transaction; // inputs transaction count

    while (transactionCount < transaction) // repeat until the number of transactions is reached
    {
        cout << "\nWhat type of transaction would you like to make today?\n\n[1] Debit\n[2] Credit\n\n> "; // prompts user to pick an option
        cin >> transactionInput; // takes user input

        if (transactionInput == "1") // if they picked 1
        {
            cout << "\n\nHow much would you like to take from your account?\n> $"; // run debit code
            cin >> debit;
            account -= debit; // update account balance
            cout << "\nYou have successfully withdrawn $" << fixed << setprecision(2) << debit << " from your bank account. Your new balance is: $" << fixed << setprecision(2) << account << endl;
        }
        else if (transactionInput == "2") // if they picked 2
        {
            cout << "How much would you like to deposit into your account?\n> $"; // run credit code
            cin >> credit;
            account += credit; // update account balance
            cout << "\nYou have successfully deposited $" << fixed << setprecision(2) << credit << " into your bank account. Your new balance is: $"  << fixed << setprecision(2) <<  account << endl;
        }
        else
        {
            cout << "Invalid input. Please enter a valid number\n";
        }

        transactionCount++; // adds to transaction count until it reaches desired transaction
    }

    cout << "Your final balance: $" << fixed << setprecision(2) << account << endl;  
    return 0;
}

/*
#include <iomanip>
#include <string>
#include <iostream> // necessity

using namespace std; // shorten our cout statements! make sure to have semicolon

int main() // ALL C++ programs require the function main
{ // opening bracket for the code
    string transactionInput;
    int transaction, transactionCount = 0;
    double debit, credit, account;

    cout << "Please input your account balance!\n> $"; // prompts user to input their current balance
    cin >> account; // inputs their balance into variable account
    cout << "\nHow many transactions will you be making today?\n> "; // asks user how many transactions will be made
    cin >> transaction; // inputs transaction count

    while (transactionCount < transaction) // repeat until the number of transactions is reached
    {
        cout << "\nWhat type of transaction would you like to make today?\n\n[1] Debit\n[2] Credit\n\n> "; // prompts user to pick an option
        cin >> transactionInput; // takes user input

        if (transactionInput == "1") // if they picked 1
        {
            cout << "\n\nHow much would you like to take from your account?\n> $"; // run debit code
            cin >> debit;
            account -= debit; // update account balance
            cout << "\nYou have successfully withdrawn $" << fixed << setprecision(2) << debit << " from your bank account. Your new balance is: $" << fixed << setprecision(2) << account << endl;
        }
        else if (transactionInput == "2") // if they picked 2
        {
            cout << "How much would you like to deposit into your account?\n> $"; // run credit code
            cin >> credit;
            account += credit; // update account balance
            cout << "\nYou have successfully deposited $" << fixed << setprecision(2) << credit << " into your bank account. Your new balance is: $"  << fixed << setprecision(2) <<  account << endl;
        }
        else
        {
            cout << "Invalid input. Please enter a valid number\n";
        }

        transactionCount++; // adds to transaction count until it reaches desired transaction
    }

    cout << "Your final balance: $" << fixed << setprecision(2) << account << endl;  
    return 0;
}
*/
