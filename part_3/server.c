#include <stdio.h>
#include "fcgi_stdio.h"

int main(void) {
    // Цикл, который принимает и обрабатывает входящие запросы
    while (FCGI_Accept() >= 0) {
        // Заголовок HTTP-ответа
        printf("Content-type: text/html\r\n\r\n");
        // Тело ответа - HTML-страница с надписью "Hello World!"
        printf("<h1>Hello World!</h1>");
    }

    return 0;
}
