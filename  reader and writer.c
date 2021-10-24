#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sread=0,swrite=0,ch=7,r=0;
    printf("Reader writer");
    do
    {
        printf("\nMenu\n1.Read from file\n2.Write to file\n3.Exit the reader\n4.Exit the writer\n5.Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(swrite==0)
            {
                sread=1;
                r+=1;
                printf("\nReader %d reads",r);
            }
            else
            printf("\n Not possible");
            break;
            case 2:if(sread==0&&swrite==0)
            {
                swrite=1;
                printf("\nwriter in progress");
            }
            else if(swrite==0)
            printf("\nCannot write files");
            break;
            case 3: if(r!=0)
            {
                printf("\nThe reader %d closes the file",r);
                r-=1;
            }
            else if (r==0)
            {
                printf("\nCurrently no reader acess the file");
                sread=0;
            }
            else if(r==1)
            printf("\nonly 1 reader file");
            else
            printf("%d reader are reading the file",r);
            break;
            case 4L:
            if (swrite==1)
            {
                printf("\nwriter close the file");
                swrite=0;
            }
            else
            printf("\nThe is no writer in the file");
            break;
            case 5:exit(0);
        }
    }
    while(1);
    return 0;
}
