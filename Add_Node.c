#include "Header.h"

void Add_Node(Node** p_Head, Node** p_Tail, Node* p_P, Student_Information* p_Temp) {
	if (*p_Head != NULL) {
		p_P = *p_Tail;
		p_P->Next = (Node*)malloc(sizeof(Node));

		if (p_P->Next != NULL) {
			*p_Tail = p_P->Next;
			memcpy_s(&((*p_Tail)->Student), sizeof(Student_Information), p_Temp, sizeof(Student_Information));
			(*p_Tail)->Next = NULL;
			(*p_Tail)->Prev = p_P;
		}
		else {
			printf_s("*p_Head is NULL!!");
		}
	}
	else {

		*p_Head = (Node*)malloc(sizeof(Node));

		if (*p_Head != NULL) {
			*p_Tail = *p_Head;
			memcpy_s(&((*p_Tail)->Student), sizeof(Student_Information), p_Temp, sizeof(Student_Information));
			(*p_Tail)->Next = NULL;
			(*p_Tail)->Prev = NULL;
		}

		else {
			printf_s("*p_Head is NULL!!");
		}
	}
}