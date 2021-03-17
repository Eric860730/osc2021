void stripString(char *str) {
    while (*str != '\0') {
        if (*str == '\n'){
            *str = '\n';
            return;
        }
        ++str;
    }
}

int compareString(char *command, char *buffer){
    unsigned char c1, c2;

    do {
        c1 = (unsigned char)*buffer++;
        c2 = (unsigned char)*command++;
        if (c1 == '\0') {
            return c1 - c2;
        }
    } while (c1 == c2);

    return c1 - c2;
}

// only take 10-base integer string
unsigned int getIntegerFromString(const char *str) {
    unsigned int value = 0u;

    while (*str){
        value = value * 10u + (*str - '0');
        ++str;
    }
    return value;
}
