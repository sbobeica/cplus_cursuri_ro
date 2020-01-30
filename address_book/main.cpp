#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contact
{
    string name;
    string tel_number;
    string email;
};

using AddressBook = vector<Contact>;

bool add(AddressBook &address_book, Contact contact)
{
    for (int i=0; i<address_book.size(); ++i){
        if (contact.name<address_book[i].name)

    }

}
//erase()
//edit()
//find()
int main()
{
    AddressBook main_address_book;
    add(main_address_book, { "gigel", "07532456743", "gigel@gmail.com" });
    add(main_address_book, { "aurel", "07532456743", "gigel@gmail.com" });
    add(main_address_book, { "zeu", "07532456743", "gigel@gmail.com" });
    add(main_address_book, { "beatrice", "07532456743", "gigel@gmail.com" });
//    Contact c1 {

//        "gigel",

//        "07532456743",

//        "gigel@gmail.com"

//    };

//    add(a, c1);



//    Contact c2;

//    c2.name = "gigel";

//    c2.tel_number = "07532456743";

//    c2.email = "gigel@gmail.com";



//    add(a, c2);

    return 0;

}
