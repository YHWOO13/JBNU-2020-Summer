#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode {
	int data;
	listPointer link;
}listNode;

listPointer head = NULL;

int create(int num) {
	/* temp: 구조체 형식으로 된 주소값을 받는 자료형
	   (listNode*)malloc(sizeof(listNode)):
	   listNode형식(여기서는 구조체)으로 listNode크기 만큼의 데이터를 할당 할 것이다(여기서 임의의 주소값이 배정된다.
	   따라서 18번째 줄의 의미는 temp라는 접시에 malloc함수를 넣는 의미인 것. 
	   malloc은 함수다. 아마 이 함수 자체 내에서 주소값을 return 할 것이라는 추측*/
	listPointer temp = (listNode*)malloc(sizeof(listNode));
	listPointer trace = head;
	
	temp->data = num;
	temp->link = NULL;
	
	if (head) {
		/*밑에서 trace->link에다가 temp의 주소값을 넣으니 NULL이 아니다. */
		while (trace->link) {
			/*이제 여기서부터 두번째 링크를 계속 도는 거다.*/
			trace = trace->link;
		}
		trace->link = temp;
	}
	else {
		//위에서 뱅뱅 돈것이 다 끝나고 마지막것을 head에 붙여준다는 것. 당연한 것. 
		head = temp;
	}
	return 0;
}

int size() {
	listPointer size = head;
	int s = 0;

	if (head) {
		while (size->link) {
			size = size->link;
			s++;
		}
	}
	else s;

	return s;
}

int get(int num) {
	listPointer get = head;
	int count = 0;

	while (count < num) {
		count++;
		get = get->link;
	}
	return printf("%d",get->data);
}

int insert(int num1, int num2) {
	int count = 0;
	int	count1 = 0;

	listPointer new= (listNode*)malloc(sizeof(listNode));

	listPointer forward = head;
	listPointer backward = head;
	
	new->data = num2;
	new->link = NULL;

	if (head) {
		if (num1 == 0) {
			new->link = head;
			head = new;
		}
		else if (num1 > 0) {
			while (count1 < num1) {
				count1++;
				backward = backward->link;
			}
			while (count < num1-1) {
				count++;
				forward = forward->link;
			}
			forward->link = new;
			new->link = backward;
		}
		else
			printf("Out of order.\n");
	}
	else
		head = new;
}

int delete(int num) {
	int count1 = 0;
	int count2 = 0;

	listPointer forward = head;
	listPointer backward = head;
	
	// 지운 자리는 free시켜주기 위한 임시저장. 
	listPointer temp = NULL;

	if (head) {
		if (num == 0) {
			while (count1 < 1)
			{
				count1++;
				forward=forward->link;
				head = forward;
			}
		}
		else {
			while (count1 < num) {
				count1++;
				backward = backward->link;
			}
			while (count2 < num-1) {
				count2++;
				forward = forward->link;
			}
			temp = forward->link;
			forward->link = backward->link;
		}
	}
	free(temp);
}

void visualize() {
	listPointer visual=head;
	printf("[");
	/*조건문에서 true면 넘기고 false면 끝난다. c언어에서 true==1이고 false==0이기 때문에
	밑에와 같이 코딩을 한다.(null은 0값으로 출력 된다)*/ 
	for (; visual; visual= visual->link) {
		printf("%4d ", visual->data);
	}
	printf("]\n");
}

int main() {
	int option,num,index,squeeze,space = 0;

	while (1) {
		printf("1. create \n");
		printf("2. get \n");
		printf("3. insert \n");
		printf("4. delete \n");
		printf("5. visualize \n");
		printf("6. stop \n");

		printf("Write the option: ");
		scanf_s("%d", &option);

if (option == 1) {
			printf("Write a number: ");
			scanf_s("%d", &num);
			create(num);
		}
		else if (option == 2) {
			printf("Write the index: ");
			scanf_s("%d", &index);
			if (index < 0) {
				printf("-------------Out of order.------------- \n");
			}
			else if (index > size()) {
				printf("-------------Out of order.------------- \n");
			}
			else if (size() == 0) {
				printf("[");
				get(index);
				printf("]\n");
			}
			else{
				printf("[");
				get(index);
				printf("]\n");
			}
		}
		else if (option == 3) {
			if (head) {
				printf("Write the space: ");
				scanf_s("%d", &space);
				if (space > size()) {
					printf("-------------Out of order.------------- \n");
				}
				else if (space < 0) {
					printf("-------------Out of order.------------- \n");
				}
				else {
					printf("Write a number: ");
					scanf_s("%d", &squeeze);
					insert(space, squeeze);
				}
			}
			else {
				printf("Write a number: ");
				scanf_s("%d", &squeeze);
				insert(space, squeeze);
			}
		}
		else if (option == 4) {

			if (head) {
				printf("Write the space: ");
				scanf_s("%d", &space);
				if (space > size()) {
					printf("-------------Out of order.------------- \n");
				}
				else if (space < 0) {
					printf("-------------Out of order.------------- \n");
				}
				else if (size() == 0) {
					delete(space);
				}
				else
					delete(space);
			}
			else {
				if (size() == 0)
				{
					printf("-------------Out of order.------------- \n");
					printf("-----------There is nothing.----------- \n");
				}
				else {
					printf("Write a space: ");
					scanf_s("%d", &space);
					delete(space);
				}
			}
		}
		else if (option == 5) {
			visualize();
		}
		else if (option == 6) {
			printf("----------------------------Quit linked list.----------------------------");
			break;
		}
		else {
			printf("--------------------------There is no the option.-------------------------- \n");
		
		}
	}
	return 0;
}