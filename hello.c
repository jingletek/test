int main(int argv, char** argc) {
  if (argv < 1) {
    fprintf(stdout, "Usage: hello <string>\n");
    return -1;
  }
  
  fprintf(stdout, "Hello, %s!\n",  argc[1]);
  return 0;
}
