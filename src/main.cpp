#include "../include/User.h"
#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;

  User user1 = User("Dorky98", "def@3r4f4");
  string username, password;

  cout << "Enter your username: ";
  cin >> username;

  cout << "Enter your password: ";
  cin >> password;

  if (user1.authenticate(username, password))
    cout << "Hello, " << user1.get_username() << endl;
  else
    cout << "Wrong username or password!, please try again.\n";

  return 0;
}