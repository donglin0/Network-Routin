#pragma once
#include <stdlib.h>
#include <malloc.h>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

typedef int DataType;
#define MaxSize 20
#define MaxVertices 20
#define MaxWeight 9999

typedef struct
{
	DataType list[MaxSize];
	int size;
}SeqList;

//void ListInitiate(SeqList* L);
//int ListLength(SeqList L);
//int ListInsert(SeqList* L, int i, DataType x);
//int ListDelete(SeqList* L, int i, DataType* x);
//int ListGet(SeqList L, int i, DataType* x);





