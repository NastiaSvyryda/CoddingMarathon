#include "header.h"

int main(int argc, char const *argv[]) {
    //if a number of command-line arguments are less or more than required
    if (argc != 6) {
        char s[] = "usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n";
        mx_printerr(s);
        exit(1);
    }
    if (argc == 6) {
        int file = open(argv[1], O_RDONLY);
        char buf[1];
        //in case of missing or empty file
        if (file < 0) {
            char s[] = "map does not exist\n";
            mx_printerr(s);
            exit(1);
        }
        int a = read(file, buf, 1);
        int countw = 0, countl = 0, zapomni = 0;
        while (a > 0) {
            //if there are forbidden characters
            if ((buf[0] != '#') && (buf[0] != '.') && (buf[0] != ',') && (buf[0] != '\n')) {
                char s[] = "map error\n";
                mx_printerr(s);
                exit(1);
            }
            //or map is not rectangular
            else if ((buf[0] == '#') || (buf[0] == '.')) {
                countl++;
            }
            else if (buf[0] == '\n') {
                zapomni = zapomni + countl;
                if (zapomni % countl != 0) {
                    //char s[] = "map error\n";
                    mx_printerr(MX_ERROR_MAP);
                    exit(1);
                }
                countl = 0;
                countw++;
            }
            a = read(file, buf, 1);
        }
        int dlina = zapomni / countw;
        // if points are out of map coordinates
        //2 element
        int count = 0;
        for (int j = 0; argv[2][j] != '\0'; j++) {
            count++;
        }
        char perevod2[count];
        perevod2[count] = '\0';
        for (int j = 0; argv[2][j] != '\0'; j++) {
            perevod2[j] = *mx_strdup(&argv[2][j]);
        }
        count = 0;
        int znach2 = 0;
        for (int i = 0; perevod2[i]; i++) {
            znach2 = znach2 * 10 + perevod2[i] - '0';
        }
        //3 element
        for (int j = 0; argv[3][j] != '\0'; j++) {
            count++;
        }
        char perevod3[count];
        perevod3[count] = '\0';
        for (int j = 0; argv[3][j] != '\0'; j++) {
            perevod3[j] = *mx_strdup(&argv[3][j]);
        }
        count = 0;
        int znach3 = 0;
        for (int i = 0; perevod3[i]; i++) {
            znach3 = znach3 * 10 + perevod3[i] - '0';
        }
        //4 element
        for (int j = 0; argv[4][j] != '\0'; j++) {
            count++;
        }
        char perevod4[count];
        perevod4[count] = '\0';
        for (int j = 0; argv[4][j] != '\0'; j++) {
            perevod4[j] = *mx_strdup(&argv[4][j]);
        }
        count = 0;
        int znach4 = 0;
        for (int i = 0; perevod4[i]; i++) {
            znach4 = znach4 * 10 + perevod4[i] - '0';
        }
        //5 element
        for (int j = 0; argv[5][j] != '\0'; j++) {
            count++;
        }
        char perevod5[count];
        perevod5[count] = '\0';
        for (int j = 0; argv[5][j] != '\0'; j++) {
            perevod5[j] = *mx_strdup(&argv[5][j]);
        }
        count = 0;
        int znach5 = 0;
        for (int i = 0; perevod5[i]; i++) {
            znach5 = znach5 * 10 + perevod5[i] - '0';
        }

        if ((znach2 > dlina) || (znach4 > dlina)) {
            char s[] = "points are out of map range\n";
            mx_printerr(s);
            exit(1);
        }
        if ((znach3 > zapomni) || (znach5 > zapomni)) {
            char s[] = "points are out of map range\n";
            mx_printerr(s);
            exit(1);
        }
        close(file);
        //create an array
        int file1 = open(argv[1], O_RDONLY);
        char buf1[1];
        int massiv[countw][dlina];
        for (int i = 0 ; i < countw; i++) {
            for (int j = 0 ; j < dlina * 2; j++) {
                read(file1, buf1, 1);
                if (buf1[0] == '#') {
                    massiv[i][j] = 0;
                    printf("%d", massiv[i][j]);
                }
                if (buf1[0] == '.') {
                    massiv[i][j] = 1;
                    printf("%d", massiv[i][j]);
                }
            }
            printf("%s", "\n");
        }
        close(file1);
        //if the entry point is also an obstacle
        if (massiv[znach3][znach2] == 0) {
            char s[] = "entry point cannot be an obstacle\n";
            mx_printerr(s);
            exit(1);
        }
        //if the exit point is also an obstacle
        if (massiv[znach5][znach4] == 0) {
            char s[] = "exit point cannot be an obstacle\n";
            mx_printerr(s);
            exit(1);
        }
    }
    //error in case of any other errors
    else {
        char s[] = "error\n";
        mx_printerr(s);
        exit(1);
    }
}
