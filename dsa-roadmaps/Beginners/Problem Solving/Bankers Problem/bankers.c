#include <stdio.h>
#define MAX 1000

//number-variables
int n = 0;
int m = 0;
int safeSequence[MAX];
int counter = 0;

void calcAvailable(int answer[], int allocated[n][m], int totalinstances[], int n, int m)
{
    int temp1[m];

    for (int j = 0; j < m; j++)
    {
        temp1[j] = 0;
        for (int i = 0; i < n; i++)
        {
            temp1[j] += allocated[i][j];
        }
        answer[j] = totalinstances[j] - temp1[j];
    }
}

void calcRemaining(int remaining[n][m], int maxneed[n][m], int allocated[n][m], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            remaining[i][j] = maxneed[i][j] - allocated[i][j];
        }
    }
}

int processorSelector(int remaining[n][m], int available[], int allocated[n][m], int n, int m)
{
    int done[MAX];
    for (int i = 0; i < n; i++)
    {

        int flag = 0;

        for (int j = 0; j < m; j++)
        {
            if (remaining[i][j] <= available[j] && done[i] != 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            for (int j = 0; j < m; j++)
            {
                remaining[i][j] = 0;
                allocated[i][j] = 0;
                done[i] = 0;
            }
            safeSequence[counter] = i;
            counter++;
            return i;
        }
    }
    return -1;
}

int main()
{
    //number of processes
    printf("ENTER THE NUMBER OF PROCESSES : ");
    scanf("%d", &n);

    //number of resources
    printf("ENTER THE NUMBER OF RESOURCES : ");
    scanf("%d", &m);

    //resources-related
    int allocated[n][m];
    int maxneed[n][m];
    int totalInstances[m];

    //post-calculated variables
    int remaining[n][m];
    int available[m];

    //number of instances
    printf("ENTER TOTAL INSTANCES OF EACH RESOURCE: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &totalInstances[i]);
    }

    //allocated resources to the processes
    printf("ENTER ALLOCATED RESOURCES : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &allocated[i][j]);
        }
    }

    //max need of resources
    printf("ENTER MAX NEED OF RESOURCES : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &maxneed[i][j]);
        }
    }

    //calculating available resources

    calcAvailable(available, allocated, totalInstances, n, m);
    calcRemaining(remaining, maxneed, allocated, n, m);

    //driver program

    int ans = processorSelector(remaining, available, allocated, n, m);

    while (ans != -1&&ans!=n-1)
    {
        calcAvailable(available, allocated, totalInstances, n, m);
        
        ans = processorSelector(remaining, available, allocated, n, m);
    }

    if (ans == -1 && counter != n - 1)
    {
        printf("NOT SAFE");
        return 0;
    }
    else{
    printf("SAFE SEQUENCE : ");
    for (int j = 0; j < counter; j++)
    {
        printf("P%d\t", safeSequence[j]+1);
    }
    printf("\n");}
    return 0;
}
