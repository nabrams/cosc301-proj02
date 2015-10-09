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

struct pathnode {
    char path[128];
    struct pathnode *next;
};

void pathlist_clear(struct pathnode *list) {
    while (list != NULL) {
        struct pathnode *tmp = list;
        list = list->next;
        free(tmp);
    }
}

struct pathnode *pathlist_append(const char *path, struct pathnode *list) {
    struct pathnode *newnode = malloc(sizeof(struct pathnode));
    strcpy(newnode->path, path);
    newnode->next = NULL;
    struct pathnode *head = list;
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

struct node {
    int job;
    struct node *next; 
};

void list_clear(struct node *list) {
    while (list != NULL) {
        struct node *tmp = list;
        list = list->next;
        free(tmp);
    }
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

int built_in_check(char * tokens[], int len){
    if (strcmp(tokens[0], "exit") == 0) {
        return 3;
    } else if (strcmp(tokens[0], "mode") == 0 && len == 1) {
        return 2;
    } else if (strcmp(tokens[0], "mode") == 0 && len == 2 && (strcmp(tokens[1], "s") == 0 || strcmp(tokens[1], "sequential") == 0)) {
        return 0;
    } else if (strcmp(tokens[0], "mode") == 0 && len == 2 && (strcmp(tokens[1], "p") == 0 || strcmp(tokens[1], "parallel") == 0)) {
        return 1;
    } else if(strcmp(tokens[0], "job") == 0){
        return 4;
        //print list of all processes that are currently running in the background
        //minimum, print process ID, command being executed, and process state
    } else if(len == 2 && strcmp(tokens[0], "pause") == 0){
        return 5;
        //send signal to background processes with PID in order to pause process
        //after pausing, run jobs command to show updated status
    }
    else if(len == 2 && strcmp(tokens[0], "resume") == 0) {
        return 6; 
        //send signal to background processes with PID in order to restart paused process
        //run jobs after to show updated status
    }
    else return -1;
    
}

void built_in_handler(int mode, int built_in) {
    if (built_in == 2) {
        if (mode == 0) printf("Running in sequential mode\n");
        if (mode == 1) printf("Running in parallel mode\n");
    }
}

int seq_execute(char *tokens[], int len, int mode, struct pathnode * phead) {
    int res = -1;
    for (int i = 0; i < len; i++) {
        char **tokens2 = tokenify(tokens[i], " \t\n");
        if (*tokens2 != NULL) {
            int built_in = built_in_check(tokens2, arr_len(tokens2));
            if (built_in == -1) {
                pid_t p = fork();
                if (p > 0) {
                    int childrv = 0;
                    wait(&childrv);
                } else if (p == 0) {
                    struct stat statresult;
                    int rv = stat(tokens2[0], &statresult);
                    if (rv < 0) {
                        struct pathnode *pathhead = phead;
                        while (pathhead != NULL) {
                            char dest[200];
                            strcpy(dest, pathhead->path);
                            dest[strlen(dest)-1] = '/';
                            dest[strlen(dest)] = '\0';
                            strcat(dest, tokens2[0]);
                            rv = stat(dest, &statresult);
                            if (rv >= 0) {
                                strcpy(tokens2[0], dest);
                                break;
                            }
                            pathhead = pathhead->next;
                        }
                    }
                    if (execv(tokens2[0], tokens2) < 0) {
                        printf("Unrecognised command\n");
                    }
                }
                printf("child process finished\n");
            } else {
                if (built_in == 0 || built_in == 1) {
                    res = built_in;
                } else if (built_in == 2) {
                    if (mode == 0) printf("Running in sequential mode\n");
                    if (mode == 1) printf("Running in parallel mode\n");
                } else if (built_in == 3) {
                    free_tokens(tokens2);
                    return 2;
                } else if (built_in == 4 || built_in == 5 || built_in == 6) {
                    printf("That command is not supported in sequential mode\n");
                }
            }
        }
        free_tokens(tokens2);
    }
    return res;
}

int par_execute(char *tokens[], int len, struct node * head, int mode, struct pathnode * phead) {
    int res = -1;
    for (int i = 0; i < len; i++) {
        char** tokens2 = tokenify(tokens[i], " \t\n");
        if (*tokens2 != NULL) {
            int built_in = built_in_check(tokens2, arr_len(tokens2));
            if (built_in == -1) {
                pid_t p = fork();
                if (p > 0) {
                    head = list_append(p, head);   
                }
                if (p == 0) {
                    struct stat statresult;
                    int rv = stat(tokens2[0], &statresult);
                    if (rv < 0) {
                        struct pathnode *pathhead = phead;
                        while (pathhead != NULL) {
                            char dest[200];
                            strcpy(dest, pathhead->path);
                            dest[strlen(dest)-1] = '/';
                            dest[strlen(dest)] = '\0';
                            strcat(dest, tokens2[0]);
                            rv = stat(dest, &statresult);
                            if (rv >= 0) {
                                strcpy(tokens2[0], dest);
                                break;
                            }
                            pathhead = pathhead->next;
                        }
                    }
                    if (execv(tokens2[0], tokens2) < 0) {
                        printf("Invalid command\n");
                    }
                }
            } else {
                if (built_in == 0 || built_in == 1) {
                    res = built_in;
                } else if (built_in == 3) {
                    res = 2;
                    free_tokens(tokens2);
                    if (head == NULL) return res;
                }
                built_in_handler(mode, built_in);
            }
        }
        free_tokens(tokens2);
    }
    struct node * list = head;
    while (list != NULL) {
        int childrv = 0;
        waitpid(list->job, &childrv, 0);
        printf("child process finished\n");
        list = list->next;
    }
    list_clear(head);
    return res;
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

struct pathnode * set_paths() {
    FILE *fp;
    fp = fopen("shell-config", "r");
    struct pathnode* path_head = NULL;
    char* buffer[1024];
    while (fgets(buffer, 1024, fp) != NULL) {
        path_head = pathlist_append(buffer, path_head);
    }
    fclose(fp);
    return path_head;
}


int main(int argc, char **argv) {
    struct pathnode *paths = set_paths();
    welcome();
    char prompt[] = "Prompt>";
    printf("%s", prompt);
    fflush(stdout);
    char *buffer[1024];
    int mode = 0; //starts in sequential mode
    while(fgets(buffer,1024,stdin) != NULL){
        struct node * head = NULL;
        remove_comments(buffer);
        char **tokens = tokenify(buffer, ";");
        int toklen = arr_len(tokens);
        int res = -1;
        if (*tokens == NULL) {
            printf("Invalid prompt\n");
        } else if (mode == 0) {
            res = seq_execute(tokens, toklen, mode, paths);    
        } else if (mode == 1) {
            res = par_execute(tokens, toklen, head, mode, paths);
        }
        if (res != -1) {
            if (res == 0) {
                mode = 0;
            } else if (res == 1) {
                mode = 1;
            } else if (res == 2) {
                free_tokens(tokens);
                pathlist_clear(paths);
                return 0;
            }
        }
        free_tokens(tokens);
        printf("%s", prompt);
    }
    pathlist_clear(paths);
    return 0;
}

