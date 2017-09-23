       #define _GNU_SOURCE
       #include <unistd.h>
       #include <sys/syscall.h>
       #include <sys/types.h>
       #include <signal.h>

int main(int argc, char *argv[])
       {
           int x = syscall(332);

	}
/* EDIT */