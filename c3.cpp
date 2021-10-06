#include <iostream>

int main() {

  float x;
  float y;
  float z;

  printf("ใส่ตัวเลขที่หนึ่ง :");
  scanf("%f",&x);
   printf("ใส่ตัวเลขที่สอง :");
  scanf("%f",&y);
   printf("ใส่ตัวเลขที่สาม :");
  scanf("%f",&z);

  printf("ค่าเฉลี่ยของสามจำนวน : %.1f",(x+y+z) / 3);


}