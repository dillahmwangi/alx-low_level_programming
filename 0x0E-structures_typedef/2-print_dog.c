
USER@DESKTOP-B7F0DF3 MINGW64 ~
$ ssh d7f3602e17fc@d7f3602e17fc.173da3ee.alx-cod.online
d7f3602e17fc@d7f3602e17fc.173da3ee.alx-cod.online's password:
root@d7f3602e17fc:/# ls
alx-low_level_programming  alx-pre_course  alx-system_engineering-devops  alx-zero_day  bin  boot  dev  etc  home  lib  lib32  lib64  libx32  media  mnt  opt  proc  Project_D  root  run  sbin  srv  sys  tmp  usr  var
root@d7f3602e17fc:/# cd alx-low_level_programming
root@d7f3602e17fc:/alx-low_level_programming# ls
0x00-hello_world              0x02-functions_nested_loops  0x04-more_functions_nested_loops  0x06-pointers_arrays_strings  0x08-recursion         0x0A-argc_argv    0x0C-more_malloc_free    myfile
0x01-variables_if_else_while  0x03-debugging               0x05-pointers_arrays_strings      0x07-pointers_arrays_strings  0x09-static_libraries  0x0B-malloc_free  0x0E-structures_typedef
root@d7f3602e17fc:/alx-low_level_programming# cd 0x0E-structures_typedef
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# ls
dog.h  README.md
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git add  .
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git commit -m 'header file'
[master 0b4a2c8] header file
 1 file changed, 29 insertions(+), 3 deletions(-)
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git push
Password for 'https://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@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 619 bytes | 619.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/dillahmwangi/alx-low_level_programming.git
   9e3f9fa..0b4a2c8  master -> master
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# cat > 1-init_dog.c
/*
 * File: 1-init_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
^C
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# chmod u+x 1-init_dog.c
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef#
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git add .
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git commit -m 'initialize a variable'
[master 9a8edda] initialize a variable
 1 file changed, 24 insertions(+)
 create mode 100755 0x0E-structures_typedef/1-init_dog.c
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# git push
Password for 'https://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@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 630 bytes | 630.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/dillahmwangi/alx-low_level_programming.git
   0b4a2c8..9a8edda  master -> master
root@d7f3602e17fc:/alx-low_level_programming/0x0E-structures_typedef# cat > 2-print_dog.c
/*
 * File: 2-print_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
