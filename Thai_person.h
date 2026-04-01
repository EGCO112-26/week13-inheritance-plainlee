// class Thai_person{
//     private: 
//         long nat_id;
//     public: 
//         Thai_person(int);
//  };
 
//  Thai_person::Thai_person(int nid){
//     nat_id=nid;
//     cout<<"Nat Id:"<<nat_id<<endl;
//  } เก็บไว้ เผื่อพัง

#ifndef THAI_PERSON_H
#define THAI_PERSON_H

#include <iostream>
using namespace std;

class Thai_person {
private: 
    long nat_id;
public: 
    Thai_person(long = 0);
    ~Thai_person();
    void display_thai();
};
 
Thai_person::Thai_person(long nid) {
    nat_id = nid;
}

Thai_person::~Thai_person() {
    // ปล่อยว่างไว้เพื่อไม่ให้ output รกเกินไป (ตามตัวอย่างที่ไม่ได้โชว์ว่าถูกลบ)
}

void Thai_person::display_thai() {
    cout << " Nat Id: " << nat_id << endl;
}

#endif