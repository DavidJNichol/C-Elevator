#include <stdio.h>

int floor = 0;

int main()
{
    MoveElevator();
    return 0;
}

int MoveElevator()
{
    
    int floors[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    char floorChoice[256];
    printf("What Floor Would you Like to go to? The Current Floor is %d, The Top Floor is 15.\n",floor);
    gets(floorChoice);
   
    int floorChoiceInt;
    sscanf(floorChoice, "%d", &floorChoiceInt);

    if(floorChoiceInt > 15 || floorChoiceInt <= 0)
    {
        printf("Error! That is Not A Valid Floor.\n");
        MoveElevator();
    }
    
    int distanceFromDesiredFloor = floorChoiceInt - floor;


    if(floorChoiceInt > floor)
    {
        for(int i = 0; i < distanceFromDesiredFloor; i++)
        {   
        
            printf("\n%d", floors[floor]+i+1, "\n");
           

            if(floors[i] == floorChoiceInt)
            {
                printf("\nDING");           
                break;
            }
       
        }   
            floor = floors[floorChoiceInt-1]+1;
    }
    else
    {
        for(int i = floor-floorChoiceInt; i > 0; i--)
        {

            printf("\n%d", floors[floorChoiceInt+i-1],"\n");

            if(floors[i] == floorChoiceInt)
            {
                printf("\nDING\n");           
                break;
           }
        }

        floor = floors[floorChoiceInt];
    }
  


    

    char newFloorResponse[256];
    printf("\nWould you like to go to a new floor? Type 'Yes' or 'No'\n");
    gets(newFloorResponse);
    
    char yes[256] = "Yes";
    char no[256] = "No";

    if(strcmp(newFloorResponse , yes) == 0)
    {      
        MoveElevator();
    }
    else if(strcmp(newFloorResponse , no) == 0)
    {
        exit(0);
    }

    return 0;
}