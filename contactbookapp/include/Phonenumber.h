#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;

class Phonenumber
{
private:
    string phone;
    string tybe;
public:
    Phonenumber()
    {

    }

    Phonenumber(string phone, string tybe)
    {
        this->phone = phone;
        this->tybe = tybe;
    }

 void setPhone(string phone)
    {
        this->phone = phone;
    }

     void settybe(string tybe)
    {
        this->tybe = tybe;
    }

    string getphone()
    {
        return phone;
    }

    string gettybe()
    {
        return tybe;
    }

    void information()
    {
        cout << "Enter your phone number:";
        cin >> phone;
        cout << "Enter Tybe: ";
        cin >> tybe;
    }

    void print()
    {
        cout << "The Phone Number Is :" << phone << endl;
        cout << "The Tybe Is :" << tybe << endl;
    }
};

#endif // PHONENUMBER_H
