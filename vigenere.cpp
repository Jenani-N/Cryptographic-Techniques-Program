#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

string vigenereCipherEncryption(string message) {
    string encryption = "";
    for (int i = 0; i < message.length(); i++) {
        char charac = message[i];
        int k = 'c';
        char formula = (int(charac) + k) % 26;
        if (!isspace(charac)) { //checking for white space
            encryption += formula + '!';
        }
        else {
            encryption += "  ";
        }
    }
    return encryption;
}

string vigenereCipherDecryption(string message) {
    string decryption = "";
    for (int i = 0; i < message.length(); i++) {
        char charac = message[i];
        int k = 'b';
        char formula = (int(charac) - k + 26) % 26;
        if (!isspace(charac)) { //checking for white space
            if (int(charac) >= '!' && int(charac) <= ('@')) {
                decryption += formula + 26 +'!' + 63;
            }
            else {
                decryption += formula + '!';
            }
        }
        else {
            decryption += "  ";
        }
    }
    return decryption;
}

//int main() {
//
//    string str;
//    cout << "Enter message: ";
//    getline(cin, str);
//    cout << vigenereCipherEncryption(str) << endl;
//    cout << "Enter message for decryption: ";
//    getline(cin, str);
//    cout << vigenereCipherDecryption(str);
//
//}