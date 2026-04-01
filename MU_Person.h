#include "Thai_person.h"
class MU_person:public Thai_person{
private: 
protected:
  long id;
  string name;


public:
  MU_person(long=112 ,string ="Prapaporn",long=1234);
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n,long nid):Thai_person(nid){
      // Set up all MU_Person values
        id=x;
        name=n;
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show info of person"
  cout<<" id "<< id<<endl;
  cout<<" name "<<name<<endl;
    
}

#ifndef MU_PERSON_H
#define MU_PERSON_H

// #include <iostream>
// #include <string>
// #include "Thai_person.h"
// using namespace std;

// class MU_person : public Thai_person {
// protected: // ใช้ protected เพื่อให้คลาสลูก (student) สามารถเข้าถึง id และ name ได้หากจำเป็น
//     long id;
//     string name;

// public:
//     MU_person(long = 112, string = "Prapaporn", long = 1234);
//     void display_person();
//     ~MU_person();
// };

// MU_person::MU_person(long x, string n, long nid) : Thai_person(nid) {
//     // กำหนดค่าให้ MU_person
//     id = x;
//     name = n;
//     cout << "MU person constructor " << id << endl;
// }

// void MU_person::display_person() {
//     cout << " id: " << id << endl;
//     cout << " name: " << name << endl;
// }

// MU_person::~MU_person() {
//     cout << "Destructor id=" << id << endl;
// }

#endif