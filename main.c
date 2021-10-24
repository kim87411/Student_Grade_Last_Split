#include "Header.h"

int main(void) {

	FILE* L = NULL;
	FILE* S = NULL;

	Node* Head = NULL;
	Node* Tail = NULL;
	Node* P = NULL;

	Student_Information Temp;
	memset(&Temp, 0, sizeof(Temp));

	int Count = 0;
	int select = 0;
	int Buble_Sort_select = 0;
	int End_select = 0;

	char Temp_Name[Str];

	Load(&L, &Head, &Tail, &Count, P, Temp);
	memset(&Temp, 0, sizeof(Temp));

	while (1) {
		
			printf_s("\n-------------------\n");
			printf_s("    [�޴�]\n");
			printf_s("-------------------\n");
			printf_s("  1. �л����� �Է�\n");
			printf_s("  2. �л����� ���\n");
			printf_s("  3. ��������� ����\n");
			printf_s("  4. �л��̸� �˻�\n");
			printf_s("  5. �л�����\n");
			printf_s("  6. �л��ڷ� ����\n");
			printf_s("  7. ���α׷� ����\n");
			printf_s("-------------------\n");
			printf_s(" ���� : ");


			scanf_s("%d", &select);
			rewind(stdin);

			if (select == 1) {
				Input_Add(&Temp, &Count);
				if (Overlap_Check(&Head, P, &Temp, &Count) == 1) {
					Add_Node(&Head, &Tail, P, &Temp);
				}
				else {
					printf_s("\n\n�̸��� �ߺ��Ǿ����ϴ�.\n�ٽ� �Է����ֽñ� �ٶ��ϴ�.\n\n");
				}
				memset(&Temp, 0, sizeof(Temp));
			}
			else if (select == 2) {
					Printdata(&Head, P, Count);
			}
			else if (select == 3) {
				while (1) {
					printf_s("\n\n---------------------\n");
					printf_s("\n1. �ϵ���� ����\n");
					printf_s("2. �õ���� ����\n");
					printf_s("3. ������ ������\n");
					printf_s("---------------------\n");
					printf_s("���� : ");

					scanf_s("%d", &Buble_Sort_select);
					rewind(stdin);

					if (Buble_Sort_select == 1) {
						Ascending(&Head, P, Temp, &Count);
						break;
					}
					else if (Buble_Sort_select == 2) {
						Descending(&Head, P, Temp, &Count);
						break;
					}
					else if (Buble_Sort_select == 3) {
						break;
					}
					else {
						printf_s("�� �� ��������ϴ�.\n�ٽ� �������ֽñ� �ٶ��ϴ�.\n\n");
					}
				}
			}

			else if (select == 4) {
				printf_s("\n�˻��� ��� �л� �̸� : ");
				scanf_s("%s", Temp_Name, sizeof(Temp_Name));
				Student_Name_Search(&Head, P, Temp_Name, Count);
				memset(Temp_Name, 0, sizeof(Temp_Name));
			}
			else if (select == 5) {
				if (Head != NULL) {
					printf_s("\n������ ��� �л� �̸� : ");
					scanf_s("%s", Temp_Name, sizeof(Temp_Name));
					DeleteStudent(&Head, &Tail, P, &Count, Temp_Name);
					memset(Temp_Name, 0, sizeof(Temp_Name));
				}
				else {
					printf_s("\n�Էµ� ���� �����ϴ�.\n");
				}
			}
			else if (select == 6) {
				Save(&S, &Head, P);
			}
			else if (select == 7) {

				while (1) {

					printf_s("\n\n---------------------\n");
					printf_s("\n1. �����ϰ� ����\n");
					printf_s("2. �������� �ʰ� �ٷ� ����\n");
					printf_s("3. ���\n");
					printf_s("---------------------\n");
					printf_s("���� : ");

					scanf_s("%d", &End_select);
					rewind(stdin);

					if (End_select == 1) {
						Save(&S, &Head, P);
						break;
					}
					else if (End_select == 2) {
						break;
					}
					else if (End_select == 3) {
						break;
					}
					else {
						printf_s("\n\n�� �� ��������ϴ�.\n�ٽ� �������ֽñ� �ٶ��ϴ�.\n\n\n");
					}
				}
				if (End_select == 1) {
					break;
				}
				else if (End_select == 2) {
					break;
				}
				else {
					printf_s("\n\n������ ���ư��ϴ�.\n");
				}
			}
			else {
				printf_s("\n\n�� �� �����̽��ϴ�.\n�ٽ� �����Ͻñ� �ٶ��ϴ�.\n\n\n");
			}
		}

	Delete_Node(&Head, &Tail, P);

	return(0);
}