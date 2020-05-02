#ifndef USER_H_
#define USER_H_
#include <string>

using std::string;

class User {
private:
  string username;
  string password;

public:
  User(const string &un, const string &pw);
  string get_username() const;
  bool authenticate(string &un, string &pw);
};

#endif
