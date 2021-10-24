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
			printf_s("    [메뉴]\n");
			printf_s("-------------------\n");
			printf_s("  1. 학생성적 입력\n");
			printf_s("  2. 학생성적 출력\n");
			printf_s("  3. 성적순대로 정렬\n");
			printf_s("  4. 학생이름 검색\n");
			printf_s("  5. 학생삭제\n");
			printf_s("  6. 학생자료 저장\n");
			printf_s("  7. 프로그램 종료\n");
			printf_s("-------------------\n");
			printf_s(" 선택 : ");


			scanf_s("%d", &select);
			rewind(stdin);

			if (select == 1) {
				Input_Add(&Temp, &Count);
				if (Overlap_Check(&Head, P, &Temp, &Count) == 1) {
					Add_Node(&Head, &Tail, P, &Temp);
				}
				else {
					printf_s("\n\n이름이 중복되었습니다.\n다시 입력해주시기 바랍니다.\n\n");
				}
				memset(&Temp, 0, sizeof(Temp));
			}
			else if (select == 2) {
					Printdata(&Head, P, Count);
			}
			else if (select == 3) {
				while (1) {
					printf_s("\n\n---------------------\n");
					printf_s("\n1. 일등부터 정렬\n");
					printf_s("2. 꼴등부터 정렬\n");
					printf_s("3. 목차로 나가기\n");
					printf_s("---------------------\n");
					printf_s("선택 : ");

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
						printf_s("잘 못 누르겼습니다.\n다시 선택해주시기 바랍니다.\n\n");
					}
				}
			}

			else if (select == 4) {
				printf_s("\n검색할 대상 학생 이름 : ");
				scanf_s("%s", Temp_Name, sizeof(Temp_Name));
				Student_Name_Search(&Head, P, Temp_Name, Count);
				memset(Temp_Name, 0, sizeof(Temp_Name));
			}
			else if (select == 5) {
				if (Head != NULL) {
					printf_s("\n삭제할 대상 학생 이름 : ");
					scanf_s("%s", Temp_Name, sizeof(Temp_Name));
					DeleteStudent(&Head, &Tail, P, &Count, Temp_Name);
					memset(Temp_Name, 0, sizeof(Temp_Name));
				}
				else {
					printf_s("\n입력된 값이 없습니다.\n");
				}
			}
			else if (select == 6) {
				Save(&S, &Head, P);
			}
			else if (select == 7) {

				while (1) {

					printf_s("\n\n---------------------\n");
					printf_s("\n1. 저장하고 종료\n");
					printf_s("2. 저장하지 않고 바로 종료\n");
					printf_s("3. 취소\n");
					printf_s("---------------------\n");
					printf_s("선택 : ");

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
						printf_s("\n\n잘 못 누르겼습니다.\n다시 선택해주시기 바랍니다.\n\n\n");
					}
				}
				if (End_select == 1) {
					break;
				}
				else if (End_select == 2) {
					break;
				}
				else {
					printf_s("\n\n목차로 돌아갑니다.\n");
				}
			}
			else {
				printf_s("\n\n잘 못 누르셨습니다.\n다시 선택하시기 바랍니다.\n\n\n");
			}
		}

	Delete_Node(&Head, &Tail, P);

	return(0);
}