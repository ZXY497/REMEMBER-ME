#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>


void initialWindow(HANDLE hOut);//初始化窗口
void initialPrint(HANDLE hOut);//初始化界面
void gotoXY(HANDLE hOut, int x, int y);//移动光标
void roundBlock(HANDLE hOut, int block[4][4]);//随机生成方块并打印到下一个方块位置
bool collisionDetection(int block[4][4], int map[21][12], int x, int y);//检测碰撞
void printBlock(HANDLE hOut, int block[4][4], int x, int y);//打印方块
void clearBlock(HANDLE hOut, int block[4][4], int x, int y);//消除方块
void myLeft(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//左移
void myRight(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//右移
void myUp(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//顺时针旋转90度
int myDown(HANDLE hOut, int block[4][4], int map[21][12], int& x, int y);//加速下落
void myStop(HANDLE hOut, int block[4][4]);//游戏暂停
void gameOver(HANDLE hOut, int block[4][4], int map[21][12]);//游戏结束
void eliminateRow(HANDLE hOut, int map[21][12], int& val, int& fraction, int& checkpoint);//判断是否能消行并更新分值