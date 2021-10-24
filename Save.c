#include "Header.h"

void Save(FILE** p_S, Node** p_Head, Node* p_P) {

	p_P = *p_Head;

	if (*p_Head != NULL) {

		fopen_s(p_S, "C:\\Users\\kms41\\Desktop\\save_file\\Student_Save.bin", "wb");

		if (*p_S != NULL) {
			while (p_P != NULL) {
				fwrite(&(p_P->Student), sizeof(Student_Information), 1, *p_S);
				p_P = p_P->Next;
			}
			fclose(*p_S);
		}
		else {
			printf_s("\n");
		}
	}

	else {
		printf_s("\n");
	}
}