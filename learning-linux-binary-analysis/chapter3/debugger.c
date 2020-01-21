#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/user.h>
#include <sys/stat.h>
#include <sys/ptrace.h>
#include <sys/mman.h>

typedef struct handle {
	Elf64_Ehdr *ehdr;
	Elf64_Phdr *phdr;
	Elf64_Shdr *shdr;
	uint8_t *mem;
	char *symname;
	Elf64_Addr symaddr;
	struct user_regs_struct pt_reg;
	char *exec;
} handle_t;

Elf64_Addr lookup_symbol(handle_t *, const char *);

int main (int argc, char **argv, char **envp) {
	int fd;
	handle_t h;
	struct stat st;
	long trap, orig;
	int status, pid;
	char * args[2];

	if (argc < 3) {
		printf("Usage: %s <program> <function>\n"), argv[0]);
		exit(0);
	}


}
