#include<stdio.h>
#include<stdlib.h>
int n, top = -1, *stack;
void push(int x)
{
    if(top==n)
        return;
    stack[++top]=x;
}

int pop()
{
    if(top==-1) 
    return -1;
    return stack[top--];
}
void display()
{
    if(top==-1)
    {
        printf("Stack is Empty\n");
    }
    for(int i=0 ; i<=top ; i++)
    printf("->%d\n",stack[i]);
}
int main()
{
n = 10;
stack = (int*)malloc(n*sizeof(int));
push(5);
push(3);
push(6);
push(3);
display();
pop();
pop();
display();
printf("Top Element: %d\n",stack[0]);
return 0;
} 