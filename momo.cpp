#include <iostream>
using namespace std;

int main(){
	int option, number, balance, amount, pin;
	balance = 1000;
	pin = 0000;
	while(true){
		cout << endl << "1. Transfer money" << endl;
		cout << "2. Check balance" << endl;
		cout << "3. Reset pin" << endl;
		cout << "4. Exit" << endl;
		cout << endl << "Choose an option: ";
		cin >> option;
		
		
		if(option == 1){
			cout << "Enter mobile number: ";
			cin >> number;
			
			cout << "Amount: ";
			cin >> amount;
			balance = balance - amount;
			
			cout << "Enter your MoMo Pin: ";
			cin >> option;
			
			
			for(int i = 0; i < 3; i++){
				if(option != pin){
					cout << "Invalid pin" << endl;
					cout << "Re-enter your current pin: " << endl;
					cin >> option;
				} else if(i == 2){
					return 0;
				}else{
					break;
				}
			}
			
			cout << "An amount of GHC" << amount << " sent to " << number << ". Current balance is " << balance << endl;
			
		}else if(option == 2){
			
			cout << "Enter your MoMo Pin: ";
			cin >> option;
			
			for(int i = 0; i < 3; i++){
				if(option != pin){
					cout << "Invalid pin" << endl;
					cout << "Re-enter your current pin: " << endl;
					cin >> option;
				} else if(i == 3){
					return 0;
				}else{
					break;
				}
			}
			cout << "Your balance is: " << balance << endl;
		} else if (option == 3){
			cout << "Enter your current pin: ";
			cin >> option;
			
			for(int i = 0; i < 3; i++){
				if(option != pin){
					cout << "Invalid pin" << endl;
					cout << "Re-enter your current pin: " << endl;
					cin >> option;
				} else if(i == 3){
					return 0;
				}else{
					break;
				}
			}
			cout << "Enter new pin: ";
			cin >> option;
			
			pin = option;
			cout << "Your new pin is: " << pin << endl;
			
		} else if (option == 4){
			cout << "Thank you for using our service." << endl << "We hope to see you again. Have a great day";
			return 0;
		} else {
			cout << "Invalid input" << endl;
			cout << "Re-enter option: ";
			cin >> option;
		}
	}
}

