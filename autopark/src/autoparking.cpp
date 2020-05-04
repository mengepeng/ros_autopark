/******************************************************************
 * Filename: autoparking.cpp
 * Version: v1.0
 * Author: Meng Peng
 * Date: 2020-04-28
 * Description: define global variables and funtions for this project
 * 
 ******************************************************************/

#include "autopark/autoparking.h"

const float range_diff = 0.2;           // range difference to distinguish turn point 
const float distance_search = 2;        // maximum distance between car and parking space
const float parallel_width = 6;         // minimum width of parallel parking space
const float parallel_length = 2.5;      // minimum length of parallel parking space
const float perpendicular_width = 2.5;  // minimum width of perpendicular parking space
const float perpendicular_length = 5;   // minimum length of perpendicular parking space
const float car_width = 1.8;            // minimum width of car
const float car_length = 4.8;           // minimum length of car