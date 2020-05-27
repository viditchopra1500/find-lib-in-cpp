#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include<bits/stdc++.h>

using namespace std;
void foo(char *path,string s) {
   DIR *dir = opendir(path);
   struct dirent *entry;
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) {
  if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0)
   { if(entry->d_name==s){
         cout<<path<<"/"<<entry->d_name << endl;
   }
   char newPath[1000];
   strcpy(newPath,path );
   strcat(newPath, "/");
   strcat(newPath, entry->d_name);
   foo(newPath,s);
   }
   }
   closedir(dir);
}
