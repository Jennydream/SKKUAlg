#include <stdio.h>
#include <stdlib.h>

#include "RBtree.h"

int reserve_check_number; //RBtree 배열에 저장할 값

void group_20_aircraft_print();
int main() {
	
	RBtree t = RBtree_create();
	group_20_aircraft_print(); //air print
	
	int reserve_number;

	while (1) {
		printf(" 1  : 예약 하기 \n");
		printf(" 2  : 예약 조회 \n");
		printf(" 3  : 예약 취소 \n\n");


		while (1) {


			scanf("%d", &reserve_number);
			printf("\n\n");

			if (reserve_number == 1) {

				printf("이름 : ");
				scanf("%s", reservation[reserve_check_number].name, 10);

				printf("출발지 : ");
				scanf("%s", reservation[reserve_check_number].source, 20);

				printf("도착지 : ");
				scanf("%s", reservation[reserve_check_number].destination, 20);


				printf("출발 날짜 : ");
				scanf("%d", &reservation[reserve_check_number].date);

				printf("예약을 완료하였습니다.\n");
				printf("예약 번호는  %d  입니다\n\n", reserve_check_number);

	
				array_RBTree[reserve_check_number] = reserve_check_number;
				RBtree_insert(t, (void*)array_RBTree[reserve_check_number], compare_int);
				reserve_check_number++; 

				break;
			}
			else if (reserve_number == 2) {
				int check=0;

				printf("예약 번호를 입력하세요 : ");
				scanf("%d", &check);
				printf("\n\n");
				if (RBtree_search_node(t->root, check) != NULL) {

					printf("예약 번호 : %d\n", reservation[check].reservation_number);
					printf("고객 이름 : %s\n", reservation[check].name, 10);
					printf("출발지     : %s\n", reservation[check].source);
					printf("도착지    : %s\n", reservation[check].destination);
					printf("출발날짜     : %d\n\n", reservation[check].date);
					print_tree(t);
				}

				else if(RBtree_search_node(t->root, check) == NULL)
					printf("조회되지 않는 번호 입니다.\n\n");
				break;
			}
			else if (reserve_number == 3) {
				int check;
				printf("예약 번호를 입력하세요 : ");
				scanf("%d", &check);
				printf("\n\n");
				if (RBtree_search_node(t->root, check) != NULL) {
					RBtree_delete(t, (void*)check, compare_int);
					printf("예약이 취소되었습니다.\n\\n");
				}
				else printf("조회되지 않는 번호 입니다.\n\n");
				break;
			}
			else {
				printf("다시 입력해주세요 !\n\n ");
			}

		}
	
	}
	

	return 0;

}

void group_20_aircraft_print() {
	printf("         **** 20조 ****\n");
	printf("                      ___\n");
	printf("                      \\\\ \\ \n");
	printf("                       \\\\ `\\ \n");
	printf("    ___                 \\\\  \\ \n");
	printf("   |    \\                \\\\  `\\ \n");
	printf("   |_____\\                \\    \\ \n");
	printf("   |______\\                \\    `\\\n");
	printf("   |       \\                \\     \\ \n");
	printf("   |      __\\__---------------------------------._. \n");
	printf(" __|---~~~__o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_[][\\__ \n");
	printf("|___                         /~      )                \\__ \n");
	printf("    ~~~---..._______________/      ,/_________________/ \n");
	printf("                           /      / \n");
	printf("                          /     ,/ \n");
	printf("                         /     / \n");
	printf("                        /    ,/ \n");
	printf("                       /    /\n");
	printf("                      //  ,/\n");
	printf("                     //  /\n");
	printf("                    // ,/\n");
	printf("                   //_/\n");
	printf("          _  _\n");
	printf("         ( `   )_\n");
	printf("        (    )    `)\n");
	printf("      (_   (_ .  _) _)\n");
	printf("                                     _\n");
	printf("                                    (  )\n");
	printf("     _ .                         ( `  ) . )\n");
	printf("   (  _ )_                      (_, _(  ,_)_)\n");
	printf(" (_  _(_ ,)\n\n\n");
}