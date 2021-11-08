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

            switch (charac) {
                case '0':
                    decryption += "t";
                    break;
                case '1':
                    decryption += "u";
                    break;
                case '2':
                    decryption += "v";
                    break;
                case '3':
                    decryption += "w";
                    break;
                case '4':
                    decryption += "x";
                    break;
                case '5':
                    decryption += "y";
                    break;
                case '6':
                    decryption += "z";
                    break;
                default:
                    decryption += (int(charac) - '0' + 75) % 75 - k + '0';
                    break;
           }
        }
        else {
            decryption += "  ";
        }
    }
    return decryption;
}
