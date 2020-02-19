#include <stdio.h>

    int currentFloor = 0;

    int amountOfFloors;
    int *chosenFloors;
    int theFloor;

    int isAddingFloors = 1;

int main()
{
    MoveElevator();
    return 0;
}

int MoveElevator()
{
    
    int floors[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int distanceFromDesiredFloor;


    //char floorChoice[256];
    printf("How many different floors do you want to go to? The Current Floor is %d, The Top Floor is 15.\n",currentFloor);    
    scanf("%d", &amountOfFloors);
    
    chosenFloors = (int*)malloc(amountOfFloors * sizeof(int));
    
    //inserting all chosen floors into the array;
    for(int i = 0; i < amountOfFloors; i++){
    
        printf("Insert the chosenFloors: ");
        scanf("%d", &theFloor);
        chosenFloors[i] = theFloor;
    }
   
    for(int i = 0; i < amountOfFloors; i++){
        
        if(currentFloor < chosenFloors[i])
        {
            for(int j = currentFloor ; j < chosenFloors[i]; j++){
                
                currentFloor++;
                printf("%d\n", currentFloor);
                
            }
        
            currentFloor = chosenFloors[i];
            printf("DING");
            printf("\n");
        }
        else if(currentFloor > chosenFloors[i])
        {
            for(int k = currentFloor ; k > chosenFloors[i]; k--){

                currentFloor--;
                printf("%d\n", currentFloor);
            }
            currentFloor = chosenFloors[i];
            printf("DING");
            printf("\n");
        }
    }

    int option;
    int doItAgain = 0;
    while(doItAgain == 0)
    {
        printf("\nWould you like to go to a new floor? Type '1(Yes)' or '0(No)'\n");
        scanf("%d", &option);

        if(option == 1)
        {
            MoveElevator();
        }
        else if(option == 0)
        {
            printf("Bye loser");
            doItAgain = 1;
            exit(0);
        }
        else
        {
            printf("\nWrong input\n");
        }
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