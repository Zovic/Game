#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct record
{
	char artist[20];
	char album[20];
	char song[20];
	char genre[20];
	int length;
	int played;
	int rating;
} Record;

typedef struct node
{
	struct record data;
	struct node* pNext;
	struct node* pPrev;
} Node;

int menu();

Record load(Node **pHead);
void store(Node **pHead, Record data);
void display (Node *pHead);
Record insert (Node **pHead);
void delete (Node **pHead);