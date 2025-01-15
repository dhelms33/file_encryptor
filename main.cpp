#include <iostream>
#include "encryption/CaesarEncryptor.h"
#include "encryption/FileProcessor.h"

int main() {
    CaesarEncryptor caesar;
    FileProcessor processor(&caesar);

    std::string inputFile = "sample.txt";
    std::string encryptedFile = "encrypted.txt";
    std::string decryptedFile = "decrypted.txt";
    int key;

    std::cout << "Enter encryption key: ";
    std::cin >> key;

    // Encrypt the file
    processor.processFile(inputFile, encryptedFile, key, true);
    std::cout << "File encrypted to " << encryptedFile << std::endl;

    // Decrypt the file
    processor.processFile(encryptedFile, decryptedFile, key, false);
    std::cout << "File decrypted to " << decryptedFile << std::endl;

    return 0;
}
