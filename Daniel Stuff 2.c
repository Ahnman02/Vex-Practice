#pragma config(Sensor, port8,  bump,           sensorVexIQ_Touch)
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
	motor[motor10] = 100;
	wait1Msec(1200);
	motor[motor10] = 0;

	drive(100, 100, 3300);

	drive(35, 100, 3100);

	drive(100, 100, 0);

	while(sensorValue[bump] == 0)
	{

	}

	drive(-100, -100, 325);

	drive(0, 0, 250);

	drive(100, -100, 500);

	drive(100, 100, 0);

	while(SensorValue[bump] == 0)
	{

	}

	drive(-100, -100, 200);

	drive(0, 0, 250);

	drive(100, -100, 450);

	drive(100, 100, 4700);

	drive(100, 35, 1500);

	drive(100, 100, 0);

	while(SensorValue[bump] == 0)
	{

	}

	drive(-100, -100, 200);

	drive(0, 0, 250);

	drive(-100, 100, 450);

	drive(100, 100, 0);

	while(SensorValue[bump] == 0)
{

}

drive(-100, -100, 200);

	drive(0, 0, 250);

	drive(-100, 100, 450);

	drive(100, 100, 0);

while(SensorValue[bump] == 0)

{

}

	drive(-100, -100, 200);

	drive(0, 0, 250);

	drive(-100, 100, 450);

	drive(100, 100, 0);





}
