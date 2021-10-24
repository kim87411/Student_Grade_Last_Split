#include "Header.h"

void Input_Add(Student_Information* p_Temp, int* p_Count) {
	*p_Count = (*p_Count) + 1;
	printf_s("\n\n%d번 학생이름 입력 : ", *p_Count);
	scanf_s("%s", p_Temp->Name, sizeof(p_Temp->Name));
	rewind(stdin);
	printf_s("국어 성적 입력 : ");
	scanf_s("%d", &(p_Temp->Kor));
	rewind(stdin);
	printf_s("영어 성적 입력 : ");
	scanf_s("%d", &(p_Temp->Eng));
	rewind(stdin);
	printf_s("역사 성적 입력 : ");
	scanf_s("%d", &(p_Temp->History));
	rewind(stdin);
	printf_s("수학 성적 입력 : ");
	scanf_s("%d", &(p_Temp->Math));
	rewind(stdin);
	printf_s("과학 성적 입력 : ");
	scanf_s("%d", &(p_Temp->Science));
	rewind(stdin);

	p_Temp->Total = p_Temp->Kor + p_Temp->Eng + p_Temp->History + p_Temp->Math + p_Temp->Science;
	p_Temp->Avg = (float)(p_Temp->Total) / (float)(Subject);

}