#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;

    printf("Nhap thong tin sinh vien:\n");

    printf("Ten: ");
    fgets(sv.name, 50, stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Tuoi: ");
    scanf("%d", &sv.age);

    printf("So dien thoai: ");
    fgets(sv.phoneNumber, 15, stdin);
    scanf("%s",&sv.phoneNumber);
    sv.phoneNumber[strcspn(sv.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien vua nhap la:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}