#include<stdio.h>
void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}
int main() {
    printf("Hello, User!\n");
    printf("Enter your name: ");
    char name[50];
    scanf("%49s", name);
    greet(name);
    return 0;
  
}