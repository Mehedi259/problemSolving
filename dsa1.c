#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if (top < CAPACITY-1){
    top++;
    stack[top] = x;
    printf("Successfully added %d \n", x);
    }
    else
    {
        printf("no spaces");
    }

}
int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top --;
        return val;
    }else
    {
    printf("empty for pop");
    return - 1;
    }
}
int peek ()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("empty stack \n");
    return -1;
}
int main()
{


    peek();
    push(10);
    push(12);
    push(14);
    printf("pop item %d \n", pop());
    push(42);
    printf("the peek element is %d \n" , peek());
    return 0;
}
