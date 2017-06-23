
//This program calculates the monthly payment on a loan
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

    // Variables
double loan_amount, monthly_interest_rate, payment, number_of_payments, rate, amount_paid_back;

int main()
{
    // Get user inputs

    cout << "Enter loan amount: \t\t\t";
    cin >> loan_amount;

    // data validation for
    if(loan_amount < 0 || cin.fail())
    {
        cout << "Please check input and try again";
        exit(0);
    }
    // user enters the monthly interest rate as a percent
    cout << "Enter monthly % rate: \t\t\t";
    cin >> monthly_interest_rate;


    // data validation for annual interest rate
    if (monthly_interest_rate < 0 || cin.fail())
        {
            cout << "Please check input and try again";
            exit(0);
        }
    cout << "Enter number of payments: \t\t";
    cin >> number_of_payments;

    // data validation for annual interest rate
    if(number_of_payments < 0 || cin.fail())
    {
        cout << "Please check input and try again";
        exit(0);
    }

    rate = monthly_interest_rate;

    // calculate the monthly payments on a loan
    payment = ( pow(1 + rate, number_of_payments) * rate) / (pow(1 + rate, number_of_payments) - 1) * loan_amount;

    // calculates the amount paid on the loan
    amount_paid_back = payment * number_of_payments;

    if((pow(rate + 1, number_of_payments) - 1 <= 0))
    {
        system("cls");
        cout << "USER ERROR!";
        exit(0);
    }


    cout << endl;
    cout << setprecision(2)<< fixed << showpoint;
    cout << "Loan Amount: " << setw(15) << "$" << setw(6) << loan_amount << endl;
    cout << "Monthly Interest Rate: " << setw(5) << "$" << setw(6) << rate << "%" << endl;
    cout << "Number of Payments: " << setw(8) << "$" << setw(6) << number_of_payments <<  endl;
    cout << "Monthly Payment: " << setw(11) << "$" << setw(6) << payment <<  endl;
    cout << "Amount Paid Back: " << setw(10) << "$" << setw(6) << amount_paid_back <<  endl;
    cout << "Interest Paid: " << setw(13) << "$" << setw(6) << amount_paid_back - loan_amount <<  endl;




    return 0;
}
