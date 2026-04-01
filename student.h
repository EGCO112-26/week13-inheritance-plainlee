#include "MU_Person.h"


class student:public MU_person{
private:
          double gpa; 
  
public:
    student(long=111 ,double=2.5,string="Nattawut",long=555 );
    ~student();
    void display(); // display_person
   
};

student::student(long i, double g,string s,long nid):MU_person(i,s,nid)                                                                      {
// Finish constructor to set all values
        gpa=g;
        name=s;
        id=i;
         cout<<"MU student constructor  "<<gpa<<endl;
         
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}


void student::display(){
  //Finish Display function
  display_person();
  cout<<" Gpa "<<gpa<<endl;
}

// #ifndef STUDENT_H
// #define STUDENT_H

// #include <iostream>
// #include <string>
// #include "MU_Person.h"
// using namespace std;

// class student : public MU_person {
// private:
//     double gpa; 
  
// public:
//     student(long = 111, double = 2.5, string = "Nattawut", long = 555);
//     ~student();
//     void display(); 
// };

// // ส่งค่า i, s, nid ไปให้ constructor ของ MU_person จัดการ
// student::student(long i, double g, string s, long nid) : MU_person(i, s, nid) {
//     // กำหนดแค่ค่า gpa เพราะ id กับ name ถูกจัดการโดย MU_person แล้ว
//     gpa = g;
//     cout << "MU student constructor  " << gpa << endl;
// }

// void student::display() {
//     // ฟังก์ชันนี้จะโชว์ id, name, และ gpa ตามที่คอมเมนต์ต้องการ
//     display_person(); // เรียกใช้ฟังก์ชันของคลาสแม่เพื่อแสดง id และ name
//     cout << " gpa: " << gpa << endl;
// }

// student::~student() {
//     cout << "-------" << endl;
//     cout << "student destructor " << gpa << endl; 
// }

// #endif