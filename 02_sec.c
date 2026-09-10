#include <stdio.h>

/* Safe print function */
void safePrint(const void *ptr, int type)
{
    /* Check for NULL pointer */
    if (ptr==NULL)
     
    {
        printf("Null pointer, nothing to print\n");
        return;
    }

    /* Check type and print the corresponding value */
    if (type == 0)
        printf("Integer Value: %d\n", *(const int *)ptr);
    else if (type == 1)
        printf("Float Value: %.2f\n", *(const float *)ptr);
    else
        printf("Invalid type\n");
}

int main()
{
    int intArray[5];
    float floatArray[5];
    int *ip = intArray;
    float *fp = floatArray;
    int i, option, index;

    printf("Enter 5 integers:\n");

    /* Read 5 integers using pointer arithmetic */
for (i=0;i<5;i++){
    scanf("%d",ip+i);
}

    printf("Enter 5 floats:\n");
    
    /* Read 5 floats using pointer arithmetic */
for (i=0;i<5;i++){
    scanf("%f",fp+i);
}

    printf("\nInteger Array:\n");
    
    /* Display the integer array using pointer arithmetic */
    for (i=0;i<5;i++)
    {
        printf("Value: %d\n",*(ip+i));
    }

    printf("\nFloat Array:\n");

    /* Display the float array using pointer arithmetic */
    for (i=0;i<5;i++)
    {
        printf("Value: %.2f\n",*(fp+i));
    }

    printf("\n0-Integer 1-Float\nChoice: ");
    
    /* Read the user's choice */
    scanf("%d",&option);

    printf("Enter index to access: ");

    /* Read the index */
scanf("%d",&index);

    if (option==0)
    {
        
    if (index>=0 && index<5)
        safePrint(ip+index,0);
    else
        safePrint(NULL,0);
        /*
           Validate the index before performing pointer arithmetic.
           If valid, call safePrint() with the appropriate pointer
           and type.
           If invalid, call safePrint() with NULL.
        */
    }
    else if (option==1)
    
    {
    if (index>=0&&index<5)
        safePrint(fp+index,1);
    else safePrint(NULL,1);    /*
           Validate the index before performing pointer arithmetic.
           If valid, call safePrint() with the appropriate pointer
           and type.
           If invalid, call safePrint() with NULL.
        */
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}