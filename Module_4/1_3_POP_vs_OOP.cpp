//  POP vs OOP Comparison Program
//     o Write two small programs : one using Procedural Programming (POP) to calculate the area of a rectangle,
//       and another using Object-Oriented Programming (OOP) with a class and object for the same task.
//     o Objective : Highlight the difference between POP and OOP approaches.


// POP 
// #include<iostream>
// using namespace std;
// float rectangle_area(){
    // float len,wid;
    // cout<<"\n enter the lenght of rectangle : ";
    // cin>>len;
    // cout<<"\n enter the width of rectangle : ";
    // cin>>wid;

    // float area = len*wid;

    // cout<<"\n the area of rectangle is : "<<area;    
// }
// int main(){
//     rectangle_area();
// }


// OOP
#include<iostream>
using namespace std;
class rectangle{
    public: 
    float len,wid;
    public:
    void res(){
        float len,wid;
        cout<<"\n enter the lenght of rectangle : ";
        cin>>len;
        cout<<"\n enter the width of rectangle : ";
        cin>>wid;

        float area = len*wid;

        cout<<"\n the area of rectangle is : "<<area;   
    }
};
int main(){
    rectangle rec;
    rec.res();
}


// difrence between the POP nan OOP : 

    // POP : POP standes for procedural orianted programing language
    //       it is the function base programing language 
    //       it is the divides into many functions 
    //       modification in this program is difficult and it will iffects the entire program

    // OOP : OOP standes for object orianted programing language 
    //       it is the object based programing language 
    //       it is the divides into many objectes
    //       modificatin in this program is easy because the objectes are independent