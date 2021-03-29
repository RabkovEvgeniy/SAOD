#include <PhoneNote.h>

PhoneNote::KeysForSort PhoneNote::key_for_sort = PhoneNote::Number;

PhoneNote::PhoneNote() {
  this->number = "-";
  this->name = "-";
  this->age = 0;
  this->organizations = "-";
}

void PhoneNote::edit_phone_note(string number, string name, int age,
                                string organizations) {
  this->number = number;
  this->name = name;
  this->age = age;
  this->organizations = organizations;
}

string PhoneNote::get_number() { return number; }

string PhoneNote::get_name() { return name; }

int PhoneNote::get_age() { return age; }

string PhoneNote::get_organizations() { return organizations; }

void PhoneNote::set_key_for_sort(PhoneNote::KeysForSort key) {
  PhoneNote::key_for_sort = key;
}

bool PhoneNote::operator<(PhoneNote &note) {
  switch (PhoneNote::key_for_sort) {
  case Number:
    return this->number < note.number;
  case Name:
    return this->name < note.name;
  case Age:
    return this->age < note.age;
  case Organizations:
    return this->organizations < note.organizations;
  }
  return 0;
}

ostream &operator<<(ostream &os, PhoneNote &note) {
  cout << "Name: " << note.get_name() << endl;
  cout << "Number: " << note.get_number() << endl;
  cout << "Age: " << note.get_age() << endl;
  cout << "Organizations " << note.get_organizations() << endl;
  return os;
}
