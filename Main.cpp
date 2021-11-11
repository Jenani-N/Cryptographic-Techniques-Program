#include <iostream>
#include <string>

using namespace std;

string vigenereCipherEncryption(string message);
string vigenereCipherDecryption(string message);
string caesarCipherEncryption(string message);
string caesarCipherDecryption(string message);

int main() {

	int type;
	int method;
	char loop;
	string msg;

	cout << "Welcome to Cryptographic Techniques Program" << endl;

	do {
		cout << "Please enter your selection ('1' or '2'):" << endl;
		cout << "1. Encrypt" << endl;
		cout << "2. Decrypt" << endl;
		cin >> type;
		if (type == 1) { //Choosing Encrypt
			cout << "Encrypt:" << endl << "Which cipher to use ('1' or '2')?" << endl << "1. Caesar cipher" << endl << "2. Vigenere cipher" << endl;
			cin >> method;
			if (method == 1) { //Choosing Caesar
				cout << endl << "Enter message: " << endl;
				cin.ignore();
				getline(cin, msg);
				cout << "Encrypted message: " << caesarCipherEncryption(msg) << endl;
			}
			else { // Choosing Vigenere
				cout << endl << "Enter message: ";
				cin.ignore();
				getline(cin, msg);
				cout << "Encrypted message: " << vigenereCipherEncryption(msg) << endl;
			}
		}
		if (type == 2) { //Choosing Decrypt
			cout << "Decrypt:" << endl << "Which cipher to use ('1' or '2')?" << endl << "1. Caesar cipher" << endl << "2. Vigenere cipher" << endl;
			cin >> method;
			if (method == 1) { //Choosing Caesar
				cout << endl << "Enter message: ";
				cin.ignore();
				getline(cin, msg);
				cout << "Encrypted message: " << caesarCipherDecryption(msg) << endl;
			}
			else { // Choosing Vigenere
				cout << endl << "Enter message: ";
				cin.ignore();
				getline(cin, msg);
				cout << "Encrypted message: " << vigenereCipherDecryption(msg) << endl;
			}
		}
		cout << "Do you wish to continue? ('C' to continue, 'E' to exit): ";
		cin >> loop;
		if (loop == 'E' || loop == 'e') {
			cout << endl << "Thank you!" << endl;
			return 0;
		}
	}
	while (loop == 'C' || loop == 'c');

}
