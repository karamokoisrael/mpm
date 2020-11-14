#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
   char buffer[PATH_MAX];
   if (getcwd(buffer, sizeof(buffer)) != NULL) {
   string echoOff("");
   string echoOn("");
	 string cmd("/usr/local/sbin");
   
   //string cmdEnd = echoOff+". "+cmd+venv+ "deactivate";

   string args = "";
   if(argc>1){
      for(int i=1;i<argc;i++){
        args += argv[i];
	args += " ";
      }
    }

  
  string cmdAll = echoOff+". "+cmd+"/mpm_venv/bin/"+ "activate"+" && python3 "+cmd+"/mpm.py "+args; 
  system(cmdAll.c_str());

   } else {
       perror("Error while running mpm");
       return 1;
   }

   return 0;
}
