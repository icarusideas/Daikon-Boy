#ifndef letters_H
#define letters_H

void letterA(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  //A frame of A
  s1.write(40, 30, true);
  s2.write(40, 30, true);
  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 40, false);
  s2.write(68, 30, false);
  delay(400);

  s1.write(42, 30, false);
  s2.write(95, 20, false);
  delay(400);
  s3.write(150, 0, false);

  //Crossbar of A
  delay(300);

  s1.write(25, 30, false);
  s2.write(85, 20, false);

  delay(500);

  s3.write(35, 0, false);

  delay(600);

  s1.write(25, 30, false);
  s2.write(40, 40, false);
  delay(300);
  s3.write(150, 0, false);
}

void letterB(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(35, 30, false);
  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 30, false);
  s2.write(35, 30, false);
  delay(400);

  s1.write(10, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(25, 30, false);
  s2.write(20, 30, false);
  delay(400);

  s1.write(25, 25, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(35, 30, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterC(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(15, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(35, 0, false);
  delay(400);

  s1.write(4, 30, false);
  s2.write(65, 30, false);
  delay(400);

  s1.write(25, 30, false);
  s2.write(35, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(65, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(30, 30, false);
  s2.write(95, 30, false);
  delay(400);
  s3.write(150, 0, false);
}

void letterD(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(35, 30, false);
  s3.write(35, 0, false);
  delay(400);

  s1.write(4, 45, false);
  s2.write(35, 45, false);
  delay(600);

  s1.write(10, 20, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(30, 30, false);
  s2.write(65, 30, false);
  delay(200);

  s1.write(40, 30, false);
  s2.write(35, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterE(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(300);

  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 45, false);
  s2.write(40, 45, false);
  delay(300);

  s1.write(4, 20, false);
  s2.write(95, 40, false);
  delay(600);

  s3.write(150, 0, false);
  delay(300);

  s1.write(20, 40, false);
  s2.write(95, 30, false);

  //Middle Crossbeam of E
  delay(300);
  s3.write(35, 0, false);

  delay(300);
  s1.write(20, 20, false);
  s2.write(40, 40, false);

  delay(600);
  s3.write(150, 0, false);

  delay(300);
  s1.write(40, 40, false);
  s2.write(40, 30, false);

  //Bottom Crossbeam of E
  delay(300);
  s3.write(35, 0, false);
  delay(300);

  s1.write(40, 20, false);
  s2.write(95, 40, false);
  delay(600);
  s3.write(150, 0, false);
}

void letterF(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(300);

  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 45, false);
  s2.write(40, 45, false);
  delay(300);

  s1.write(4, 20, false);
  s2.write(95, 40, false);
  delay(600);

  s3.write(150, 0, false);
  delay(300);

  s1.write(20, 40, false);
  s2.write(95, 30, false);

  //Middle Crossbeam of F
  delay(300);
  s3.write(35, 0, false);

  delay(300);
  s1.write(20, 20, false);
  s2.write(40, 40, false);

  delay(600);
  s3.write(150, 0, false);

  delay(300);
  s1.write(40, 40, false);
  s2.write(40, 30, false);
}

void letterG(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(15, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(35, 0, false);
  delay(400);

  s1.write(4, 30, false);
  s2.write(65, 30, false);
  delay(400);

  s1.write(25, 30, false);
  s2.write(35, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(65, 30, false);
  delay(400);

  s1.write(20, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(150, 0, false);
  delay(400);

  s1.write(20, 30, false);
  s2.write(65, 30, false);
  s3.write(35, 0, false);
  delay(400);

  s1.write(20, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterH(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(300);

  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 45, false);
  s2.write(40, 45, false);
  delay(300);

  s3.write(150, 0, false);
  delay(300);

  s1.write(4, 40, false);
  s2.write(95, 40, false);
  delay(300);

  s3.write(35, 0, false);
  delay(600);

  s1.write(40, 40, false);
  s2.write(95, 40, false);
  delay(600);
  s3.write(150, 0, false);

  s1.write(20, 40, false);
  s2.write(95, 40, false);
  delay(600);

  s3.write(35, 0, false);
  delay(600);

  s1.write(20, 40, false);
  s2.write(40, 40, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterI(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 60, true);
  s2.write(68, 60, true);
  delay(200);

  s3.write(35, 0, false);
  delay(400);

  s1.write(3, 45, false);
  s2.write(68, 30, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterJ(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(25, 60, true);
  s2.write(35, 60, true);
  delay(200);

  s3.write(35, 0, false);
  delay(400);

  s1.write(40, 40, false);
  s2.write(68, 50, false);
  delay(200);

  s1.write(3, 45, false);
  s2.write(68, 45, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterK(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  //Vertical bar of K
  s1.write(40, 30, true);
  s2.write(40, 30, true);
  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 30, false);
  s2.write(50, 30, false);
  delay(400);

  s3.write(150, 0, false);
  delay(300);

  //Kinked bar of K
  s1.write(4, 30, false);
  s2.write(94, 30, false);
  delay(100);

  s3.write(35, 0, false);
  delay(400);

  s1.write(35, 20, false);
  s2.write(50, 30, false);
  delay(500);

  s1.write(42, 20, false);
  s2.write(90, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterL(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(4, 30, false);
  s2.write(40, 30, false);
  delay(600);

  s3.write(35, 0, false);
  delay(300);

  s1.write(40, 45, false);
  s2.write(40, 45, false);
  delay(400);

  s1.write(40, 45, false);
  s2.write(95, 45, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterM(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 45, false);
  s2.write(40, 30, false);
  delay(400);

  s1.write(40, 45, false);
  s2.write(60, 30, false);
  delay(400);

  s1.write(4, 45, false);
  s2.write(60, 30, false);
  delay(400);

  s1.write(40, 45, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterN(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(600);

  s1.write(4, 45, false);
  s2.write(40, 30, false);
  delay(400);

  s1.write(40, 45, false);
  s2.write(95, 45, false);
  delay(500);

  s1.write(4, 45, false);
  s2.write(70, 45, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterO(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(4, 30, false);
  s2.write(70, 30, false);
  s3.write(35, 0, false);
  delay(600);

  s1.write(20, 15, false);
  s2.write(40, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s1.write(18, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(4, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterP(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(300);

  s3.write(35, 0, false);
  delay(400);

  s1.write(4, 45, false);
  s2.write(40, 45, false);
  delay(300);

  s1.write(4, 20, false);
  s2.write(95, 40, false);
  delay(300);

  s1.write(20, 20, false);
  s2.write(80, 30, false);
  delay(300);

  s1.write(20, 20, false);
  s2.write(40, 40, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterQ(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(4, 30, false);
  s2.write(70, 30, false);
  s3.write(35, 0, false);
  delay(400);

  s1.write(20, 15, false);
  s2.write(40, 30, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s1.write(18, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s1.write(4, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s3.write(150, 0, false);
  delay(400);

  s1.write(20, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s3.write(35, 0, false);
  delay(400);

  s1.write(40, 30, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterR(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(400);

  s1.write(4, 45, false);
  s2.write(40, 45, false);
  delay(300);

  s1.write(4, 20, false);
  s2.write(95, 40, false);
  delay(300);

  s1.write(20, 20, false);
  s2.write(80, 30, false);
  delay(300);

  s1.write(20, 20, false);
  s2.write(40, 40, false);
  delay(500);

  s1.write(40, 30, false);
  s2.write(95, 40, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterS(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 30, false);
  s2.write(90, 30, false);
  delay(600);

  s1.write(10, 30, false);
  s2.write(90, 30, false);
  s3.write(35, 0, false);
  delay(500);

  s1.write(3, 30, false);
  s2.write(68, 30, false);
  delay(300);

  s1.write(20, 10, false);
  s2.write(40, 30, false);
  delay(500);

  s1.write(20, 30, false);
  s2.write(90, 30, false);
  delay(700);

  s1.write(40, 30, false);
  s2.write(55, 30, false);
  delay(300);

  s1.write(30, 20, false);
  s2.write(40, 30, false);
  delay(300);

  s3.write(150, 0, false);
}

void letterT(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(40, 60, true);
  s2.write(68, 60, true);
  s3.write(35, 0, false);
  delay(600);

  s1.write(3, 30, false);
  s2.write(68, 30, false);
  delay(600);

  s3.write(150, 0, false);
  delay(200);

  s1.write(3, 30, false);
  s2.write(95, 30, false);
  s3.write(35, 0, false);
  delay(500);

  s1.write(3, 30, false);
  s2.write(35, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterU(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(500);

  s1.write(45, 30, false);
  s2.write(40, 30, false);
  delay(300);

  s1.write(45, 30, false);
  s2.write(80, 30, false);
  delay(300);

  s1.write(3, 30, false);
  s2.write(80, 30, false);
  delay(600);

  s3.write(150, 0, false);
}

void letterV(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(500);

  s1.write(45, 40, false);
  s2.write(70, 30, false);
  delay(600);

  s1.write(3, 45, false);
  s2.write(90, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterW(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(500);

  s1.write(45, 40, false);
  s2.write(40, 30, false);
  delay(600);

  s1.write(3, 45, false);
  s2.write(65, 30, false);
  delay(600);

  s1.write(45, 45, false);
  s2.write(80, 30, false);
  delay(600);

  s1.write(3, 45, false);
  s2.write(95, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterX(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(300);

  s1.write(20, 30, false);
  s2.write(70, 30, false);
  s1.write(45, 30, false);
  s2.write(95, 30, false);
  delay(500);

  s3.write(150, 0, false);
  delay(300);

  s1.write(3, 30, false);
  s2.write(75, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(300);

  s1.write(45, 40, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(150, 0, false);
}

void letterY(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(500);

  s3.write(35, 0, false);
  delay(300);

  s1.write(20, 30, false);
  s2.write(70, 30, false);
  delay(500);

  s1.write(3, 30, false);
  s2.write(90, 30, false);
  delay(400);

  s3.write(150, 0, false);
  delay(300);

  s1.write(15, 30, false);
  s2.write(65, 30, false);
  delay(400);

  s3.write(35, 0, false);
  delay(300);

  s1.write(45, 30, false);
  s2.write(70, 30, false);
  delay(400);

  s3.write(150, 0, false);
}

void letterZ(VarSpeedServo s1, VarSpeedServo s2, VarSpeedServo s3) {
  s1.write(3, 30, false);
  s2.write(40, 30, false);
  delay(600);

  s3.write(35, 0, false);
  delay(300);

  s1.write(3, 40, false);
  s2.write(90, 40, false);
  delay(500);

  s1.write(45, 30, false);
  s2.write(40, 40, false);
  delay(700);

  s1.write(40, 30, false);
  s2.write(95, 45, false);
  delay(500);

  s3.write(150, 0, false);
}

#endif

