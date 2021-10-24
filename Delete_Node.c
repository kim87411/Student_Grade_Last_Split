#include "Header.h"

void Delete_Node(Node** p_Head, Node** p_Tail, Node* p_P) {
	if (*p_Head != NULL && *p_Tail != NULL) {
		while (*p_Head != NULL) {
			p_P = *p_Head;
			*p_Head = (*p_Head)->Next;
			free(p_P);

			p_P = NULL;
		}
		*p_Tail = NULL;
		*p_Head = NULL;
	}
	else {
		printf_s("\n");
	}
}