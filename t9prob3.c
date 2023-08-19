#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE* html_file = fopen("pagina.html", "r");

  if (html_file == NULL) {
    printf("Erro ao abrir o arquivo HTML\n");
    return 1;
  }
  char line[1024];
  while (fgets(line, 1024, html_file)) {
    char* img_start = strstr(line, "<img");
    if (img_start) {
      char* src_start = strstr(img_start, "src=\"");
      if (src_start) {
        src_start += strlen("src=\"");
        char* src_end = strstr(src_start, "\"");
        if (src_end) {
          int src_length = src_end - src_start;
          char src[src_length + 1];
          strncpy(src, src_start, src_length);
          src[src_length] = '\0';
          char command[1024];
          sprintf(command, "wget %s", src);
          system(command);
        }
      }
    }
  }

  fclose(html_file);

  return 0;
}