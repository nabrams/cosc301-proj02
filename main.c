#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <poll.h>
#include <signal.h>


void welcome(){
printf("Weclome To our Shell!!!!\n");
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐█████████▐▐▐▐▐▐▐▐▐▐▐▐▐\n"); 
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐█████████████████▐▐▐▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐███████▐▐▐▐▐▐█████████▐▐▐▐▐▐▐▐\n"); 
printf("▐▐▐▐▐▐▐▐▐█████▐▐▐▐▐▐▐▐▐▐▐▐▐▐█████▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐█████▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐████▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐████▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐▐▐▐▐\n");
printf("▐▐▐▐▐████▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐▐▐▐\n");
printf("▐▐▐▐████▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐▐▐\n");
printf("▐▐▐▐███▐▐▐▐▐▐▐████▐▐▐▐▐▐▐▐██▐▐▐▐▐▐▐██▐▐▐\n");
printf("▐▐▐███▐▐▐▐▐▐▐▐████▐▐▐▐▐▐▐████▐▐▐▐▐▐███▐▐\n");
printf("▐▐▐███▐▐▐▐▐▐▐▐████▐▐▐▐▐▐▐████▐▐▐▐▐▐▐██▐▐\n");
printf("▐▐███▐▐▐▐▐▐▐▐▐▐██▐▐▐▐▐▐▐▐███▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐███▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐███▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐███▐▐▐▐▐██▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐███▐▐▐▐▐██▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐███▐▐▐▐▐▐██▐▐▐▐▐▐▐▐▐▐▐▐▐▐██▐▐▐▐▐▐▐███▐\n");
printf("▐▐████▐▐▐▐▐▐███▐▐▐▐▐▐▐▐▐▐▐██▐▐▐▐▐▐▐▐███▐\n");
printf("▐▐▐███▐▐▐▐▐▐▐█████▐▐▐▐▐████▐▐▐▐▐▐▐▐███▐▐\n");
printf("▐▐▐▐███▐▐▐▐▐▐▐▐▐█████████▐▐▐▐▐▐▐▐▐▐███▐▐\n");
printf("▐▐▐▐█████▐▐▐▐▐▐▐▐██▐▐██▐▐█▐▐▐▐▐▐▐▐███▐▐▐\n");
printf("▐▐▐▐▐▐████▐▐▐▐▐▐▐██▐▐▐██▐██▐▐▐▐▐▐███▐▐▐▐\n");
printf("▐▐▐▐▐▐▐█████▐▐▐▐▐▐███▐▐▐▐██▐▐▐▐▐████▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐██████▐▐▐▐▐██████▐▐▐▐████▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐▐███████▐▐▐▐▐▐▐▐▐▐█████▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐██████████████████▐▐▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐█████████▐▐▐▐▐▐▐▐▐▐▐▐▐\n");
printf("▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐\n");
printf("We are so excited you came to try it out!\n");
printf("--------------------------------------\n");
}

int arr_len(char **arr){
    int len = 0;
    while (arr[len] != NULL) {
        len++;
    }
    return len;
}

void execute_command(char *tokens2[]){
    int toklen = arr_len(tokens2); 
    for (int i=0; i<toklen; i++){
        if (*tokens2[i] == "exit"){
            exit(EXIT_SUCCESS);
        }
        pid_t p = fork();
        if(p>0){
            int childrv=0;
            int id = wait(&childrv);
            }
        if (p == 0){
            execv(tokens2[i], tokens2);
            }
        printf("child process finished\n");
    }

}

void remove_comments(char * buffer){
    for(int i=0; i< strlen(buffer); i++){
        if (buffer[i] == '#'){
            buffer[i] = '\0';
            return;
        }
    }
    return;
    }

char** tokenify(const char *s, char * whitespace) {
    char *copy_s = strdup(s);
    char *copy_s2 = strdup(s);
    int token_count = 1;
    char *token;
    for (token=strtok(copy_s,whitespace); token != NULL; token= strtok(NULL,whitespace)){
        token_count++;
        }
    char **tokens = malloc(sizeof(char*)*token_count);
    int i =0;
    for (token=strtok(copy_s2,whitespace); token != NULL; token= strtok(NULL,whitespace)){
        tokens[i] = strdup(token);
        i++;
        }
        tokens[token_count-1] = NULL;
        free(copy_s);
        free(copy_s2);
        return tokens;

    }

void print_tokens(char *tokens[]) {
    int i = 0;
    while (tokens[i] != NULL) {
        printf("Token %d: %s\n", i+1, tokens[i]);
        i++;
    }
}

void free_tokens(char **tokens) {
    int i = 0;
    while (tokens[i] != NULL) {
        free(tokens[i]); // free each string
        i++;
    }
    free(tokens); // then free the array
}


int main(int argc, char **argv) {
    welcome();
    char prompt[] = "Please enter sommmmething: ";
    printf("%s", prompt);
    fflush(stdout);

    char *buffer[1024];
    int mode = 0;
    while(fgets(buffer,1024,stdin) != NULL){
        remove_comments(buffer);
        char **tokens = tokenify(buffer, ";\n");
        int toklen = arr_len(tokens);
        for (int j=0; j < toklen; j++){
            char **tokens2 = tokenify(tokens[j], " \t");
            execute_command(tokens2);
            print_tokens(tokens2);
            free_tokens(tokens2);
            //printf("%s\n", tokens[j]);
        }
        print_tokens(tokens);
        free_tokens(tokens);
        //execute_command(buffer);
        printf("%s", prompt);
    }
    return 0;


}

