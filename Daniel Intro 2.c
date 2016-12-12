
task main()
{
	for(int i = 0; i < 4; i++)
	{
		motor[motor1] = 100;
		motor[motor6] = -100;

		wait1Msec(2500);

		motor[motor6] = 100;

		wait1Msec(250);

		motor[motor1] = 100;
		motor[motor6] = -100;

		wait1Msec(300);

		motor[motor6] = 100;

		wait1Msec(250);

		motor[motor1] = 100;
		motor[motor6] = -100;

	}
}
