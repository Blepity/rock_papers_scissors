#include <stdio.h>
#include <string.h>
#include <assert.h>

const char* determine_winner(const char* player1, const char* player2);

void test_player1_wins_with_rock() {
    assert(strcmp(determine_winner("Rock", "Scissors"), "Player1") == 0);
}

void test_player2_wins_with_scissors() {
    assert(strcmp(determine_winner("Paper", "Scissors"), "Player2") == 0);
}

void test_draw_with_same_choice() {
    assert(strcmp(determine_winner("Rock", "Rock"), "Draw") == 0);
}

void test_invalid_input() {
    assert(strcmp(determine_winner("Rock", "Lizard"), "Invalid") == 0);
}

int main() {
    test_player1_wins_with_rock();
    test_player2_wins_with_scissors();
    test_draw_with_same_choice();
    test_invalid_input();
    printf("All tests passed!\n");
    return 0;
}

// Function implementation (paste this after running the initial test without it)
const char* determine_winner(const char* player1, const char* player2) {
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    else if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0)) {
        return "Player2";
    }
    else if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    return "Invalid";
}