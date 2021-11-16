#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

#define KEY 'B'

using namespace std;

char encryptVigenere(char);
char decryptVigenere(char);

/* Encrypt a String using Vigenere Cipher */
string vigenereCipherEncryption(string message) {
  string encryption = "";

  for (int i = 0; i < message.length(); i++) {
    encryption += encryptVigenere(message[i]);
  }

  return encryption;
}

/* Encrypt a char using Vigenere Cipher */
char encryptVigenere(char charac) {
  char encryptedChar = '\0'; // NULL

  /* 
   * Check if it's space character 
   */
  if (charac == ' ') {
    return charac;
  }

  /* 
   * As the Vigenere cypher only supports alphabetic, we have to convert
   * lowercase to uppercase, so we can get the same result in the
   * requirement (assuming k = 'B'):
   *
   * Original Message: natural foundations for information technology
   * Encrypted Message: obuvsbm gpvoebujpot gps jogpsnbujpo ufdiopmphz
   *
   * A = 65, Z = 90
   * a = 97, z = 122
   *
   * Subtract 32 if character lies between a and z
   */
  if ((charac >= 'a') && (charac <= 'z')) {
    charac -= 32;
  }

  /* Apply formula if it's a valid input (A-Z) */
  if ((charac >= 'A') && (charac <= 'Z')) {
    char formula = (int(charac) + KEY) % 26;
    encryptedChar = formula + 'A';
  }

  return encryptedChar;
}

/* Decrypt a string using Vigenere Cipher */
string vigenereCipherDecryption(string message) {
  string decryption = "";

  for (int i = 0; i < message.length(); i++) {
    decryption += decryptVigenere(message[i]);
  }

  return decryption;
}

/* Decrypt a char using Vigenere Cipher */
char decryptVigenere(char charac) {
  char decryptedChar = '\0';

  if (charac == ' ') {
    return charac;
  }

  /* Same logic for decryption if it's lowercase */
  if ((charac >= 'a') && (charac <= 'z')) {
    charac -= 32;
  }

  if ((charac >= 'A') && (charac <= 'Z')) {
    char formula = (int(charac) - KEY + 26) % 26;
    decryptedChar = formula + 'A';
  }

  return decryptedChar;
}
