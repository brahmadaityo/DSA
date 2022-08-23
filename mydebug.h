#include <fcntl.h>
#include<string>
#include<random>
#pragma once

#ifdef FILE_I0 
int input_fd = open("input.txt", O_RDWR | O_CREAT | O_EXCL );
int output_fd = open("output.txt", O_RDWR | O_CREAT | O_EXCL );
//assert(input >= 0 );
//assert(output >= 0 );
FILE *input_file = freopen("input.txt","r+",stdin);
FILE *output_file = freopen("output.txt","w+",stdout);
#endif

static int DEGUG_NO=1;
#define dbg(x) {cerr<<"[ DEBUG "<<(DEGUG_NO++)<<" ] "<<" "<<#x<<" : "<<x<<"\n";}
#define adbg(e) {volatile int adbg_INDEX=0;cerr<<"[ DEBUG "<<(DEGUG_NO++)<<" ] "<<"\n";for(auto x : e) {cerr<<#e<<"["<<(adbg_INDEX++)<<"] : "<<x<<" ";}cerr<<"\n";}
#define edbg(var,expected_val) { int comp=(var==expected_val?1:0);cerr<<"[ DEBUG "<<(DEGUG_NO++)<<" ] "<<" "<<#var<<" : "<<var;if(comp){cerr<<"  \U00002705"<<"\n";} else{cerr<<"  \U0000274E"<<"\n";} }
