#include <unistd.h>

static size_t ft_strlen(char const *s) {
  size_t i = 0;

  while (s[i])
    ++i;
  return (i);
}

static int not_double(char const *s, char c, int i) {
  for (int k = 0; k < i; ++k) {
    if (s[k] == c)
      return (0);
  }
  return (1);
}

int main(int argc, char **argv) {
  if (argc != 3) {
    write(STDOUT_FILENO, "\n", 1);
    return (0);
  }

  size_t const len = ft_strlen(argv[1]);

  for (int i = 0; argv[1][i]; ++i)
    if (not_double(argv[1], argv[1][i], i))
      write(STDOUT_FILENO, &argv[1][i], 1);

  for (int i = 0; argv[2][i]; ++i)
    if (not_double(argv[1], argv[2][i], len))
      if (not_double(argv[2], argv[2][i], i))
        write(STDOUT_FILENO, &argv[2][i], 1);

  write(STDOUT_FILENO, "\n", 1);
  return (0);
} //codigo by matheuzim, obrigado matheuzim ;)
