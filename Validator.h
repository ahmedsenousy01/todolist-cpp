#pragma once

#include <string>
using namespace std;

class Validator
{
public:
  static bool isValidTitle(string title)
  {
    if (title.length() < 5)
      return false;
    return true;
  }

  static bool isValidDescription(string description)
  {
    if (description.length() < 5)
      return false;
    return true;
  }

  static bool isValidStatus(string status)
  {
    if (status != "not started" && status != "in progress" && status != "done")
      return false;
    return true;
  }

  static bool isValidCreatorId(int creatorId)
  {
    if (creatorId < 0)
      return false;
    return true;
  }

  static bool isValidId(int id)
  {
    if (id < 0)
      return false;
    return true;
  }

  static bool isValidEmail(string email)
  {
    if (email.length() < 5)
      return false;
    return true;
  }

  static bool isValidPassword(string password)
  {
    if (password.length() < 5)
      return false;
    return true;
  }

  static bool isValidName(string name)
  {
    if (name.length() < 5)
      return false;
    return true;
  }
};
