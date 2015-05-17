/* 
 * File:   main.cpp
 * Author: elliot
 *
 * Created on May 14, 2015, 7:29 PM
 */

#include <cstdlib>
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
    
    char incomingData[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    zero = &incomingData[0];
    one = &incomingData[1];
    two = &incomingData[2];
    
    
    int num0 = 0;
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    
    while(comm->IsConnected()){
        comm->WriteData(zero, 1);
        Sleep(1000);
        comm->WriteData(one, 1);
        Sleep(1000);
        comm->WriteData(two, 1);
        Sleep(1000);
        comm->WriteData(one, 1);
        Sleep(1000);
        comm->WriteData(zero, 1);
        Sleep(1500);

    }
    
    return 0;
}

