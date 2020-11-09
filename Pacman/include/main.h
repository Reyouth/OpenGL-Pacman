//main.h
#ifndef _MAIN_H_
#define _MAIN_H_
#include <vector>
#include <GL/glut.h>
#include <iostream>
#include <cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <deque>
#include <stdlib.h>
using namespace std;

extern bool replay;         //????????
extern bool over;             //????????
extern float squareSize;     //??????
extern float xIncrement;     // x??
extern float yIncrement;     // y??
extern int rotation;         // ??
extern float* monster1;     //???????????
extern float* monster2;     //???????????
extern float* monster3;     //???????????
extern float* monster4;     //???????????
extern vector<int> border;     //???

//????? (?????????)
extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;
extern deque<float> food;
extern vector<vector<bool>> bitmap;     // 2d????????
extern bool* keyStates;                 // ????
extern int points;                         // ??
#endif                                                                

