#include <Arduino.h>
#include <config.h>
#include <data.h>
#include <hand.h>

sPosition stringToSPos(String inStr){
    sPosition resultSP ={
        inStr.substring(1,3).toInt(),
        inStr.substring(4,6).toInt(),
        inStr.substring(7,9).toInt(),
        inStr.substring(10,12).toInt(),
        inStr.substring(13,15).toInt(),
    };
    return resultSP;
}


void run_request(String req){
switch (req[0])
{
case '*':
    moveHand(stringToSPos(req));
    break;

default:
    break;
}
}