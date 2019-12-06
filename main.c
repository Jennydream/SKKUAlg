#include <stdio.h>
#include <stdlib.h>

#include "RBtree.h"

int reserve_check_number; //RBtree �迭�� ������ ��

void group_20_aircraft_print();
int main() {
	
	RBtree t = RBtree_create();
	group_20_aircraft_print(); //air print
	
	int reserve_number;

	while (1) {
		printf(" 1  : ���� �ϱ� \n");
		printf(" 2  : ���� ��ȸ \n");
		printf(" 3  : ���� ��� \n\n");


		while (1) {


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

	
				array_RBTree[reserve_check_number] = reserve_check_number;
				RBtree_insert(t, (void*)array_RBTree[reserve_check_number], compare_int);
				reserve_check_number++; 

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
	
	}
	

	return 0;

}

void group_20_aircraft_print() {
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