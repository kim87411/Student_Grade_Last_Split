#pragma once
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<memory.h>

#define Str 20
#define Subject 5.0

typedef struct student_information {
	char Name[Str];
	int Kor;
	int Eng;
	int History;
	int Math;
	int Science;
	int Total;
	float Avg;
}Student_Information;


typedef struct node {
	struct node* Next;
	struct node* Prev;
	Student_Information Student;
}Node;


void Load(FILE** p_L, Node** p_Head, Node** p_Tail, int* p_Count, Node* p_P, Student_Information p_Temp);

void Input_Add(Student_Information* p_Temp, int* p_Count);

int Overlap_Check(Node** p_Head, Node* p_P, Student_Information* p_Temp, int* p_Count);

void Add_Node(Node** p_Head, Node** p_Tail, Node* p_P, Student_Information* p_Temp);

void Printdata(Node** p_Head, Node* p_P, int p_Count);

void Ascending(Node** p_Head, Node* p_P, Student_Information Temp, int* p_Count);

void Descending(Node** p_Head, Node* p_P, Student_Information Temp, int* p_Count);

void Student_Name_Search(Node** p_Head, Node* p_P, char* p_Temp_Name, int p_Count);

void DeleteStudent(Node** p_Head, Node** p_Tail, Node* p_P, int* p_Count, char* p_Temp_Name);

void Save(FILE** p_S, Node** p_Head, Node* p_P);

void Delete_Node(Node** p_Head, Node** p_Tail, Node* p_P);