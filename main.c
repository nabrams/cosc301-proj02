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

struct node {
    int job;
    struct node *next; 
};

/*
 * this function just frees every node in the list.
 */
void list_clear(struct node *list) {
    while (list != NULL) {
        struct node *tmp = list;
        list = list->next;
        free(tmp);
    }
}

/*
 * this function is provided to help you debug.
 */
void list_print(const struct node *list) {
    int i = 0;
    printf("In list_print\n");
    while (list != NULL) {
        printf("List item %d: %d\n", i++, list->job);
        list = list->next;
    }
}

struct node *list_delete(int job, struct node *list) {
    
    struct node *head = list;
    if (head->job == job) {
        struct node *tmp = head;
        head = head->next;
        free(tmp);
        return head;
    }
    struct node *nde = head;
    while (nde->next != NULL) {
            if (nde->next->job == job) {
            struct node *tmp = nde->next;
            nde->next = nde->next->next;
            free(tmp);
            return head;
        }
    }
    return head;


}

struct node *list_append(int job, struct node *list) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->job = job;
    newnode->next = NULL;
    struct node *head = list;
    if (head == NULL) {
        head = newnode;
        return head;
    }
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = newnode;
    return head;
    
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

int arr_len(char **arr){
    int len = 0;
    while (arr[len] != NULL) {
        len++;
    }
    return len;
}

int run_mode(char *tokens2[], int mode){
    int len = arr_len(tokens2);
    for (int j=0; j<len; j++){
        if (strcmp(tokens2[j], "p") == 0 || strcmp(tokens2[j],"parallel") ==0){
            return 1; //Parallel mode
        } else if (strcmp(tokens2[j], "s") == 0 || strcmp(tokens2[j], "sequential") == 0){
            return 0; //Sequential mode
        }
    }
    return mode; //Previous mode
}

int built_in_check(char * tokens[], int len) {
    if (strcmp(tokens[0], "exit") == 0) {
        return 0;
    } else if (strcmp(tokens[0], "mode") == 0 && len == 1) {
        return 1;
    } else if (strcmp(tokens[0], "mode") == 0 && (strcmp(tokens[1], "s") == 0 || strcmp(tokens[1], "sequential") == 0)) {
        return 2;
    } else if (strcmp(tokens[0], "mode") == 0 && (strcmp(tokens[1], "p") == 0 || strcmp(tokens[1], "parallel") == 0)) {
        return 3;
    } 
    else if(strcmp(tokens[0], "job") == 0){
        return 4;
        //print list of all processes that are currently running in the background
        //minimum, print process ID, command being executed, and process state
    }
    else if(strcmp(tokens[0], "pause") && strcmp(tokens[1], "PID")){
        return 5;
        //send signal to background processes with PID in order to pause process
        //after pausing, run jobs command to show updated status
    }
    else if(strcmp(tokens[0], "resume") && strcmp(tokens[1], "PID")){
        return 6; 
        //send signal to background processes with PID in order to restart paused process
        //run jobs after to show updated status
    }
    else return -1;
    
}
void execute_command(char *tokens2[], int mode){
    if (*tokens2 == NULL) {
        printf("Invalid command\n");
        return;
    }
    int toklen = arr_len(tokens2); 
    //for (int i=0; i < toklen; i++){
        //printf("%s\n", tokens2[i]);
        if (strcmp(tokens2[0],"exit") == 0){
            return;
            //wait(NULL);
            //exit(EXIT_SUCCESS);
            return;
        } else if (strcmp(tokens2[0],"mode") == 0 && arr_len(tokens2) == 1){
            if (mode == 0){
                printf("The current mode is Sequential \n");
            }
            else{
                printf("The current mode is Parallel\n");
            }
        } else if (strcmp(tokens2[0],"mode") == 0 && arr_len(tokens2) == 2){
            return;
        } else {
        pid_t p = fork();
        if(p > 0){
            int childrv=0;
            int id = wait(&childrv);
            //int id = waitpid(WAIT_ANY, &childrv, WAIT_MYPGRP);
        }
        if (p == 0){
            if (execv(tokens2[0], tokens2) < 0) {
                printf("Unrecognised command\n");  
            }        
        }
        printf("child process finished\n");
        //}
    }

}

int seq_execute(char *tokens[], int len, struct node * head) {
    int res = -1;
    for (int i = 0; i < len; i++) {
        char **tokens2 = tokenify(tokens[i], " \t\n");
        if (*tokens2 != NULL) {
            int built_in = built_in_check(tokens2, arr_len(tokens2));
            if (built_in == -1) {
                pid_t p = fork();
                if (p > 0) {
                    int childrv = 0;
                    int id = wait(&childrv);
                } else if (p == 0) {
                    if (execv(tokens2[0], tokens2) < 0) {
                        printf("Unrecognised command\n");
                    }
                }
                printf("child process finished\n");
            } else {
                if (res == -1) res = built_in;
                else if (res != 0) res = built_in;
            }
        }
        free_tokens(tokens2);
    }
    return res;
}

int par_execute(char *tokens[], int len, struct node * head) {
    int res = -1;
    while (head != NULL) {
        
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


int main(int argc, char **argv) {
    welcome();
    char prompt[] = "Prompt>";
    printf("%s", prompt);
    fflush(stdout);
    char *buffer[1024];
    int mode = 0; //starts in sequential mode
    int mode_tmp = 0;
    struct node * head = NULL;
    while(fgets(buffer,1024,stdin) != NULL){
        remove_comments(buffer);
        char **tokens = tokenify(buffer, ";");
        int toklen = arr_len(tokens);
        int res = -1;
        if (*tokens == NULL) {
            printf("Invalid prompt\n");
        } else if (mode == 0) {
            res = seq_execute(tokens, toklen, head);    
        } else if (mode == 1) {
            res = par_execute(tokens, toklen, head);
        }
        if (res != -1) {
            if (res == 0) {
                free_tokens(tokens);
                return 0;
            } else if (res == 1) {
                if (mode == 0) {
                    printf("Currently running in sequential mode\n");
                } else {
                    printf("Currently running in parallel mode\n");
                }
            } else if (res == 2) {
                mode = 0;
            } else if (res == 3) {
                mode = 1;
            }
        }
        //for (int j=0; j < toklen; j++){
        //   char **tokens2 = tokenify(tokens[j], " \t\n");
        //    mode_tmp = run_mode(tokens2, mode);
        //    execute_command(tokens2, mode);
        //    free_tokens(tokens2);
        //}
        mode = mode_tmp;
        free_tokens(tokens);
        printf("%s", prompt);
    }
    return 0;
}

