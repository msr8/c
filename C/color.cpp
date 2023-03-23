# include <stdio.h>

// https://gist.github.com/vratiu/9780109
int main () {
    char res[] = "\033[0m";

    char normal_black[] = "\033[0;90m";
    char normal_red[] = "\033[0;91m";
    char normal_green[] = "\033[0;92m";
    char normal_yellow[] = "\033[0;93m";
    char normal_blue[] = "\033[0;94m";
    char normal_purple[] = "\033[0;95m";
    char normal_cyan[] = "\033[0;96m";
    char normal_white[] = "\033[0;97m";

    char bold_black[] = "\033[1;90m";
    char bold_red[] = "\033[1;91m";
    char bold_green[] = "\033[1;92m";
    char bold_yellow[] = "\033[1;93m";
    char bold_blue[] = "\033[1;94m";
    char bold_purple[] = "\033[1;95m";
    char bold_cyan[] = "\033[1;96m";
    char bold_white[] = "\033[1;97m";

    char italic_black[] = "\033[3;90m";
    char italic_red[] = "\033[3;91m";
    char italic_green[] = "\033[3;92m";
    char italic_yellow[] = "\033[3;93m";
    char italic_blue[] = "\033[3;94m";
    char italic_purple[] = "\033[3;95m";
    char italic_cyan[] = "\033[3;96m";
    char italic_white[] = "\033[3;97m";

    char underlined_black[] = "\033[4;90m";
    char underlined_red[] = "\033[4;91m";
    char underlined_green[] = "\033[4;92m";
    char underlined_yellow[] = "\033[4;93m";
    char underlined_blue[] = "\033[4;94m";
    char underlined_purple[] = "\033[4;95m";
    char underlined_cyan[] = "\033[4;96m";
    char underlined_white[] = "\033[4;97m";

    char strikethough_black[] = "\033[9;90m";
    char strikethough_red[] = "\033[9;91m";
    char strikethough_green[] = "\033[9;92m";
    char strikethough_yellow[] = "\033[9;93m";
    char strikethough_blue[] = "\033[9;94m";
    char strikethough_purple[] = "\033[9;95m";
    char strikethough_cyan[] = "\033[9;96m";
    char strikethough_white[] = "\033[9;97m";



    printf("%sThis is normal black%s\n", normal_black, res);
    printf("%sThis is bold black%s\n", bold_black, res);
    printf("%sThis is italic black%s\n", italic_black, res);
    printf("%sThis is underlined black%s\n", underlined_black, res);
    printf("%sThis is strikethough black%s\n", strikethough_black, res);
    printf("\n");

    printf("%sThis is normal red%s\n", normal_red, res);
    printf("%sThis is bold red%s\n", bold_red, res);
    printf("%sThis is italic red%s\n", italic_red, res);
    printf("%sThis is underlined red%s\n", underlined_red, res);
    printf("%sThis is strikethough red%s\n", strikethough_red, res);
    printf("\n");

    printf("%sThis is normal green%s\n", normal_green, res);
    printf("%sThis is bold green%s\n", bold_green, res);
    printf("%sThis is italic green%s\n", italic_green, res);
    printf("%sThis is underlined green%s\n", underlined_green, res);
    printf("%sThis is strikethough green%s\n", strikethough_green, res);
    printf("\n");

    printf("%sThis is normal yellow%s\n", normal_yellow, res);
    printf("%sThis is bold yellow%s\n", bold_yellow, res);
    printf("%sThis is italic yellow%s\n", italic_yellow, res);
    printf("%sThis is underlined yellow%s\n", underlined_yellow, res);
    printf("%sThis is strikethough yellow%s\n", strikethough_yellow, res);
    printf("\n");

    printf("%sThis is normal blue%s\n", normal_blue, res);
    printf("%sThis is bold blue%s\n", bold_blue, res);
    printf("%sThis is italic blue%s\n", italic_blue, res);
    printf("%sThis is underlined blue%s\n", underlined_blue, res);
    printf("%sThis is strikethough blue%s\n", strikethough_blue, res);
    printf("\n");

    printf("%sThis is normal purple%s\n", normal_purple, res);
    printf("%sThis is bold purple%s\n", bold_purple, res);
    printf("%sThis is italic purple%s\n", italic_purple, res);
    printf("%sThis is underlined purple%s\n", underlined_purple, res);
    printf("%sThis is strikethough purple%s\n", strikethough_purple, res);
    printf("\n");

    printf("%sThis is normal cyan%s\n", normal_cyan, res);
    printf("%sThis is bold cyan%s\n", bold_cyan, res);
    printf("%sThis is italic cyan%s\n", italic_cyan, res);
    printf("%sThis is underlined cyan%s\n", underlined_cyan, res);
    printf("%sThis is strikethough cyan%s\n", strikethough_cyan, res);
    printf("\n");

    printf("%sThis is normal white%s\n", normal_white, res);
    printf("%sThis is bold white%s\n", bold_white, res);
    printf("%sThis is italic white%s\n", italic_white, res);
    printf("%sThis is underlined white%s\n", underlined_white, res);
    printf("%sThis is strikethough white%s\n", strikethough_white, res);
    printf("\n");
}