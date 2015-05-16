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
    char incomingData[256] = "";
    
    while(comm->IsConnected()){
        comm->WriteData(incomingData, 1);
        Sleep(500);
        comm->WriteData(incomingData, 1);
        Sleep(500);
        comm->WriteData(incomingData, 2);
        Sleep(500);
    }
    
    return 0;
}

