#ifndef IENCRYPTOR_H
#define IENCRYPTOR_H

#include <string>

class IEncryptor {
public:
    virtual std::string encrypt(const std::string& data, int key) = 0;
    virtual std::string decrypt(const std::string& data, int key) = 0;
    virtual ~IEncryptor() = default;
};

#endif // IENCRYPTOR_H
