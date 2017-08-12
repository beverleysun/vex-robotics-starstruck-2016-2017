#pragma config(Motor,  port2,           rightBmotor,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftBmotor,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           strafe,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           rightArm,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           leftArm,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
    //drive forward towards fence
    motor[rightBmotor] = 127;
    motor[rightFmotor] = 127;
    motor[leftBmotor] = 127;
    motor[leftFmotor] = 127;
    wait1Msec(1600);

    //close claw from starting position to 180 degrees
    motor[claw] = 127;
    wait1Msec(140);
    //stops rotation of claw
    motor[claw] = 0;
    wait1Msec(110);
    
    //lift arm to knock stars off fence
    motor[rightArm] = 127;
    motor[leftArm] = 127;
    motor[extraMotors] = 127;
    wait1Msec(900);
    
    //stop drive motors
    motor[rightBmotor] = 0;
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(600);
    
    //arm stops when fully extended
    motor[rightArm] = 0;
    motor[leftArm] = 0;
    motor[extraMotors] = 0;
    wait1Msec(800);
    
    //all motors inactive at this point
    
    //drive back to middle of field
    motor[rightBmotor] = -127;
    motor[rightFmotor] = -127;
    motor[leftBmotor] = -127;
    motor[leftFmotor] = -127;
    
    //arm down to reach cube
    motor[rightArm] = -127;
    motor[leftArm] = -127;
    motor[extraMotors] = -127;
    wait1Msec(700);
    
    //stop drive motors at middle of field
    motor[rightBmotor] = 0;
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(1300);
    
    //stop arm at bottom
    motor[rightArm] = 0;
    motor[leftArm] = 0;
    motor[extraMotors] = 0;
    wait1Msec(300);
    
    //all motors inactive at this point
    
    //turn towards cube
    motor[rightBmotor] = 127;
    motor[rightFmotor] = 127;
    motor[leftBmotor] = -127;
    motor[leftFmotor] = -127;
    wait1Msec(350);
    
    //drive motors stop
    motor[rightBmotor] = 0;
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(40);
    
    //all motors inactive at this point
    
    //drives towards cube
    motor[rightBmotor] = 127;
    motor[rightFmotor] = 127;
    motor[leftBmotor] = 127;
    motor[leftFmotor] = 127;
    wait1Msec(700);
    
    //drive motors stop in front of cube
    motor[rightBmotor] = 0;
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(200);
    
    //all motors inactive at this point
    
    //close claw to grab cube
    motor[Claw] = 127;
    wait1Msec(600);
    //low power to grip the cube
    motor[Claw] = 50;
    
    //all motors inactive at this point
    
    //lift arm a little to reduce friction when moving cube
    motor[leftArm] = 127;
    motor[rightArm] = 127;
    motor[extraMotors] = 127;
    wait1Msec(400);
    
    //low power to keep arm in air
    motor[leftArm] = 30;
    motor[rightArm] = 30;
    motor[extraMotors] = 30;
    wait1Msec(400);
    
    //all motors inactive at this point
    
    //turns so back of robot faces fence
    motor[rightBmotor] = 127;
    motor[rightFmotor] = 127;
    motor[leftBmotor] = -127;
    motor[leftFmotor] = -127;
    wait1Msec(470);
    
    //drive motors stop
    motor[rightBmotor] = 0; //stops rotation just as it turns 90 degrees
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(400);
    
    //all motors inactive at this point
    
    //drive back towards fence
    motor[rightBmotor] = -127;
    motor[rightFmotor] = -127;
    motor[leftBmotor] = -127;
    motor[leftFmotor] = -127;
    wait1Msec(800);
    
    //drive motors stop
    motor[rightBmotor] = 0; //robot stops just at the fence
    motor[rightFmotor] = 0;
    motor[leftBmotor] = 0;
    motor[leftFmotor] = 0;
    wait1Msec(200);
    
    //all motors inactive at this point
    
    //lift arm with cube
    motor[leftArm] = 127; //arm extends with the cube to drop over the fence
    motor[rightArm] = 127;
    motor[extraMotors] = 127;
    wait1Msec(1500);
    
    //arm stop at 180 degrees
    motor[leftArm] = 0;
    motor[rightArm] = 0;
    motor[extraMotors] = 0;
    wait1Msec(500);
    
    //all motors inactive at this point
    
    //open claw to back-drop cube
    motor[Claw] = -127;
    wait1Msec(100);
    
    //claw stop
    motor[Claw] = 0;
    wait1Msec(200);
    
    //all motors inactive at this point
    
    //auton ends
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
    //forever loop
    while (true)
    {
        //drive with left joystick via addition of vectors
        motor[leftBmotor]  =  vexRT[Ch3] + vexRT[Ch4];
        motor[rightBmotor] =  vexRT[Ch3] - vexRT[Ch4];
        motor[leftFmotor]  =  vexRT[Ch3] + vexRT[Ch4];
        motor[rightFmotor] =  vexRT[Ch3] - vexRT[Ch4];
    
        /*
        strafe wheel using right joystick
        motor[strafe] = vexRT[Ch1];
        */

        //arm motors controlled by buttons 6U and 6D
        if(vexRT[Btn6U] == 1)
        {
            //arm up
            motor[rightArm]= 127;
            motor[leftArm]= 127;
            motor[extraMotors]= 127;
        }
        else
        {
            //arm down
            if(vexRT[Btn6D] == 1)
            {
                motor[rightArm]= -127;
                motor[leftArm]= -127;
                motor[extraMotors]= -127;
            }
            else
            {
                //stay still
                motor[rightArm]= 0;
                motor[leftArm]= 0;
                motor[extraMotors]= 0;
            }
        }

        //claw motors controlled by buttons 8R and 8L
        if(vexRT[Btn8R] == 1)
        {
            //close claw
            motor[claw]= 50;
        }
        else
        {
            if(vexRT[Btn8L] == 1)
            {
                //open claw
                motor[claw]= -50;
            }
            else
            {
                //stay still
                motor[claw]= 0;
            }
        }
    }
}
