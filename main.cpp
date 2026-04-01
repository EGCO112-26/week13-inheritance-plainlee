// #include <iostream>
// using namespace std;
// #include "student.h"
// //#include "MU_Person.h"

// int main(){
// /*MU_person m;
// m.display_person();*/
 
//   student m1(6613121,2,"Vivi",123456),m2(6813252),m3;
 
//   m1.display(); // id gpa name
//   m1.display_person();
//   // student m1(6613118,3.9,"Atom");
// //student m2(6613112),m3,*p;
// // cout<<endl<<"======="<<endl;
//   //m1.display_person(); //id

//      cout << endl << "======= Dynamic Allocation =======" << endl;
//      // ทดสอบสร้าง Object แบบ Pointer และเคลียร์หน่วยความจำ
//      student *p = new student(6613265, 1.7, "Hok", 987654);
//      p->display();
//      delete p;

//   return 0;
//    }

// // Add constructor --> set name 
// // modify display() -->id/name/gpa

//เก็บไว้ เผื่อพัง

#include <iostream>
#include <cstdlib>
#include <string>


#include "NODE.h"
#include "Thai_person.h"
#include "MU_Person.h"
#include "student.h"
#include "LL.h"


#include "NODE.cpp"
#include "LL.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    LL myLL;

    for (int i = 1; i < argc; i += 3) {
        if (i + 2 < argc) {
            long id = atol(argv[i]);
            double gpa = atof(argv[i+1]);
            string name = argv[i+2];
            
            NODE* A = new student(id, gpa, name, 1234); 
            myLL.add_node(A);
        }
    }

    cout << endl;
    
    myLL.show_all();
    
    cout << endl;

    return 0;
}

