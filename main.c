#include <stdio.h>
#include <stdlib.h>

#include "RBtree.h"

int reserve_check_number;

void group_20_air_print();
int main() {
	
	RBtree t = RBtree_create();
	group_20_air_print(); //air print
	
	int reserve_number;

	while (1) {
		printf(" 1  : ���� �ϱ� \n");
		printf(" 2  : ���� ��ȸ \n");
		printf(" 3  : ���� ��� \n\n");


		while (1) {

			int temp_number = 0; //RBtree�� ���� �Ҷ� ����� ����

			scanf("%d", &reserve_number);
			printf("\n\n");

			if (reserve_number == 1) {

				printf("�̸� : ");
				scanf("%s", reservation[reserve_check_number].name, 10);

				printf("����� : ");
				scanf("%s", reservation[reserve_check_number].source, 20);

				printf("������ : ");
				scanf("%s", reservation[reserve_check_number].destination, 20);


				printf("��� ��¥ : ");
				scanf("%d", &reservation[reserve_check_number].date);

				printf("������ �Ϸ��Ͽ����ϴ�.\n");
				printf("���� ��ȣ��  %d  �Դϴ�\n\n", reserve_check_number);

				//temp_number = reserve_check_number;
				array_RBTree[reserve_check_number] = reserve_check_number;
				RBtree_insert(t, (void*)array_RBTree[reserve_check_number], compare_int);
			//	printf("%d \n\n ", reserve_check_number);
				reserve_check_number++;
			//	print_tree(t);
				break;
			}
			else if (reserve_number == 2) {
				int check=0;

				printf("���� ��ȣ�� �Է��ϼ��� : ");
				scanf("%d", &check);
				printf("\n\n");
				if (RBtree_search_node(t->root, check) != NULL) {

					printf("���� ��ȣ : %d\n", reservation[check].reservation_number);
					printf("�� �̸� : %s\n", reservation[check].name, 10);
					printf("�����     : %s\n", reservation[check].source);
					printf("������    : %s\n", reservation[check].destination);
					printf("��߳�¥     : %d\n\n", reservation[check].date);
					print_tree(t);
				}

				else if(RBtree_search_node(t->root, check) == NULL)
					printf("��ȸ���� �ʴ� ��ȣ �Դϴ�.\n\n");
				break;
			}
			else if (reserve_number == 3) {
				int check;
				printf("���� ��ȣ�� �Է��ϼ��� : ");
				scanf("%d", &check);
				printf("\n\n");
				if (RBtree_search_node(t->root, check) != NULL) {
					RBtree_delete(t, (void*)check, compare_int);
					printf("������ ��ҵǾ����ϴ�.\n\\n");
				}
				else printf("��ȸ���� �ʴ� ��ȣ �Դϴ�.\n\n");
				break;
			}
			else {
				printf("�ٽ� �Է����ּ��� !\n\n ");
			}

		}
	/*	for (int i = 0; i < reserve_check_number; i++) {
			printf("name : %s\n", reservation[i].name, 10);
			printf("Source :%s\n", reservation[i].source, 20);
			printf("Destination :%s\n", reservation[i].destination, 20);
			printf("Date : %d\n", reservation[i].date);

		}*/
	}
	
	/*for (int i = 0; i < reserve_check_number; i++) {
		printf("name : %s\n", reservation[i].name, 10);
		printf("Source :%s\n", reservation[i].source, 20);
		printf("Destination :%s\n", reservation[i].destination, 20);
		printf("Date : %d\n", &reservation[i].date);
	
	}
	/*printf("name : %s\n", reservation[reserve_check_number-1].name, 10);
	printf("Source :%s\n", reservation[reserve_check_number-1].source, 20);
	printf("Destination :%s\n", reservation[reserve_check_number-1].destination, 20);
	printf("Date : %d\n", &reservation[reserve_check_number-1].date);
	*/

	return 0;

}

void group_20_air_print() {
	printf("         **** 20�� ****\n");
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