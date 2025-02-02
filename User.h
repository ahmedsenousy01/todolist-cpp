#pragma once

#include <string>
#include "Validator.h"
using namespace std;

class User
{
private:
  int id;
  string name, email, password;
  static inline int idcounter = 0;

public:
  User()
  {
    this->id = ++idcounter;
    this->name = "empty";
    this->email = "empty";
    this->password = "empty";
  }

  User(string name, string email, string password)
  {
    this->id = ++idcounter;
    this->setName(name);
    this->setEmail(email);
    this->setPassword(password);
  }

  int getId() { return this->id; }
  string getName() { return this->name; }
  string getEmail() { return this->email; }
  string getPassword() { return this->password; }

  bool setName(string name)
  {
    if (Validator::isValidName(name))
    {
      this->name = name;
      return true;
    }
    return false;
  }

  bool setEmail(string email)
  {
    if (Validator::isValidEmail(email))
    {
      this->email = email;
      return true;
    }
    return false;
  }

  bool setPassword(string password)
  {
    if (Validator::isValidPassword(password))
    {
      this->password = password;
      return true;
    }
    return false;
  }
};
