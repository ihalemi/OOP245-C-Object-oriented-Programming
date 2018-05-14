// Ilias Halemi
// 062 111 133
// March 26th, 2018
#include "SavingsAccount.h" 

namespace sict {

	// define interest rate
	//
	const double interestRate = 0.05;

	// TODO: Allocator function
	//
	iAccount* CreateAccount(const char* type, double balance) {
		iAccount* p = nullptr;

		if (type[0] == 'S') {
			p = new SavingsAccount(balance, interestRate);
		}
		return p;
	}

} // end of namespace sict
