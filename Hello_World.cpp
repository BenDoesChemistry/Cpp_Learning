// This line allows for input and output streams
#include <iostream>
// This line allows for input and output of strings 
#include <sstream>
// This line allows for strings
#include <string>
// this is the boilerplate for the standard name space
using namespace std;

//This is the basics of a function for addition
int add(int first_num, int second_num){
    return first_num + second_num;
}

//This is the basics of a function for subtraction
int subtract(int first_num, int second_num){
    return first_num - second_num;
}

//Here I am using a for loop to complete multiplication. C++ does have a * operator but i wanted to demonstrate the for loop.
int multy(int first_num, int second_num){
    int final_num = 0;
    for (int i = 0;i < second_num; i++){
        final_num = final_num + first_num;
    }
    return final_num;
}
//Here I am using a while loop to complete power operations. C++ does not have a power operator natively so this is how you might build one with a for loop.
//I also wanted to show that you can clal functions in functions.
int power(int first_num, int second_num){
    int final_num =1;

    int iterate = 0;
    while (iterate < second_num){
        final_num = multy(final_num,first_num);
        iterate++;
    }
    return final_num;
}


// this is the main function where everything happens.
int main(){
    int num1 = 35;
    int num2 = 324;
    cout << "Hello_World\n" ;
    cout << num1 << " + " << num2 << " = " << add(5,3) << "\n";
    cout << num1 << " - " << num2 << " = " << subtract(num1,num2) << "\n"; 
    cout << num1 << " * " << num2 << " = " << multy(num1,num2) << "\n";
    cout << num1 << " ^ " << num2 << " = " << power(num1,num2);
    cout << "\nDone Running\n";
    return 0;
}