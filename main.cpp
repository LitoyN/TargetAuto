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
    char incomingData[5] = {0, 1, 2, 3, 4};
    
    int num0 = 0;
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    
    while(comm->IsConnected()){
        comm->WriteData(incomingData, 3);
        Sleep(250);
        comm->WriteData(incomingData, 3);
        Sleep(250);
        comm->WriteData(incomingData, 3);
        Sleep(1500);
    }
    
    return 0;
}

