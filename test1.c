#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc, char* argv[]){
  int v = argc;
  printf(1, "%p\n", &v);
  exit(0);
}
