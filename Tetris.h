#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>


void initialWindow(HANDLE hOut);//��ʼ������
void initialPrint(HANDLE hOut);//��ʼ������
void gotoXY(HANDLE hOut, int x, int y);//�ƶ����
void roundBlock(HANDLE hOut, int block[4][4]);//������ɷ��鲢��ӡ����һ������λ��
bool collisionDetection(int block[4][4], int map[21][12], int x, int y);//�����ײ
void printBlock(HANDLE hOut, int block[4][4], int x, int y);//��ӡ����
void clearBlock(HANDLE hOut, int block[4][4], int x, int y);//��������
void myLeft(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//����
void myRight(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//����
void myUp(HANDLE hOut, int block[4][4], int map[21][12], int x, int& y);//˳ʱ����ת90��
int myDown(HANDLE hOut, int block[4][4], int map[21][12], int& x, int y);//��������
void myStop(HANDLE hOut, int block[4][4]);//��Ϸ��ͣ
void gameOver(HANDLE hOut, int block[4][4], int map[21][12]);//��Ϸ����
void eliminateRow(HANDLE hOut, int map[21][12], int& val, int& fraction, int& checkpoint);//�ж��Ƿ������в����·�ֵ