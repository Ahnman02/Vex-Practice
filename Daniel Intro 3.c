#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive(int leftMotorPower, int rightMotorPower, int time)
{
	motor[leftMotor] = leftMotorPower;
	motor[rightMotor] = rightMotorPower;
	wait1Msec(time);
}

task main()
{
	drive(100, 50, 1400);

	drive(100, 100, 500);

	drive(25, 100, 2000);

	drive(100, 100, 1500);

	drive(100, 40, 3000);

	drive(100, 100, 1250);

	drive(40, 100, 3300);

	drive(100, 100, 1300);

	drive(100, 40, 3000);
}
