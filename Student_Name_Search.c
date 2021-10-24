#include "Header.h"

void Student_Name_Search(Node** p_Head, Node* p_P, char* p_Temp_Name, int p_Count) {

	p_P = *p_Head;
	int i = 1;

	if (*p_Head != NULL) {
		while (p_P != NULL) {
			if (strcmp(p_P->Student.Name, p_Temp_Name) == 0) {
				printf_s("\n---------------------------------------------------------------------\n");
				printf_s("  연번   이름   국어   영어   역사   수학   과학   총점     평균\n");
				printf_s("---------------------------------------------------------------------\n");
				printf_s("   %d    %s   %d     %d     %d     %d     %d     %d    %f  \n", i, p_P->Student.Name, p_P->Student.Kor, p_P->Student.Eng, p_P->Student.History, p_P->Student.Math, p_P->Student.Science, p_P->Student.Total, p_P->Student.Avg);
				break;
			}
			p_P = p_P->Next;
			i = i + 1;
		}

		if (p_P == NULL) {
			printf_s("\n\n찾는 학생이 없습니다.\n");
		}

	}
	else {
		printf_s("*p_Head is NULL!!");
	}
}