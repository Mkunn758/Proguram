#include <Servo.h>
Servo s1, s2, s3;
#define do1  131
#define do2  262
#define do3  523
#define re1  147
#define re2  294
#define re3  587
#define mi1  165
#define mi2  330
#define mi3  659
#define fa1  175
#define fa2  349
#define fa3  698
#define so1  196
#define so2  392
#define so3  784
#define la1  220
#define la2  440
#define la3  880
#define shi1  247
#define shi2  494
#define shi3  988

int melo = 200;
int pin1 = 13;
int pin2 = 12;
int pin3 = 11;

void setup() {
  s1.attach(6);
  s2.attach(5);
  s3.attach(3);

  s1.write(90);
  s2.write(90);
  s3.write(90);


}

void loop() {

  delay(1000) ;

  for (int i = 0; i < 2; i++) {
    s3.write(90);
    tone(pin1, shi2, 100) ;
    delay(100) ;
    s2.write(90);
    tone(pin1, la2, 200) ;
    delay(200) ;
    noTone(13);
    delay(500) ;
    tone(pin1, shi3, 100) ;
    delay(100) ;
    s3.write(45);
    tone(pin1, la3, 200) ;
    delay(200) ;
    s2.write(45);
    noTone(13);
    delay(500) ;
  }
  for (int i = 0; i < 4; i++) {
    s2.write(90);
    tone(pin1, shi2, 100) ;
    delay(100) ;
    tone(pin1, la2, 200) ;
    delay(200) ;
    s2.write(45);
    noTone(pin1);
    delay(100) ;
  }
  for (int i = 0; i < 4; i++) {
    s1.write(90);
    tone(pin1, shi3, 100) ;
    delay(100) ;
    s2.write(90);
    tone(pin1, la3, 200) ;
    delay(200) ;
    s1.write(45);
    noTone(13);
    delay(100) ;
    s2.write(45);
  }

  s1.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s3.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s2.write(45);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s1.write(90);
  s3.write(45);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s2.write(90);
  tone(pin1, so3, 200) ;
  delay(200) ;
  s2.write(45);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(90);
  s1.write(45);
  tone(pin1, 587, 200) ;
  delay(200) ;
  s2.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(45);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(90);
  s2.write(45);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s2.write(90);
  tone(pin1, la3, 350) ;
  delay(350) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(45);
  tone(pin1, 554, 200) ;
  delay(200) ;
  s1.write(45);
  tone(pin1, 554, 200) ;
  delay(200) ;
  s3.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s2.write(90);
  s3.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s2.write(45);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s3.write(45);
  tone(pin1, 740, 200) ;
  delay(200) ;
  for (int i = 0; i < 4; i++) {
    s1.write(90);
    tone(pin1, 740, 200) ;
    delay(200) ;
    s1.write(45);
    tone(pin1, mi3, 200) ;
    delay(200) ;
  }
  s2.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s1.write(45);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s1.write(90);
  s3.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, so3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, 587, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(45);
  tone(pin1, 554, 200) ;
  s1.write(90);
  delay(200) ;
  tone(pin1, 554, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, la3, 200) ;
  delay(200);
  s2.write(45);
  s1.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s3.write(45);
  tone(pin1, 740, 200) ;
  delay(200) ;
  for (int i = 0; i < 2; i++) {
    s1.write(90);
    tone(pin1, 740, 200) ;
    delay(200) ;
    s1.write(45);
    tone(pin1, mi3, 200) ;
    delay(200) ;
  }
  s2.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, 1480, 380) ;
  delay(380) ;
  s3.write(45);
  s1.write(90);
  s2.write(90);
  tone(pin1, shi3, 380) ;
  delay(380) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  noTone(11);
  delay(10);
  s3.write(45);
  tone(pin1, la3, 380) ;
  delay(380) ;

  s2.write(90);
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, so3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s2.write(90);
  s3.write(45);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s1.write(45);

  s2.write(90);
  tone(pin1, 1480, 380) ;
  delay(380) ;
  s3.write(90);
  s2.write(45);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s2.write(90);
  s3.write(45);
  tone(pin1, shi3, 380) ;
  delay(380) ;
  s1.write(90);
  s2.write(45);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s2.write(90);
  s1.write(45);
  tone(pin1, 931, 200) ;
  delay(200) ;
  s1.write(90);
  s2.write(45);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s3.write(90);
  s1.write(45);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(90);
  s3.write(45);
  tone(pin1, 1109, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  noTone(pin1);
  delay(10);
  s2.write(45);
  s1.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s1.write(45);
  s3.write(90);

  tone(pin1, 1480, 380) ;
  delay(380) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi3, 380) ;
  delay(380) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s1.write(45);
  s3.write(90);
  noTone(pin1);
  delay(10);
  s3.write(45);
  s1.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s1.write(45);
  s2.write(90);

  tone(pin1, 830, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, shi3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, 1109, 200) ;
  delay(200) ;
  for (int i = 0; i < 4; i++) {
    s1.write(90);
    tone(pin1, 1175, 200) ;
    delay(200) ;
    s2.write(90);
    tone(pin1, la3, 200) ;
    delay(200) ;
    s1.write(45);
    tone(pin1, 1109, 200) ;
    delay(200) ;
    s2.write(45);
    tone(pin1, la3, 200) ;
    delay(200) ;
  }
  for (int i = 0; i < 6; i++) {
    s1.write(90);
    tone(pin1, 1175, 350) ;
    delay(350) ;
    s1.write(45);
    noTone(pin1);
    delay(2);
    s2.write(90);
    tone(pin1, 1175, 100) ;
    delay(80) ;
    s2.write(45);
    noTone(pin1);
    delay(2);
  }
  s3.write(90);
  tone(pin1, 1175, 380) ;
  delay(380) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, re2, 380) ;
  delay(380) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, so2, 600) ;
  delay(600) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, re3, 380) ;
  s2.write(45);
  s3.write(90);
  delay(380) ;
  noTone(pin1);
  s3.write(45);
  s1.write(90);
  delay(5);
  s1.write(45);
  s3.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s3.write(45);
  noTone(pin1);
  delay(5);
  s1.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, la3, 380) ;
  s3.write(45);
  s1.write(90);
  delay(380) ;
  noTone(pin1);
  delay(5);
  s1.write(45);
  s2.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  noTone(pin1);
  delay(5);
  s2.write(45);
  s3.write(90);
  tone(pin1, la3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, so2, 200) ;
  delay(200) ;

  s1.write(45);
  s2.write(90);
  tone(pin1, so3, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, 740, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s1.write(45);
  s3.write(90);
  tone(pin1, so2, 600) ;
  delay(600) ;

  s3.write(45);
  s2.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;

  s1.write(45);
  s2.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  noTone(pin1);
  delay(5);
  s2.write(45);
  s3.write(90);
  tone(pin1, re3, 380) ;
  delay(380) ;
  s3.write(45);
  noTone(pin1);
  delay(5);
  s2.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, mi3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s2.write(45);
  noTone(pin1);
  delay(5);
  s3.write(90);
  tone(pin1, la3, 380) ;
  delay(380) ;
  s3.write(45);
  noTone(pin1);
  delay(5);
  s1.write(90);
  tone(pin1, la3, 200) ;
  delay(200) ;

  s1.write(45);
  s3.write(90);
  tone(pin1, do3, 200) ;
  delay(200) ;
  s3.write(45);
  s2.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s3.write(45);
  s1.write(90);
  tone(pin1, so2, 200) ;
  delay(200) ;

  s1.write(45);
  s2.write(90);
  tone(pin1, re3, 200) ;
  delay(200) ;
  s2.write(45);
  s3.write(90);
  tone(pin1, la2, 200) ;
  delay(200) ;
  s2.write(45);
  s1.write(90);
  tone(pin1, shi2, 200) ;
  delay(200) ;
  s1.write(45);
  s2.write(90);
  tone(pin1, so2, 380) ;
  delay(200) ;
  s2.write(45);
  noTone(pin1);
  delay(370);













  delay(5000) ;         // 1秒待機
}
