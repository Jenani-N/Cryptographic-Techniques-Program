#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

string caesarCipherEncryption(string message) {
    string encryption = "";
    for (int i = 0; i < message.length(); i++) {
        char charac = message[i];
        int k = 7;

        if (!isspace(charac)) { //checking for white space
            encryption += (int(charac) - '0' + k) % 75 + '0';
        }
        else {
            encryption += "  ";
        }
    }
    return encryption;
}

string caesarCipherDecryption(string message) {
    string decryption = "";
    for (int i = 0; i < message.length(); i++) {
        char charac = message[i];
        int k = 7;

        if (!isspace(charac)) { //checking for white space
            decryption += (int(charac) - '0' + 75) % 75 - k + '0';
        }
        else {
            decryption += "  ";
        }
    }
    return decryption;
}