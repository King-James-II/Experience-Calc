#include <stdio.h>

/*
    Program: Exp Points Calculator
    Description: Calculates exp points needed for the next level in a video game.
*/

void calculateExperiencePoints() {
    int playerLevel;
    double experiencePoints;
    
    do {
        printf("\nEnter Player Level (1-99, 0 to exit): ");
        scanf("%d", &playerLevel);

        if (playerLevel == 0) {
            break; // Exit loop if 0 is entered
        }

        // Validate input level
        while (playerLevel < 1 || playerLevel > 99) {
            printf("Invalid level. Please enter a level between 1 and 99: ");
            scanf("%d", &playerLevel);
        }
        
        // Calculate experience points for the input level
        experiencePoints = 100.0; // Initial experience points at level 1
        
        // Increase experience points by a factor of 1.104 for each level
        for (int i = 1; i < playerLevel; i++) {
            experiencePoints *= 1.104;
        }
        
        printf("Exp Points Needed for Level %d: %.2f\n", playerLevel, experiencePoints);
    } while (playerLevel != 0);
}

int main() {
    calculateExperiencePoints();

    return 0;
}
