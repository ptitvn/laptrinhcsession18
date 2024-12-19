#include <stdio.h>
#include <string.h>

#define MAX_SV 50 

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[MAX_SV];
    int i, n;

    printf("Nhap so luong sinh vien (toi da %d): ", MAX_SV);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SV) {
        printf("So luong sinh vien khong hop le!\n");
        return 1;
    }

    int id = 1; 
    for (i = 0; i < n; i++) {
        sv[i].id = id++;

        printf("\nNhap thong tin sinh vien thu %d:\n", i+1);
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
    for (i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("  ID: %d\n", sv[i].id);
        printf("  Ten: %s\n", sv[i].name);
        printf("  Tuoi: %d\n", sv[i].age);
        printf("  So dien thoai: %s\n", sv[i].phoneNumber);
    }

    return 0;
}