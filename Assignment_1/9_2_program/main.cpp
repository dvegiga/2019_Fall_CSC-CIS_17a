/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: devanv
 *
 * Created on September 30, 2019, 11:21 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int x = 0;
    int *ptr = nullptr; //ptr variable
    
    cout << "Please enter a value: ";
    cin >> x;
    
    //store the address of x in ptr
    ptr = &x;
    
    cout << "Your value in x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    return 0;
}

