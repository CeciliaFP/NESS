/*
<<<<<<< HEAD


    PROTOTIPO MENU VIAJANTE


*/
// NEEDS TO CREATE FUNCTION TO REMOVE LINES FROM ARCHIVES
#include "../include/menuViajante.h"

/* CRIA LOOP PARA FICAR CHAMANDO FUNÇÃO */
int menuViajante(char *user) {
    while(1) {
        system("clear");
        int choice;

=======
 * 
 * 
 * 
 */

#include "../include/menuViajante.h"
#include "../include/authentication.h"
#include "../include/search.h"

void menuViajante(void) {
    system("clear");
    int choice = 0;
    do{
>>>>>>> 16e49be8d0e6d9b13f7dae98f5c7f66711235dfd
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Mapa\n");
        printf("2. Menu\n");
        printf("3. Sair\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
<<<<<<< HEAD

        switch (choice) {
            case 1:
                Mapa(user);
                continue;
            case 2:
                Menu(user);
                continue;
            case 3:
                return 0;
            default:
                printf("Opção inválida meu caro.\n");
                continue;
        }
    }
}


void Mapa(char *user) {
    system("clear");
    int check;

    printf("Escolha uma opção e digite o numero correspondente:\n");
    printf("\n1. Quests\n");
    printf("2. Voltar ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &check);

    switch (check) {
        case 1:
            /* ACESSA AS QUESTS */
=======
    }while(!choice);

    switch (choice) {
        case 1:
            Mapa();
            break;
        case 2:
            Menu();
            break;
        case 3:
            exit(0);
    }
}

void Mapa(void) {
    system("clear");
    int choice = 0;
    do{
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Quests\n");
        printf("2. Voltar ao menu\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
    }while(!choice);

    switch (choice){
        case 1:
            break;
>>>>>>> 16e49be8d0e6d9b13f7dae98f5c7f66711235dfd
        case 2:
            exit(0);
    }
}

<<<<<<< HEAD
void Quest(char *user) {
    /* ACESSO AS QUESTS */
}

void Menu(char *user) {
    system("clear");
    int choice;

    printf("Escolha uma opção e digite o numero correspondente:\n");
    printf("\n1. Caixa de mensagens\n");
    printf("2. Modificar informações básicas\n");
    printf("3. Alterar habilidades\n");
    printf("4. Acrescentar novas habilidades\n");
    printf("5. Remover habilidades\n");
    printf("6. Volta ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            /* ACESSA A CAIXA DE MENSAGENS (criar função)*/
        case 2:
            changeInfo(user);
        case 3:
            changeHab(user);
        case 4:
            addHab(user);
        case 5:
            removeHab(user);
        case 6:
=======
void Quest(void) {
    system("clear");
    int choice = 0;
    do{
        printf("MENU DE QUESTS");
        printf("\n1. Acessar Questboard\n");
        printf("\n2. Buscar squads perto de você\n");
        printf("\n3. Convidar alguém para sua squad\n");
        printf("\n4. Sair.\n");
        scanf("%d", &choice);
    } while (!choice);

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            search();
        case 4:
>>>>>>> 16e49be8d0e6d9b13f7dae98f5c7f66711235dfd
            exit(0);
    }
}

<<<<<<< HEAD
void inbox(char *user) {
    /* ACESSA A CAIXA DE MENSAGENS */
}

void changeInfo(char *user) {
    /* changes the info that the user want */
    system("clear");
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char fileDir[MAX_CHAR] = "/database/auth/";
    //int case;
    strcat(userFile, ".txt");  // gets the user card (file)
    strcat(fileDir, userFile);
    char info[MAX_CHAR];
    char line[BUFFER_SIZE];
    FILE *file = fopen(fileDir, "r+");
    /* shows the actual information in the database */
    printf("Informações:\n\n");
    while (line != EOF) {
        fgets(line, BUFFER_SIZE, fileDir);
        printf("%s\n", line);
    }
    /* gets the information to be edited */
    printf("\nDigite o que você deseja editar: ");
    scanf("%s", info);
    //
    /* NEEDS TO KNOW WHAT INFORMATION CAN BE EDITED */
    free(userFile);
    free(fileDir);
    free(info);
    free(line);
    fclose(file);
    /* check if the user wants to edit more information */
    char choice;
    printf("Você deseja editar outra informação?[s/n]: ");
    scanf("%c", &choice);
    if (choice == 's') {
        changeInfo(user);
    }else {
        exit(0);
    }
}

void changeHab(char *user) {
    /* MODIFICA HABILIDADES */
}

void addHab(char *user) {
    /* add new hability to user information */
    system("clear");
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char newHab[MAX_CHAR];
    char userDir[MAX_CHAR] = "/database/auth/"; // user file directory
    char habDir[MAX_CHAR] = "/database/habilidades/"; // hability file directory
    strcat(userFile, ".txt");  // gets the user card (file)
    strcat(userDir, userFile);
    FILE *file = fopen(userDir, "r+");
    /* gets the new hability to insert */
    printf("Digite a habilidade que deseja adicionar: ");
    scanf("%s", newHab);  // needs to input with space
    /* check if hability file exists */
    strcat(newHab, ".txt");
    strcat(habDir, newHab);
    FILE *checkfile = fopen(habDir, "a+");
    if (checkfile) {
        fprintf(checkfile, "%s\n", user);  // OBS: if the format of the database changes, change this function
    }else {   // creates a new file for the hability if it don't exists
        checkfile = fopen(habDir, "w");
        fprintf(checkfile, "%s\n", user);
    }
    /* ADD HABILITY TO USER CARD (need to code) */
    free(newHab);
    free(userDir);
    free(habDir);
    fclose(checkfile);
    /* now check if the user wants to add more habilities */
    char choice;
    printf("Você quer adicionar mais habilidade?[s/n]: ");
    scanf("%c", &choice);
    if (choice == 's') {
        addHab(user);
    }else {
        exit(0);
    }
}

void removeHab(char *user) {
    system("clear");
    char hability[MAX_CHAR];
    char habilityFile[MAX_CHAR]
    char fileDir[MAX_CHAR] = "/database/habilidades/";
    /* SHOW THE HABILITIES IN THE USER CARD */
    printf("Digite a habilidade que você quer remover:\n");
    scanf("%s", hability);
    //strcpy(habilityFile, hability);
    /* REMOVES FROM THE HABILITY ARCHIVE */
    strcat(habilityFile, ".txt");  // lembrar de mudar de acordo com o modo que for amazenar dados
    //strcat(fileDir, habilityFile);  // testing in the new removeLine function
    //FILE *file = (fileDir, "r");
    //removeLine(file, fileDir, hability);
    //free(hability);
    //free(fileDir);
    //fclose(file); */
    /* now removes the hability from the user card */
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char pathofthefile[MAX_CHAR] = "/database/auth/";
    strcat(userFile, ".txt");
    strcat(pathofthefile, userFile);
    file = fopen(pathofthefile, "r");
    removeHab(file, habi);
    free(userFile);
    free(pathofthefile);
    fclose(file);
    /* ASK IF THE USER WANTS TO REMOVE MORE HABILITIES */
    char choice;
    printf("Você deseja remover outras habilidades?[s/n]: ");
    scanf("%c", &choice);
    if (choice == 's') {
        removeHab(user);
    }else {
        exit(0);
    }
}

int search(FILE *fp, char *dirFile, char *string){ /* custom function from search.c */
    /* initialize variables to hold string frequency, location, and line content*/
    int results = 0, line = 0;
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        if (strstr(lineContent, string)){
            // printf("Palavra encontrada na linha: %d\n", line);
            // printf("%s\n", lineContent);
            results++;
        }
        line++;
    }
    free(lineContent);
    return line;
}
/* WORKING ON IT, STILL NEED TO KNOW HOW TO DEAL WITH FILE PATH */
void removeLine(char *fileDir ,char *stringFile, char *string) {
    /* GETS THE ACTUAL ARCHIVE */
    strcpy(stringFile, string);
    strcat(stringFile, ".txt");  // lembrar de mudar de acordo com o modo que for amazenar dados
    strcat(fileDir, stringFile);
    FILE *file = (fileDir, "r");
    /* REMOVES FROM THE LINE FROM ARCHIVE */
    char ch;
    int counter = 1;
    line = search(fp, hability);
    char newFile[MAX_CHAR] = "replica.txt"  /* file to copy */
    char mewFileDir[MAX_CHAR];  /* directory of the copy file */
    strcpy(newFileDir, fileDir);
    strcat(newFileDir, newFile);
    FILE *fptr = fopen(newFileDir , "w"); /* creates the new file */
    while (ch != EOF) {
        ch = getc(file);
        if (ch == '\n') {
            counter++;
            if (temp != line) {
                putc(ch, fptr);
            }
        }
    }

}
=======
void Menu(void) {
    system("clear");
    int choice = 0;
    do{
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Caixa de mensagens\n");
        printf("2. Modificar informações básicas\n");
        printf("3. Alterar habilidades\n");
        printf("4. Acrescentar novas habilidades\n");
        printf("5. Remover habilidades\n");
        printf("6. Volta ao menu\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
    } while (!choice);

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            exit(0);
    }
}
>>>>>>> 16e49be8d0e6d9b13f7dae98f5c7f66711235dfd
