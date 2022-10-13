#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv)
{
  char *cvalue = NULL;
  int index;
  int c;

  opterr = 0;

  while ((c = getopt (argc, argv, "hco:")) != -1)
    switch (c)
      {
      case 'h':
        printf("You entered:-h (-help)\nGuide how to use this program:\nEnter option -h for help\n");
        printf("Enter option -o out_file_name to set specific out file name\n");
        printf("Enter option -c  to enter special operating mode\n");
        break;
      case 'o':
        printf("You entered:-o %s (out file name: %s)\n...\n", optarg,optarg);
        break;
      case 'c':
        printf("You entered:-c\nSpecial operating mode activated!\n...\n");
        break;
      case '?':
        if (optopt == 'o')
          printf ("Option -%c requires an argument.\n", optopt);
        else if (isprint (optopt))
          printf ("Unknown option `-%c'.\n", optopt);
        else
          printf ("Unknown option character `\\x%x'.\n",optopt);
        return 1;
      default:
        abort ();
      }


  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);
  return 0;
}
