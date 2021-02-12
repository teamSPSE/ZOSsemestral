#ifndef MAIN_C_COMMANDS_H
#define MAIN_C_COMMANDS_H

#include "ext.h"

int format(int disk_size, char *name);

int incp(char *name, pseudo_inode *act_path_inode, char *s1, char *s2, bool printMsg);

int cat(char *name, pseudo_inode *act_path_inode, char *s1);

int info(char *name, pseudo_inode *act_path_inode, char *s1);

int outcp(char *name, pseudo_inode *act_path_inode, char *s1, char *s2, bool printMsg);

int rm(char *name, pseudo_inode *act_path_inode, char *s1, bool printMsg);

int cp(char *name, pseudo_inode *act_path_inode, char *s1, char *s2, bool printMsg);

int mv(char *name, pseudo_inode *act_path_inode, char *s1, char *s2);

#endif //MAIN_C_COMMANDS_H
