#include <stdio.h>
#include <string.h>

void parse_json(char *json) {
    char *ptr = json;
    while (*ptr != '\0') {
        if (*ptr == '"') {
            ptr++;
            char *key_start = ptr;
            while (*ptr != '"' && *ptr != '\0') {
                ptr++;
            }
            if (*ptr == '\0') break;
            *ptr = '\0';
            char *key = key_start;
            
            ptr++;
            while (*ptr != '"' && *ptr != '\0') {
                ptr++;
            }
            if (*ptr == '\0') break;
            
            ptr++;
            char *val_start = ptr;
            while (*ptr != '"' && *ptr != '\0') {
                ptr++;
            }
            if (*ptr == '\0') break;
            *ptr = '\0';
            char *value = val_start;
            
            printf("Found -> Key: %s | Value: %s\n", key, value);
        }
        ptr++;
    }
}

int main() {
    char json_data[1024];
    printf("Enter a JSON string: ");
    
    if (fgets(json_data, sizeof(json_data), stdin) != NULL) {
        json_data[strcspn(json_data, "\n")] = 0;
        printf("\nParsing...\n");
        parse_json(json_data);
    }
    
    return 0;
}
