#pragma once

#include <string>
#include "Validator.h"
using namespace std;

class Todo
{
private:
  int id;
  string title, description, status;
  int creatorId;
  static inline int idcounter = 0;

public:
  Todo()
  {
    this->id = ++idcounter;
    this->title = "empty";
    this->description = "empty";
    this->status = "not started";
    this->creatorId = 0;
  }

  Todo(string title, string description, string status, int creatorId)
  {
    this->id = ++idcounter;
    this->setTitle(title);
    this->setDescription(description);
    this->setStatus(status);
    this->setCreatorId(creatorId);
  }

  int getId() { return this->id; }
  string getTitle() { return this->title; }
  string getDescription() { return this->description; }
  string getStatus() { return this->status; }
  int getCreatorId() { return this->creatorId; }

  bool setTitle(string title)
  {
    if (Validator::isValidTitle(title))
    {
      this->title = title;
      return true;
    }
    return false;
  }

  bool setDescription(string description)
  {
    if (Validator::isValidDescription(description))
    {
      this->description = description;
      return true;
    }
    return false;
  }

  bool setStatus(string status)
  {
    if (Validator::isValidStatus(status))
    {
      this->status = status;
      return true;
    }
    return false;
  }

  bool setCreatorId(int creatorId)
  {
    if (Validator::isValidCreatorId(creatorId))
    {
      this->creatorId = creatorId;
      return true;
    }
    return false;
  }
};
