#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef struct 
{
    char name[MAX_NAME_LENGTH];
    
    int *ratings;
    
    int num_ratings;
    
    double average_rating;
    
} Game;

void bubble_sort(Game *games_array, int n) 
{
    int i, j;
    
    Game temp;
    
    for (i = 0; i < n-1; i++) 
    {
        for (j = 0; j < n-i-1; j++) 
        {
            if (games_array[j].average_rating < games_array[j+1].average_rating) 
            {
                temp = games_array[j];
                
                games_array[j] = games_array[j+1];
                
                games_array[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int n, i, j, k;

    scanf("%d", &n);

    Game *games_array = (Game*) malloc(sizeof(Game) * n);


    for (i = 0; i < n; i++) {
        Game game;

        scanf("%s", game.name);

        scanf("%d", &game.num_ratings);

        game.ratings = (int*) malloc(sizeof(int) * game.num_ratings);

        for (j = 0; j < game.num_ratings; j++) 
        {
            scanf("%d", &game.ratings[j]);
        }

        double sum = 0.0;
        
        for (j = 0; j < game.num_ratings; j++) 
        {
            sum += game.ratings[j];
        }
        
        game.average_rating = sum / game.num_ratings;

        games_array[i] = game;
    }

    bubble_sort(games_array, n);

    for (i = 0; i < n; i++) 
    {
        printf("%s, %.3f\n", games_array[i].name, games_array[i].average_rating);
    }


    for (i = 0; i < n; i++)
    {
        free(games_array[i].ratings);
    }
    free(games_array);

    return 0;
}