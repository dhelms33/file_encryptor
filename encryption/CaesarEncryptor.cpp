#ifndef CAESARENCRYPTOR_H
#define CAESARENCRYPTOR_H

#include "IEncryptor.h"

class CaesarEncryptor : public IEncryptor {
public:
    std::string encrypt(const std::string& data, int key) override;
    std::string decrypt(const std::string& data, int key) override;
};

#endif // CAESARENCRYPTOR_H
