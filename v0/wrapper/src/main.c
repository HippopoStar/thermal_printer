#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#define EXECUTABLE_PATH "/home/pi/Documents/thermal_printer/v0/approx.sh"

int	main(int argc, char *argv[])
{
	int	i;
	int	setreuid_ret_val;
	int	execve_ret_val;
	char	**execve_argv;

	char	execve_pathname[] = EXECUTABLE_PATH;
	char	*execve_envp[] = { execve_pathname, NULL };

	if (!(execve_argv = (char **)malloc((argc + 1) * sizeof(char *))))
	{
		fprintf(stderr, "Memory allocation error\n");
	}
	else
	{
		execve_argv[0] = execve_pathname;
		for (i = 1; i < argc; i++)
		{
			execve_argv[i] = argv[i];
		}
		execve_argv[argc] = NULL;
		if (!(setreuid_ret_val = setreuid(geteuid(), geteuid())))
		{
			execve_ret_val = execve(execve_pathname, execve_argv, execve_envp);
			free(execve_argv);
			fprintf(
				stdout, "Return Values [setreuid: %d | execve: %d]\n",
				setreuid_ret_val,
				execve_ret_val
			);
		}
		else
		{
			fprintf(stderr, "An error occured while setting real/effective user ID: %s\n", strerror(errno));
		}
	}
	return (0);
}

