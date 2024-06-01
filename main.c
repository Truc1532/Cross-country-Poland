#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

char name[100];
void getName() {
    printf("\033[?25l");
    printf("Enter your name>");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
}
#include "function.c"

void delaynClear() {
    usleep(70000);
    system("clear");

}

const char* goals[] = {
    "coal",
    "iron",
    "gold",
    "rubber",
    "oil",
    "wood"
};
const char* Delivered[] = {
    "yes",
    "no",
    "no",
    "no",
};

const char* weathers[] = {
    "Cloudy",
    "Rainy",
    "Sunny",
    "Stormy"
};
const char* weather() {
    srand(time(NULL));
    int randomIndex = rand() % 4;
    return weathers[randomIndex];
};
const char* goal() {
    srand(time(NULL));
    int randomIndex = rand() % 6;
    return goals[randomIndex];
}
const char* cities[] = {
    "Gdynia",
    "Gdańsk",
    "Sopot",
    "Szczecin",
    "Bydgoszcz",
    "Poznań",
    "Łódź",
    "Wrocław",
    "Katowice",
    "Kraków",
    "Rzerzów",
    "Kościerzyna",
    "Wejherowo"
};

void delivery() {
    srand(time(NULL));
    int randomIndex = rand() % 4;
    const char* yesOrNo = Delivered[randomIndex];

    if (strcmp(yesOrNo, "yes") == 0) {
        printf("You have found this ! \n");
    } else {
        printf("There is no here \n");
    }
}
void ask(const char* correctAnswer, const char* correctAnswer2, const char* correctAnswer3, const char* correctAnswer4, const char* correctAnswer5, char* correctAnswer6, const char* message) {

    char userAnswer[100];
    int answerIsCorrect = 0;

    printf("%s>", name);
    fgets(userAnswer, sizeof(userAnswer), stdin);
    userAnswer[strcspn(userAnswer, "\n")] = 0;

    if (strcmp(userAnswer, correctAnswer) == 0) {
        srand(time(NULL));
        int randomIndex = rand() % 13;
        printf("You are going to %s\n", cities[randomIndex]);
        answerIsCorrect = 1;
    } else if (strcmp(userAnswer, correctAnswer2) == 0) {
        srand(time(NULL));
        int randomIndex = rand() % 13;
        printf("You are going to %s\n", cities[randomIndex]);
        answerIsCorrect = 1;
    } else if (strcmp(userAnswer, correctAnswer3) == 0) {
        srand(time(NULL));
        int randomIndex = rand() % 13;
        printf("You are going to %s\n", cities[randomIndex]);
        answerIsCorrect = 1;
    } else if (strcmp(userAnswer, correctAnswer3) == 0) {
        srand(time(NULL));
        int randomIndex = rand() % 13;
        printf("You are going to %s\n", cities[randomIndex]);
        answerIsCorrect = 1;
    } else if (strcmp(userAnswer, correctAnswer4) == 0) {
        srand(time(NULL));
        int randomIndex = rand() % 13;
        printf("You are going to %s\n", cities[randomIndex]);
        answerIsCorrect = 1;
    } else if (strcmp(userAnswer, correctAnswer5) == 0) {
        delivery();
        answerIsCorrect = 0;
    } else if (strcmp(userAnswer, correctAnswer6) == 0) {
        printf("%s\n", message);
        answerIsCorrect = 0;
    } else {
        printf("\033[31m");
        printf("I don't understand the word : %s\n", userAnswer);
        printf("\033[0m");
    }
    while (!answerIsCorrect) {
        printf("%s>", name);
        fgets(userAnswer, sizeof(userAnswer), stdin);
        userAnswer[strcspn(userAnswer, "\n")] = 0;

        if (strcmp(userAnswer, correctAnswer) == 0) {
            srand(time(NULL));
            int randomIndex = rand() % 13;
            printf("You are going to %s\n", cities[randomIndex]);
            answerIsCorrect = 1;
        } else if (strcmp(userAnswer, correctAnswer2) == 0) {
            srand(time(NULL));
            int randomIndex = rand() % 13;
            printf("You are going to %s\n", cities[randomIndex]);
            answerIsCorrect = 1;
        } else if (strcmp(userAnswer, correctAnswer3) == 0) {
            srand(time(NULL));
            int randomIndex = rand() % 13;
            printf("You are going to %s\n", cities[randomIndex]);
            answerIsCorrect = 1;
        } else if (strcmp(userAnswer, correctAnswer3) == 0) {
            srand(time(NULL));
            int randomIndex = rand() % 13;
            printf("You are going to %s\n", cities[randomIndex]);
            answerIsCorrect = 1;
        } else if (strcmp(userAnswer, correctAnswer4) == 0) {
            srand(time(NULL));
            int randomIndex = rand() % 13;
            printf("You are going to %s\n", cities[randomIndex]);
            answerIsCorrect = 1;
        } else if (strcmp(userAnswer, correctAnswer5) == 0) {
            delivery();
            answerIsCorrect = 0;

        } else if (strcmp(userAnswer, correctAnswer6) == 0) {
            printf("%s\n", message);
            answerIsCorrect = 0;
        } else {
            printf("\033[31m");
            printf("I don't understand the word : %s\n", userAnswer);
            printf("\033[0m");
        }
    }
}
int main() {
    printf("Welcome to cross country poland ! \n");
    getName();

    const char* randomGoal = goal();
    printf("Your goal is to get %s.\n", randomGoal);

    char getGoal[100];
    sprintf(getGoal, "get %s", randomGoal);

    startTruck();

    ask("drive north", "drive south", "drive west", "drive east", getGoal, "get food", "You are too full to eat");
    printf("You are going through a small forest \n");
    sleep(2);
    system("aplay -q driving.wav &");
    printf("\033[32m");
    #include "ANNIMATION1.h"
    printf("\033[0m");

    ask("drive north", "drive south", "drive west", "drive east", getGoal, "get food", "You are too full to eat right now");
    printf("You are going through a sandy road \n");
    sleep(2);
    system("aplay -q driving.wav &");
    printf("\033[33m");
    #include "ANNIMATION2.h"
    printf("\033[0m");
    const char* randomWeather = weather();
    printf("WEATHER BULLETIN: %s\n", randomWeather);
    sleep(2);

    ask("drive north", "drive south", "drive west", "drive east", getGoal, "get food", "You are too full to eat right now");
    printf("You are going through icey road \n");
    sleep(2);
    printf("\033[34m");
    system("aplay -q driving.wav &");
    #include "ANNIMATION3.h"
    printf("\033[0m");


    printf("\033[0m");
    printf("\033[?25h");
    return 0;
}
