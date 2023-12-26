#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100
typedef int element;
typedef struct{
   element data[STACK_SIZE];
   element top;
   
}Stack;

Stack s;

void initStack(){
   s.top = -1;
}
bool isEmpty(){
   return (s.top == -1);
}
bool isFull(){
return ((STACK_SIZE-1) == s.top);
}    
void push(element item){
   if(isFull()){
      printf("Stack is Full\n");
      return;
   }
   s.data[++s.top] = item;
}
void pop(){ //반환후 제거
   if(isEmpty()){
      printf("Stack is empty\n");
   }
   else printf("%d\n", s.data[s.top--]);
}
void peek(){//반환만
   if(isEmpty()){
      printf("Stack is empty\n");
   }
   else printf("%d\n", s.data[s.top]);
}

int main(){
   initStack();
   push(3);
   push(4);
   push(5);
   peek();
   pop();
   pop();
   peek();
}