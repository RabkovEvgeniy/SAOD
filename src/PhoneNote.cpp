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

string PhoneNote::get_number() { return this->number; }

string PhoneNote::get_name() { return this->name; }

int PhoneNote::get_age() { return this->age; }

int PhoneNote::get_organizations() { return this->organizations; }

void PhoneNote::set_key_for_sort(KeysForSort key) { PhoneNote::key = key; }

bool PhoneNote::operator<(&PhoneNote note) {
  switch (PhoneNote::key) {
  case Number:
    return this->number < note->number;
  case Name:
    return this->name < note->name;
  case Age:
    return this->age < note->age;
  case Organizations:
    return this->organizations < note->organizations;
  }
}

ostream &operator<<(ostream &os, const PhoneNote &note) {
  cout << "Name: " << note.get_name << endl;
  cout << "Number: " << note.get_number << endl;
  cout << "Age: " << note.age << endl;
  cout << "Organizations " << note.get_organizations << endl;
}
