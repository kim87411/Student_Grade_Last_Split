#include "Header.h"

void Ascending(Node** p_Head, Node* p_P, Student_Information Temp, int* p_Count) {

	int num = *p_Count;

	if (*p_Head != NULL) {
		p_P = *p_Head;

		if (p_P->Next != NULL) {
			for (int i = 0; i < num; i++) {
				for (int j = 0; j < num - i - 1; j++) {

					if (p_P->Next->Student.Total > p_P->Student.Total) {

						memcpy_s(&Temp, sizeof(Student_Information), &(p_P->Student), sizeof(Student_Information));
						memcpy_s(&(p_P->Student), sizeof(Student_Information), &(p_P->Next->Student), sizeof(Student_Information));
						memcpy_s(&(p_P->Next->Student), sizeof(Student_Information), &Temp, sizeof(Student_Information));

					}
					p_P = p_P->Next;
				}
				p_P = *p_Head;
			}
		}
		else {
			printf_s("\n\n값이 하나만 있어 일등부터 정렬이 안 됩니다.");
		}
	}
	else {
		printf_s("\n\n값이 없습니다.\n");
	}
}