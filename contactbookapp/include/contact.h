#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include<Phonenumber.h>
using namespace std;

class contact
{
   private:
    int id;
    string name;
    string gender;
    string city;
    string note;
    Phonenumber phone[4];
    int x;

public:
    Contact()
    {

    }

    Contact(int id, string name, string gender, string city, string note)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->city = city;
        this->note = note;
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    string getGender()
    {
        return gender;
    }

    void setCity(string city)
    {
        this->city = city;
    }

    string getCity()
    {
        return city;
    }

    void setNote(string note)
    {
        this->note = note;
    }

    string getNote()
    {
        return note;
    }

    void Information()
    {
        cout << "Please, Enter Your Id : ";
        cin >> id;

        cout << "Please, Enter Your Name : ";
        cin >> name;

        cout << "Please, Enter Your Gender : ";
        cin >> gender;

        cout << "Please, Enter Your City : ";
        cin >> city;

        cout << "Please, Enter Your Note : ";
        cin >> note;
        cout<<"Enter your phone(1:4)";
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            phone[i].information();
        }
    }

    void print()
    {
        cout << "Your Id : " << id;
        cout << "Your Name : " << name;
        cout << "Your Gender : " << gender;
        cout << "Your City : " << city;
        cout << "Your Note : " << note;
        for (int i=0;i<x;i++)
        {
            phone[1].print();
        }
    }
};

#endif // CONTACT_H

