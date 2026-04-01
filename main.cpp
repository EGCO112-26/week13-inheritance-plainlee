#include <iostream>
using namespace std;
#include "student.h"
//#include "MU_Person.h"

int main(){
/*MU_person m;
m.display_person();*/
 
  student m1(6613121,2,"Vivi",123456),m2(6813252),m3;
 
  m1.display(); // id gpa name
  m1.display_person();
  // student m1(6613118,3.9,"Atom");
//student m2(6613112),m3,*p;
// cout<<endl<<"======="<<endl;
  //m1.display_person(); //id

//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa

// #include <iostream>
// #include <string>
// using namespace std;
// #include "student.h"

// int main() {
//     cout << "======= Creating Students =======" << endl;
//     student m1(6613121, 2.5, "Vivi", 123456);
//     student m2(6813252); 
//     student m3;
    
//     cout << endl << "======= Displaying m1 =======" << endl;
//     // แสดง id, name และ gpa ผ่านฟังก์ชันที่ปรับปรุงแล้ว
//     m1.display(); 
    
//     cout << endl << "======= Dynamic Allocation =======" << endl;
//     // ทดสอบสร้าง Object แบบ Pointer และเคลียร์หน่วยความจำ
//     student *p = new student(6613265, 1.7, "Hok", 987654);
//     p->display();
//     delete p;
  
//     cout << endl << "======= End of Main =======" << endl;
//     return 0;
// }