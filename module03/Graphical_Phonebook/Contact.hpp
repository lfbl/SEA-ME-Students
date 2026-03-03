#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <QString>

class Contact
{
private:
    QString name;
    QString nickname;
    QString phoneNumber;
    QString email;

public:
    Contact();
    Contact(const QString& name, const QString& nickname, 
            const QString& phoneNumber, const QString& email);
    
    // Getters
    QString getName() const;
    QString getNickname() const;
    QString getPhoneNumber() const;
    QString getEmail() const;
    
    // Setters
    void setName(const QString& name);
    void setNickname(const QString& nickname);
    void setPhoneNumber(const QString& phoneNumber);
    void setEmail(const QString& email);
    
    // Utility
    bool isValid() const;
};

#endif
