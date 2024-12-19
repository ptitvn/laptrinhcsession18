#include <stdio.h>
#include <string.h>

#define MAX_SV 5 

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[MAX_SV];
    int i;

    printf("Nhap thong tin cho %d sinh vien:\n", MAX_SV);

    for (i = 0; i < MAX_SV; i++) {
        printf("Sinh vien thu %d:\n", i+1);

        printf("  Ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("  Tuoi: ");
        scanf("%d", &sv[i].age);
        while (getchar() != '\n');

        printf("  So dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nThong tin cac sinh vien:\n");
    for (i = 0; i < MAX_SV; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("  Ten: %s\n", sv[i].name);
        printf("  Tuoi: %d\n", sv[i].age);
        printf("  So dien thoai: %s\n", sv[i].phoneNumber);
    }

    return 0;
}