
task main()
{
motor[motor1] = 100;
motor[motor6] = -100;

wait1Msec(2500);

motor[motor1] = -100;
motor[motor6] = -100;

wait1Msec(500);

motor[motor1] = 100;
motor[motor6] = -100;

wait1Msec(900);

motor[motor1] = -100;
motor[motor6] = -100;

wait1Msec(950);

motor[motor1] = -100;
motor[motor6] = 100;

wait1Msec(2000);

motor[motor6] = -100;

wait1Msec(500);

motor[motor1] = 100;
motor[motor6] = -100;

wait1Msec(1300);

motor[motor1] = 100;
motor[motor6] = 100;

wait1Msec(400);

motor[motor1] = 100;
motor[motor6] = -100;

wait1Msec(1500);

}
