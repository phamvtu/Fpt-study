
#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, z, sum;
    printf("LUONG THUC LANH CUA MOT NHAN VIEN: \n");
    a = 12000;
    b = 0.12 * a;
    c = 150;
    d = 120;
    e = 450;
    f = 0.14 * a;
    g = 0.15 * a;
    z = f + g;
    sum = a + b + c + d + e - z;
    printf("Luong co ban = $%d\n", a);
    printf("DA = $%d\n", b);
    printf("HRA = $%d\n", c);
    printf("TA = $%d\n", d);
    printf("Cac Muc Khac = $%d\n", e);
    printf("PF = $%d\n", f);
    printf("IT = $%d\n", g);
    printf("Thue = PF + IT = $%d + $%d = $%d\n", f, g, z);
    printf("KET QUA LUONG THUC LANH = $%d", sum);
    return 0;
}