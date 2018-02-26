task main{
  //All the robot code
  setMotor(leftMotor,60);
  setMotor(rightMotor,60);
   wait(3,seconds);
  setMotor(leftMotor,-60);
  setMotor(rightMotor,-60);
  wait(3,seconds);
 setMotor(leftMotor,120);
  setMotor(rightMotor,120);
   wait(3,seconds);
  setMotor(leftMotor,-60);
  setMotor(rightMotor,-60);
  wait(3,seconds); 
  //Make the robot spin around
  setMotor(leftMotor,127);
  setMotor(rightMotor,0);
   wait(3,seconds);
  setMotor(leftMotor,0);
  setMotor(rightMotor,--127);
  wait(3,seconds);
}