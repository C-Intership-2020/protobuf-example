#include <iostream>

#include "my.pb.h"

int main() {

    Person p1;
    p1.set_name("MyName11111");
//    p1.set_id(15);

//-------
    std::string serialized;
    p1.SerializeToString(&serialized);

//----------------
    Person p2;
    p2.ParseFromString(serialized);
    if(p2.has_email())
    {
        auto sss = p2.email();
    }



    MyTask task;
    for(int i = 0; i < 5; i++) {
        Person p = task.add_person();
        p.set_name("sdfsdfsfs");
    }


    std::cout << "Person2 name -> " << p2.name() << std::endl;
    return 0;
}
