#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main()
{
    const int ONE = 1,
        HUNDRED = 100;

    float principal,
        interest_rate,
        amount_after_a_year,
        total_interest,
        amount_in_savings;

    int times_interest_compounded;

    cout << endl;
    cout << "What is the pricipal balance in the" << endl;
    cout << "savings account? ";
    cin >> principal;

    cout << "What is the interest rate? %";
    cin >> interest_rate;

    cout << "What is the number of times the interest\n";
    cout << "is compounded during a year? ";
    cin >> times_interest_compounded;

    interest_rate /= HUNDRED;
    amount_after_a_year = principal * pow((ONE + interest_rate / times_interest_compounded), times_interest_compounded);

    total_interest = amount_after_a_year - principal;

    interest_rate *= HUNDRED;

    cout << setprecision(2) << fixed << right << endl;

    cout << "Interest Rate:        " << setw(10);
    cout << interest_rate << '%' << endl;

    cout << "Times Compounded:     " << setw(10);
    cout << times_interest_compounded << endl;

    cout << "Principal:           $" << setw(10);
    cout << principal << endl;

    cout << "Interest:            $" << setw(10);
    cout << total_interest << endl;

    cout << "Amount after a year: $" << setw(10);
    cout << amount_after_a_year << endl;

    return 0;
}