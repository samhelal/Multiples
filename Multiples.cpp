/*(Multiples) Write a program that reads in two integers and
determines and prints if the first is a multiple of the second.
[Hint: Use the remainder operator ( % ).] (c++ how to program)*/ 
// program determines the first is a multiple of the second 
#include <iostream>
using namespace std ;

int main () {

    int a(0) , b(0) , c(0) ;
    cout << "Enter two numbers : " ;
    cin >> a >>b ;
    c = a % b ;
    if (c==0) {
        cout << " THE first is a multiple of the second " <<endl ;
    } 
    if (c!=0) {
        cout << " THE first is a not multiple of the second " <<endl ;
    } 

}