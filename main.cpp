/* 
 * File:   main.cpp
 * Author: elliot
 *
 * Created on May 14, 2015, 7:29 PM
 */

#include <cstdlib>
#include <iostream>
#include "SerialClass.h"

using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {

    Serial* comm = new Serial("COM3");
    char *zero;
    char *one;
    char *two;
    
    char data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    zero = &data[0];
    one = &data[1];
    two = &data[2];
    
    int value;
    char* charVal;
    
    int num0 = 0;
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    
    while(comm->IsConnected()){
        
        for(int i = 0; i < 10; i++){
            //charVal = &data[i];
            comm->WriteData(&data[i], 1);
            Sleep(500);
        }

    }
    
    return 0;
}

