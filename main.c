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

//Natalie Abrams and Obi O'Brien
//Due: Friday, October 9
//We worked on almost the whole project in tandem. 

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
    char descriptor[128];
    struct node *next; 
    char state [128];
};


void list_clear(struct node *list) {
    while (list != NULL) {
        struct node *tmp = list;
        list = list->next;
        free(tmp);
    }
}

struct node *list_append(int job, struct node *head, char * cur_job, char * state) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->job = job;
    strcpy(newnode->descriptor, cur_job);
    strcpy(newnode->state, state);
    newnode->next = NULL;
    if (head == NULL) {
        return newnode;
    }
    struct node *list = head;
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = newnode;
    return head;
}

struct node *list_delete(int job, struct node *head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->job == job) {
        struct node *dead = head;
        head = head->next;
        free(dead);
        return head;
    }
    struct node *tmp = head;
    while (tmp->next != NULL) {
        if (tmp->job == job) {
            struct node *dead = tmp->next;
            tmp->next = dead->next;
            free(dead);
            return head;
        }
        tmp = tmp->next;
    }
    return head;
}

void list_print(const struct node *list) {
    int i = 0;
    printf("In list_print\n");
    while (list != NULL) {
        printf("List item %d: %d\n", i++, list->job);
        list = list->next;
    }
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
    } else if(strcmp(tokens[0], "jobs") == 0){
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

void built_in_handler(int mode, int built_in,struct node *head) {
    if (built_in == 2) {
        if (mode == 0) printf("Running in sequential mode\n");
        if (mode == 1) printf("Running in parallel mode\n");
    }
    if (built_in == 4){
        struct node * jobs = head;
        while (jobs != NULL){
            printf("Process: %d (%s) is %s\n", jobs->job, jobs->descriptor, jobs->state);
            jobs = jobs->next;
        }
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

int par_execute(char *tokens[], int len, struct node *head, int mode, struct pathnode * phead) {
    int res = -1;
    for (int i = 0; i < len; i++) {
        char** tokens2 = tokenify(tokens[i], " \t\n");
        if (*tokens2 != NULL) {
            char * state = "running";
            int built_in = built_in_check(tokens2, arr_len(tokens2));
            if (built_in == -1) {
                pid_t p = fork();
                if (p > 0) {
                    head = list_append(p, head, tokens[i], state);
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
                    if (head == NULL) {
                        return res;
                    }
                } else if (built_in == 5 || built_in == 6) {
                    struct node * tmp = head;
                    while (tmp != NULL) {
                        if (tmp->job == tokens2[1]) {
                            if (built_in == 5) kill(tokens[1], SIGSTOP);
                            else if (built_in == 6) kill(tokens[1], SIGCONT);
                            break;
                        }
                    }
                    printf("The job you requested cannot be found.\n");
                }
                built_in_handler(mode, built_in, head);
            }
        }
        free_tokens(tokens2);
    }
    pid_t pid;
    while ((pid = waitpid(-1, NULL, WNOHANG)) > 0) {
        head = list_delete(pid, head);
        printf("Process %d has terminated\n", pid);
    }
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
    struct node * head = NULL;
    while(fgets(buffer,1024,stdin) != NULL){
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
                list_clear(head);
                free_tokens(tokens);
                pathlist_clear(paths);
                return 0;
            }
        }
        free_tokens(tokens);
        struct pollfd pfd[1];
        pfd[0].fd = 0;
        pfd[0].events = POLLIN;
        pfd[0].revents = 0;
        poll(&pfd[0], 1, 1000);
        printf("%s", prompt);
        fflush(stdout);
    }
    list_clear(head);
    pathlist_clear(paths);
    return 0;
}

