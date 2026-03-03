#include "Contact.hpp"

Contact::Contact() 
    : name(""), nickname(""), phoneNumber(""), email("")
{
}

Contact::Contact(const QString& name, const QString& nickname, 
                 const QString& phoneNumber, const QString& email)
    : name(name), nickname(nickname), phoneNumber(phoneNumber), email(email)
{
}

QString Contact::getName() const
{
    return name;
}

QString Contact::getNickname() const
{
    return nickname;
}

QString Contact::getPhoneNumber() const
{
    return phoneNumber;
}

QString Contact::getEmail() const
{
    return email;
}

void Contact::setName(const QString& name)
{
    this->name = name;
}

void Contact::setNickname(const QString& nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const QString& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setEmail(const QString& email)
{
    this->email = email;
}

bool Contact::isValid() const
{
    return !name.isEmpty() && !phoneNumber.isEmpty();
}
