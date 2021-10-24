#include "Header.h"

void Printdata(Node** p_Head, Node* p_P, int p_Count) {
	if (*p_Head != NULL) {

		p_P = *p_Head;

		printf_s("\n---------------------------------------------------------------------\n");
		printf_s("  연번   이름   국어   영어   역사   수학   과학   총점     평균\n");
		printf_s("---------------------------------------------------------------------\n");

		for (int i = 0; i < p_Count; i++) {
			printf_s("   %d    %s   %d     %d     %d     %d     %d     %d    %f  \n", i + 1, p_P->Student.Name, p_P->Student.Kor, p_P->Student.Eng, p_P->Student.History, p_P->Student.Math, p_P->Student.Science, p_P->Student.Total, p_P->Student.Avg);
			p_P = p_P->Next;
		}
		printf_s("\n\n");
	}
	else {
		printf_s("\n\n값이 없습니다.\n");
	}
}