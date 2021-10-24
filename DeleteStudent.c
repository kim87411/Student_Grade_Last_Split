#include "Header.h"

void DeleteStudent(Node** p_Head, Node** p_Tail, Node* p_P, int* p_Count, char* p_Temp_Name) {
	int ss = *p_Count;

	if (*p_Head != NULL && *p_Tail != NULL) {

		p_P = *p_Head;

		while (p_P != NULL) {
			if (strcmp(p_P->Student.Name, p_Temp_Name) == 0) {
				if (p_P == *p_Head) {
					if ((*p_Head)->Next != NULL) {
						(*p_Head) = (*p_Head)->Next;
						free(p_P);
						p_P = NULL;
						(*p_Head)->Prev = NULL;
					}
					else {
						free(*p_Head);
						*p_Head = NULL;
					}
				}
				else if (p_P == *p_Tail) {
					*p_Tail = (*p_Tail)->Prev;
					free(p_P);
					p_P = NULL;
					(*p_Tail)->Next = NULL;

				}
				else {
					if (p_P != NULL) {
						p_P->Prev->Next = p_P->Next;
						p_P->Next->Prev = p_P->Prev;
						free(p_P);
						p_P = NULL;
					}
				}

				*p_Count = (*p_Count) - 1;

				break;
			}
			else {
				p_P = p_P->Next;
			}
		}

		if (ss == *p_Count) {
			printf_s("\n\n%s가 존재하지 않습니다.\n", p_Temp_Name);
		}
		else {
			printf_s("\n");
		}
	}

	else {
		printf_s("*p_head is NULL!!");
	}
}