#include "Header.h"

void Load(FILE** p_L, Node** p_Head, Node** p_Tail, int* p_Count, Node* p_P, Student_Information p_Temp) {
	fopen_s(p_L, "C:\\Users\\kms41\\Desktop\\save_file\\Student_Save.bin", "rb");
	if (*p_L != NULL) {
		while (fread(&p_Temp, sizeof(Student_Information), 1, *p_L) != 0) {
			if (*p_Head != NULL) {
				p_P = *p_Tail;
				p_P->Next = (Node*)malloc(sizeof(Node));

				if ((p_P)->Next != NULL) {

					*p_Tail = (p_P)->Next;

					memcpy_s(&((*p_Tail)->Student), sizeof(Student_Information), &p_Temp, sizeof(Student_Information));

					(*p_Tail)->Next = NULL;
					(*p_Tail)->Prev = p_P;

					*p_Count = (*p_Count) + 1;

				}
				else {
					printf_s("*p_Head is NULL!!");
				}
			}

			else {
				*p_Head = (Node*)malloc(sizeof(Node));

				if (*p_Head != NULL) {
					*p_Tail = *p_Head;
					memcpy_s(&((*p_Tail)->Student), sizeof(Student_Information), &p_Temp, sizeof(Student_Information));

					(*p_Tail)->Next = NULL;
					(*p_Tail)->Prev = NULL;

					*p_Count = (*p_Count) + 1;

				}
				else {
					printf_s("*p_Head is NULL!!");
				}
			}
		}
		fclose(*p_L);
	}
	else {
		printf_s("\n");
	}
}