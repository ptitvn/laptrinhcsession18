#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;

    strcpy(sv.name, "Le Trung Dong");
    sv.age = 18;
    strcpy(sv.phoneNumber, "0987654321");

    printf("Ten sinh vien lala: %s\n", sv.name);
    printf("Tuoii: %d\n", sv.age);
    printf("So dien thoaithoai: %s\n", sv.phoneNumber);

    return 0;
}