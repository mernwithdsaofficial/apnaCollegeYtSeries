//  Variables

#include <iostream>
using namespace std;

// int main(){
//     age = 25;
//     fullName;
//     price
//     return 0;
// }


//  Primitive  Data types  

// int   memory place 4 Bytes     8 Bits => 1 Byte
// char   memory place 1 Byte
// float   memory place 4 Bytes
// bool   memory place 1 Byte
// double   memory place 8 Bytes


// int main(){
    // int age = 25;
    // char grade = 'a';
    // float PI = 3.14;
    // bool isSafe = true;      // true => 1 & false => 0
    // double price = 100.99;

    // cout << price << endl;
    // cout << sizeof(age) << endl;
    // return 0;
// }


//  type conversion and type casting


// int main(){
//     char grade = 'a';   // sky value A is 65 and a is 97

//     int value = grade;
//     cout << value << endl;
//     return 0;
// }


int main(){
    double price = 100.99;


    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}