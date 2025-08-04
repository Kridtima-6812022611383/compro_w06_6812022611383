#include <stdio.h>

int main() {
    float x = 10.0, rate = 5.0; //ประกาศตัวแปรชนิด float (จำนวนทศนิยม) 2ตัว คือ x กำหนดค่าเริ่มต้นเป็น 10.0 และ rate กำหนดค่าเป็น 5
    int y = 3, z = 2, a = 4;  //ประกาศตัวแปรชนิด int (จำนวนเต็ม) 3 ตัว คือ y=3, z=2, a=4
    float total = 100.0, price = 20.0, quantity = 2.0, discount = 5.0; //ประกาศตัวแปรชนิด float อีก 4 ตัว ได้แก่ total, price, quantity, และ discount พร้อมกำหนดค่าเริ่มต้น
    int score = 80, penalty = 3, mistake = 1; //ประกาศตัวแปรชนิด int อีก 3 ตัว ได้แก่ score, penalty, และ mistake พร้อมกำหนดค่าเริ่มต้น

    x -= 4.0; //
    printf("Short-hand expression: x -= 4.0 = x = %.2f\n", x);   //เเบบย่อ
    printf("Long-hand expression: x = x - 4.0 = x = %.2f\n\n", x); //เเบบเต็ม

    x *= 6.5;
    printf("Short-hand expression: x *= 6.5; x = %.2f\n", x); //เเบบย่อ
    printf("Long-hand expression: x = 6.5 * x = x = %.2f\n\n", x);//เเบบเต็ม

    x = 25; 
    x = (int)x % (y + z * a);
    printf("Short-hand expression: x %%= (y + z*a); x = %.0f\n", x); //เเบบย่อ
     printf("Long-hand expression: x = x %% (y + z * a) = x = %d\n\n", x); //เเบบเต็ม

    x = 10.0;
    x /= (2.0 * x);
    printf("Short-hand expression: x /= (2.0*x); x = %.2f\n", x);//เเบบย่อ
    printf("Long-hand expression: x = x / (2.0 * x) = x = %.4f\n\n", x); //เเบบเต็ม

    total += (price * quantity - discount);
    printf("Short-hand expression: total += (price * quantity - discount) = total = %d\n", total); //เเบบย่อ
    printf("Long-hand expression: total = total + (price * quantity - discount) = total = %d\n\n", total); //เเบบเต็ม

    x = 100.0;
    x *= (1 + rate / 100);
    printf("Short-hand expression: x *= (1 + rate / 100) = x = %.2f\n", x); //เเบบย่อ
    printf("Long-hand expression: x = x * (1 + rate / 100) = x = %.2f\n\n", x); //เเบบเต็ม

    score -= (penalty * (mistake + 1));
    printf("Short-hand expression: score -= (penalty * (mistake + 1)) = score = %d\n", score); //เเบบย่อ
    printf("Long-hand expression: score = score - (penalty * (mistake + 1)) = score = %d\n", score); //เเบบเต็ม
    return 0;
}
