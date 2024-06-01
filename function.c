void startTruck() {
    char uAnswer[100];
    int isCorrect = 0;

    printf("%s>", name);
    fgets(uAnswer, sizeof(uAnswer), stdin);
    uAnswer[strcspn(uAnswer, "\n")] = 0;

    if (strcmp(uAnswer, "start truck") == 0) {
        system("aplay -q starting_truck.wav");
        printf("vrooom, vrooom... \n");
        isCorrect = 1;
    } else if (strcmp(uAnswer, "drive north") == 0) {
        printf("\033[33m");
        printf("You need to start your truck first \n");
        printf("\033[0m");
        isCorrect = 0;
    } else if (strcmp(uAnswer, "drive south") == 0) {
        printf("\033[33m");
        printf("You need to start your truck first \n");
        printf("\033[0m");
        isCorrect = 0;
    } else if (strcmp(uAnswer, "drive west") == 0) {
        printf("\033[33m");
        printf("You need to start your truck first \n");
        printf("\033[0m");
        isCorrect = 0;
    } else if (strcmp(uAnswer, "drive east") == 0) {
        printf("\033[33m");
        printf("You need to start your truck first \n");
        printf("\033[0m");
        isCorrect = 0;
    } else if (strcmp(uAnswer, "get food") == 0) {
        printf("You are too full to eat right now \n");
    } else {
        printf("\033[31m");
        printf("I don't understand the word : %s\n", uAnswer);
        printf("\033[0m");
    }
    while (!isCorrect) {
        printf("%s>", name);
        fgets(uAnswer, sizeof(uAnswer), stdin);
        uAnswer[strcspn(uAnswer, "\n")] = 0;

        if (strcmp(uAnswer, "start truck") == 0) {
            system("aplay -q starting_truck.wav");
            printf("vrooom, vrooom... \n");
            isCorrect = 1;
        } else if (strcmp(uAnswer, "drive north") == 0) {
            printf("\033[33m");
            printf("You need to start your truck first \n");
            printf("\033[0m");
            isCorrect = 0;
        } else if (strcmp(uAnswer, "drive south") == 0) {
            printf("\033[33m");
            printf("You need to start your truck first \n");
            printf("\033[0m");
            isCorrect = 0;
        } else if (strcmp(uAnswer, "drive west") == 0) {
            printf("\033[33m");
            printf("You need to start your truck first \n");
            printf("\033[0m");
            isCorrect = 0;
        } else if (strcmp(uAnswer, "drive east") == 0) {
            printf("\033[33m");
            printf("You need to start your truck first \n");
            printf("\033[0m");
            isCorrect = 0;
        } else if (strcmp(uAnswer, "get food") == 0) {
            printf("You are too full to eat right now \n");
        } else {
            printf("\033[31m");
            printf("I don't understand the word : %s\n", uAnswer);
            printf("\033[0m");
        }
    }
}
