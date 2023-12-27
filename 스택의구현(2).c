//스택을 포함해서 모든 변수를 메모리 스택 공간에 저장하면 메모리 효율이 나빠진다
//메모리 힙 공간을 적절히 활용하는 코드(malloc)을 보여준다면 면접관의 픽
#include <stdio.h>
#include <stdbool.h>

typedef int element;
#define MAX_STACK_SIZE 10 // 상수를 지정, 전부 대문자

typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack* s);
bool isFull(Stack* s);
bool isEmpty(Stack* s);
void push(Stack* s, element data);
element pop(Stack* s);
element peek(Stack* s);

int main() {
    Stack *s = malloc(sizeof(Stack));
    int choice;
    int data;
    initStack(s);
    do {
        printf("1:push, 2:pop, 0:exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("데이터 입력: ");
                scanf("%d", &data);
                push(s, data);
                break;
            case 2:
                if (isEmpty(&s)) {
                    printf("스택이 비어있습니다.\n");
                } else {
                    printf("pop 데이터: %d\n", pop(s));
                }
                break;
            case 0:
                break;
            default: // 1, 2, 0 모두 아닌 값을 입력하면 이곳을 처리
                printf("잘못된 입력입니다.\n");
        }
    } while (choice != 0);
}

// 스택 초기화 (스택의 요소들을 전부 삭제)
void initStack(Stack* s) {
    // top 포인터를 -1로 변경해주기만 하면 된다.
    s->top = -1;
}

bool isFull(Stack* s) {
    return (s->top == MAX_STACK_SIZE - 1);
}

bool isEmpty(Stack* s) {
    return (s->top == -1);
}

void push(Stack* s, element data) {
    // 가득찼다면? 푸시 거절
    if (isFull(s)) {
        printf("Stack is full\n");
        return;
    }
    // 아니면 푸시
    s->data[++(s->top)] = data;
}

element pop(Stack* s) {
    // 아니면 팝
    return s->data[(s->top)--];
}

element peek(Stack* s) {
    return s->data[s->top];
}