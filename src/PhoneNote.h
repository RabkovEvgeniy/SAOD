#pragma once

#include <iostream>
#include <string>

using namespace std;

class PhoneNote {
public:
  enum KeysForSort { Number, Name, Age, Organizations };

  PhoneNote();

  void edit_phone_note(string number, string name, int age,
                       string organizations);

  string get_number();
  string get_name();
  int get_age();
  string get_organizations();

  static void set_key_for_sort(KeysForSort key);

  bool operator<(PhoneNote &note);

private:
  static KeysForSort key_for_sort;
  string number;
  string name;
  int age;
  string organizations;
};

ostream &operator<<(ostream &os, const PhoneNote &note);
