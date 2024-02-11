#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a song
struct Song {
    char title[100];
    char artist[100];
    int year;
};

// Function to add a new song to the app
void addSong(struct Song songs[], int *numSongs) {
    if (*numSongs >= MAX_SONGS) {
        printf("Maximum number of songs reached!\n");
        return;
    }

    struct Song newSong;

    printf("Enter the song title: ");
    fgets(newSong.title, sizeof(newSong.title), stdin);

    printf("Enter the artist name: ");
    fgets(newSong.artist, sizeof(newSong.artist), stdin);

    printf("Enter the year of release: ");
    scanf("%d", &newSong.year);
    getchar(); // Clear the newline character left in the buffer by scanf

    songs[*numSongs] = newSong;
    (*numSongs)++;

    printf("Song added successfully!\n");
}

// Function to display all the songs in the app
void displaySongs(struct Song songs[], int numSongs) {
    if (numSongs == 0) {
        printf("No songs found.\n");
        return;
    }

    printf("List of songs:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("%d. %s - %s (%d)\n", i + 1, songs[i].title, songs[i].artist, songs[i].year);
    }
}

int main() {
    const int MAX_SONGS = 100;
    struct Song songs[MAX_SONGS];
    int numSongs = 0;
    int choice;

    printf("Welcome to the Song App!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Add a new song\n");
        printf("2. Display all songs\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear the newline character left in the buffer by scanf

        switch (choice) {
            case 1:
                addSong(songs, &numSongs);
                break;
            case 2:
                displaySongs(songs, numSongs);
                break;
            case 3:
                printf("Exiting the Song App. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
