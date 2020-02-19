#include <stdio.h>

int floor = 0;

int main()
{
    MoveElevator();
    return 0;
}

int MoveElevator()
{
    int floors[] = {0,1,2,3,4,5,6,7,8,9,10};
    
    int amountOfFloors;
    int *chosenFloors;
    int theFloor;
    
    int isAddingFloors = 1;

    printf("How many different floors do you want to go to: ");
    scanf("%d", &amountOfFloors);
    printf("%d\n", amountOfFloors);

    chosenFloors = (int*)malloc(amountOfFloors * sizeof(int));

    for(int i = 0; i < amountOfFloors; i++){
    
        printf("Insert the floor: ");
        scanf("%d", &theFloor);
        chosenFloors[i] = theFloor;
        printf("%d", theFloor);
    }

    return 0;
}