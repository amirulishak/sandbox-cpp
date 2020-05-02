#include "../include/User.h"

User::User(const string &un, const string &pw) : username(un), password(pw) {}
string User::get_username() const { return username; }
bool User::authenticate(string &un, string &pw) {
  if ((username == un) && (password == pw))
    return true;
}
