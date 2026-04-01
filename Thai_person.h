class Thai_person{
    private: 
        long nat_id;
    public: 
        Thai_person(int);
 };
 
 Thai_person::Thai_person(int nid){
    nat_id=nid;
    cout<<"Nat Id:"<<nat_id<<endl;
 }

// #ifndef THAI_PERSON_H
// #define THAI_PERSON_H

// #include <iostream>
// using namespace std;

// class Thai_person {
// private: 
//     long nat_id;
// public: 
//     // เปลี่ยนจาก int เป็น long เพื่อให้ตรงกับชนิดของ nat_id
//     Thai_person(long = 0); 
// };
 
// Thai_person::Thai_person(long nid) {
//     nat_id = nid;
//     cout << "Nat Id: " << nat_id << endl;
// }

// #endif