#include "Header.h"

void Input_Add(Student_Information* p_Temp, int* p_Count) {
	*p_Count = (*p_Count) + 1;
	printf_s("\n\n%d�� �л��̸� �Է� : ", *p_Count);
	scanf_s("%s", p_Temp->Name, sizeof(p_Temp->Name));
	rewind(stdin);
	printf_s("���� ���� �Է� : ");
	scanf_s("%d", &(p_Temp->Kor));
	rewind(stdin);
	printf_s("���� ���� �Է� : ");
	scanf_s("%d", &(p_Temp->Eng));
	rewind(stdin);
	printf_s("���� ���� �Է� : ");
	scanf_s("%d", &(p_Temp->History));
	rewind(stdin);
	printf_s("���� ���� �Է� : ");
	scanf_s("%d", &(p_Temp->Math));
	rewind(stdin);
	printf_s("���� ���� �Է� : ");
	scanf_s("%d", &(p_Temp->Science));
	rewind(stdin);

	p_Temp->Total = p_Temp->Kor + p_Temp->Eng + p_Temp->History + p_Temp->Math + p_Temp->Science;
	p_Temp->Avg = (float)(p_Temp->Total) / (float)(Subject);

}