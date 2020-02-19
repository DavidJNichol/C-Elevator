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
            printf("\n");
        }
        else if(currentFloor > chosenFloors[i])
        {
            for(int k = currentFloor ; k > chosenFloors[i]; k--){

                currentFloor--;
                printf("%d\n", currentFloor);
            }
            currentFloor = chosenFloors[i];
            printf("\n");
        }
    }

    char newFloorResponse[256];
    printf("\nWould you like to go to a new chosenFloors[i-1]? Type 'Yes' or 'No'\n");
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