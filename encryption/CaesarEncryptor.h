#include "CaesarEncryptor.h"

std::string CaesarEncryptor::encrypt(const std::string& data, int key) {
    std::string encrypted;
    for (char ch : data) {
        encrypted += ch + key;
    }
    return encrypted;
}

std::string CaesarEncryptor::decrypt(const std::string& data, int key) {
    return encrypt(data, -key);
}
