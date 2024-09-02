#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;

void push(int, int []);
void pop();
void countSize();

int main() {
    
    int* arr = (int*)malloc(sizeof(int) * 100000);
    int num;
    char string[20];
    scanf("%d", &num);

    int data;
    
    for (int i = 0; i < num; i++) {
        
        scanf("%s", string);

        if (strcmp(string, "push_back") == 0) {
            scanf("%d", &data);
            push(data, arr);
        }
        else if (strcmp(string, "pop_back") == 0) pop();
        else if (strcmp(string, "size") == 0) countSize();
        else if (strcmp(string, "get") == 0) {
            int command;
            scanf("%d", &command);
            printf("%d\n", arr[command - 1]);
        }
    }

    

    return 0;
}


void push(int data, int arr[]) {
    arr[++top] = data;
}

void pop() {
    top--;
}

void countSize() {
    printf("%d\n", top + 1);
}