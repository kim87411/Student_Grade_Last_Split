#include "Header.h"

int Overlap_Check(Node** p_Head, Node* p_P, Student_Information* p_Temp, int* p_Count) {
	p_P = *p_Head;

	if (p_P != NULL) {
		while (p_P != NULL) {
			if (strcmp(p_P->Student.Name, p_Temp->Name) == 0) {
				*p_Count = (*p_Count) - 1;
				return(0);
			}
			p_P = p_P->Next;
		}
	}

	return(1);
}