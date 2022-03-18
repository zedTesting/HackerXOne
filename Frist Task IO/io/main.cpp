// Section 5
// Basic I/O using cin and cout 

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Your Balance: ";
    
    float balance {0},
    net_amount {0};
    cin >> balance;
    net_amount = balance * 0.7; // 7%
    
    cout << "\nYour Balance => " << balance << "\nThe Net Amount => " << net_amount << endl;
    
	return 0;
}
