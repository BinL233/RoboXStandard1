/***********************************
 *È«¾ÖÅäÖÃÎÄ¼ş
 *Ó¢ĞÛ³µ²âÊÔ°æ 20180709
 ***********************************/
#ifndef __CONFIG_H
#define __CONFIG_H
//#define PI 	3.1415926f

/********************************************************************************************************************
 **********************************************ÓÃ»§²ã¹¦ÄÜÉèÖÃ*********************************************************/

#define CHASSIS_POSITION_CRTL	//µ×ÅÌÎ»ÖÃ»·¿ØÖÆ£¬×¢ÊÍµôÊ±Ôò½öÊ¹ÓÃËÙ¶È»·
#define PITCH_IMU_CTRL	//ÔÆÌ¨pitchÖáµÄ¿ØÖÆÊ¹ÓÃimu²âÁ¿µÄ¾ø¶Ô½Ç¶ÈÊı¾İ×÷·´À¡£¬×¢ÊÍµôÔòÊ¹ÓÃµç»úÂëÅÌµÄÏà¶Ô½Ç¶È×÷·´À¡
#define YAW_ENCO_CTRL		//ÔÆÌ¨yawÖáÊ¹ÓÃµç»úÂëÅÌ×÷·´À¡

#define PC_HIGH_SPEED_X		2500	//µçÄÔ°´×¡shift¿ØÖÆÊ±£¬¸ßËÙÄ£Ê½µÄËÙ¶È£¬Ç°ºó,mm/s
#define PC_HIGH_SPEED_Y		2500	//µçÄÔ°´×¡shift¿ØÖÆÊ±£¬¸ßËÙÄ£Ê½µÄËÙ¶È£¬×óÓÒ,mm/s
#define PC_LOW_SPEED_X		500	//µçÄÔ°´×¡CTRL¿ØÖÆÊ±£¬µÍËÙÄ£Ê½µÄËÙ¶È£¬Ç°ºó,mm/s
#define PC_LOW_SPEED_Y		500	//µçÄÔ°´×¡CTRL¿ØÖÆÊ±£¬µÍËÙÄ£Ê½µÄËÙ¶È£¬×óÓÒ,mm/s
#define PC_SPEED_X				1500	//µçÄÔ¿ØÖÆÆÕÍ¨ËÙ¶È£¬Ç°ºó
#define PC_SPEED_Y				1500	//µçÄÔ¿ØÖÆÆÕÍ¨ËÙ¶È£¬×óÓÒ

#define PC_MouseSpeed_X		1			//Êó±êËÙ¶È±¶ÂÊ
#define PC_MouseSpeed_Y		1			//Êó±êËÙ¶È±¶ÂÊ
#define REMOTE_Vx_MAX			2500	//Ò£¿ØÆ÷¿ØÖÆ×î´óËÙ¶È£¬Ç°ºó
#define REMOTE_Vy_MAX			2500	//Ò£¿ØÆ÷¿ØÖÆ×î´óËÙ¶È£¬×óÓÒ
#define REMOTE_Wz_MAX			PI		//Ò£¿ØÆ÷¿ØÖÆ×î´óËÙ¶È£¬º½Ïò
#define REMOTE_Yaw_Angle	2050	//Ò£¿ØÆ÷¿ØÖÆ×î´óËÙ¶È£¬º½Ïò
#define REMOTE_Pitch_Angle	25	//pitchÖá×î´ó½Ç¶È
//20

/********************************************************************************************************************
 ***************************************************ÅäÖÃÉùÃ÷*********************************************************/

//*********************µ×ÅÌ»úĞµ²ÎÊı*********************
#define MOTOR_P		19		//µç»ú¼õËÙ³İ±È
#define WHEEL_R		76		//ÂÖ×Ó°ë¾¶
#define CHASSIS_K	445		//K=0.5*(ºáÖá³¤¶È+×İÖá³¤¶È)mm

//******************3510µç»ú¼«ÏŞĞÔÄÜ********************
/*´ø19¼õËÙÏäÇé¿öÏÂÊµ²âµÃµ½
 ************************/
#define LIM_3510_SPEED	6880		//µçµ÷·µ»Ø×î´óµÄËÙ¶ÈÖµ
#define LIM_3510_ANGLE	940			//Ã¿ÖÜÆÚ×î´óÂëÖµ²½³¤

//******************Ò¡¸ËÖĞÎ»Æ«ÖÃ************************
#define RC_ch0_Offset 0
#define RC_ch1_Offset 0
#define RC_ch2_Offset 0
#define RC_ch3_Offset 0
 
//****************ÔÆÌ¨µç»úÅäÖÃÉùÃ÷********************
#define Yaw_MID					3400		//ÖĞµãÂëÖµ
#define Yaw_MAX					5423		//ÂëÖµ·¶Î§£ºÖĞµã+-1760
#define Yaw_MIN					1327
#define Pitch_MID				6850		//ÖĞµãÂëÖµ
#define Pitch_MAX				7450		//ÂëÖµ·¶Î§£ºÖĞµã+-1760
#define Pitch_MIN				6400
#define Yaw_Direction		 -1			//µç»ú°²×°·½Ïò£¬1»ò-1
#define Pitch_Direction	 -1			//µç»ú°²×°·½Ïò£¬1»ò-1

//****************²¦ÅÌµç»úÅäÖÃÉùÃ÷********************
#define M2006_Direction	 -1			//µç»ú°²×°·½Ïò£¬1»ò-1

//*******************pidÆµÂÊÉùÃ÷**********************
#define PID_Hz 					500


/********************************************************************************************************************
 ***************************************************ĞÔÄÜÉèÖÃ*********************************************************/

//******************×î´óËÙ¶È¡¢¼ÓËÙ¶È*********************
#define Vx_MAX 				1890			// mm/s£¬Ó¦Ğ¡ÓÚLIM_3510_27_Vx
//1280
//1890
#define Vy_MAX				1890			// mm/s£¬Ó¦Ğ¡ÓÚLIM_3510_27_Vy
//1890
//1280
#define Wz_MAX 				PI				// rad/s,»¡¶ÈÃ¿Ãë
#define X_ACC_MAX			1000			//×î´ó¼ÓËÙ¶È£¬¼´¼ÓËÙµ½X_ACC_MAXĞèÒªÒ»ÃëÖÓ
//2000
#define Y_ACC_MAX			1000			//×î´ó¼ÓËÙ¶È£¬¼´¼ÓËÙµ½Y_ACC_MAXĞèÒªÒ»ÃëÖÓ
//2000
//1000
#define Z_ACC_MAX			(4*PI)		//×î´ó¼ÓËÙ¶È£¬¼´¼ÓËÙµ½Z_ACC_MAXĞèÒªÒ»ÃëÖÓ

//****************µ×ÅÌ¸úËæÔÆÌ¨Ä£Ê½Ïà¹Ø**********************
#define GIM_FOLLOW_ANGLE			5			//µ×ÅÌ¿ªÊ¼¸úËæÔÆÌ¨µÄ½Ç¶È,Õı¸º5¶È
#define GIM_FOLLOW_ANGLE_D		10			//µ×ÅÌ¿ªÊ¼¸úËæÔÆÌ¨µÄ½Ç¶È²¹³¥£¬ÓëGIM_FOLLOW_ANGLE¹¹³É¶¯Ì¬¼ÓËÙÇø¼ä
																			//¶¯Ì¬Çø¼äÔÚGIM_FOLLOW_ANGLE+-(GIM_FOLLOW_ANGLE_D*Wz_MAX)ÄÚ¸¡¶¯
#define GIM_FOLLOW_BUFFERING	20			//»º³å½Ç¶È£¬×óÓÒ¸÷25¶È
#define FLLOW_RATE						1.5f		//µ×ÅÌÒÔFLLOW_RATE±¶ËÙ¶È×·ÖğÔÆÌ¨µÄ
#define FLLOW_ACC							(2*PI)	//µ×ÅÌ¸úËæÔÆÌ¨µÄ×î´ó¼ÓËÙ¶È£¬¼´¼ÓËÙµ½FLLOW_ACCĞèÒªÒ»ÃëÖÓ

//****************µ×ÅÌ×Ô¶¯»ØÖĞÄ£Ê½Ïà¹Ø**********************
#define GIM_HIGH_SPEED_POS		20			//ÔÆÌ¨¸ßËÙÔË¶¯Çø¼ä£¬¶È
#define GIM_HIGH_SPEED_RATE		2				//¸ßËÙÔË¶¯Çø¼äÊ±µÄËÙ¶È±¶ÂÊ

//*********************Å¤ÑüÄ£Ê½Ïà¹Ø***********************
#define TWIST_ANGLE						5			//Å¤ÑüµÄ½Ç¶È
#define TWIST_SPEED						PI			//Å¤ÑüµÄËÙ¶È
#define Twist_Vy_P	         	60       //Since the Twist will affect y axis of velocity, this parameter is used to implement this part


//*********************×Ô¶¯Ãé×¼Ä£Ê½Ïà¹Ø£¨¸ß¼¶Ïî£©***********************
#define VISION_X_Pixels				640	//xÖáÏñËØ
#define VISION_Y_Pixels				480	//yÖáÏñËØ
#define VISION_X_Offset				0		//xÖáÖĞµãÆ«ÖÃ
#define VISION_y_Offset				0		//yÖáÖĞµãÆ«ÖÃ


/********************************************************************************************************************
 ***************************************************²ÎÊıÉèÖÃ*********************************************************/

//****************µ×ÅÌµç»úpid²ÎÊı************************
//ËÙ¶È»·pid
#define PID_MOTOR_SPEED_KP			(3.8f)
#define PID_MOTOR_SPEED_KI			(0.0f) //0.2
#define PID_MOTOR_SPEED_KD			(3.5f)
#define PID_MOTOR_SPEED_I_MAX		(1500)	//»ı·Ö×î´óÖµ
#define PID_MOTOR_SPEED_I_Err		(500)		//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö
//Î»ÖÃ»·pid

#define PID_MOTOR_ANGLE_KP			(0.02f)
#define PID_MOTOR_ANGLE_KI			(0.0f)
#define PID_MOTOR_ANGLE_KD			(0.0f)

//****************ÔÆÌ¨µç»úpid²ÎÊı************************
//PitchÖá½ÇËÙ¶È»·
#define PID_PITCH_SPEED_KP		(13.0f)
//100·
#define PID_PITCH_SPEED_KI		(0.2f)
//1.0
//0.5
#define PID_PITCH_SPEED_KD		(200.0f)
//1000
#define PID_PITCH_SPEED_I_MAX	(400)	//»ı·Ö×î´óÖµ
#define PID_PITCH_SPEED_I_Err	(100)	//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö
//PitchÖá½Ç¶È»·
#define PID_PITCH_ANGLE_KP		(20.0f)
//20
//17
#define PID_PITCH_ANGLE_KI		(0.0f)
#define PID_PITCH_ANGLE_KD		(0)
#define PID_PITCH_ANGLE_I_MAX	(50)	//»ı·Ö×î´óÖµ
#define PID_PITCH_ANGLE_I_Err	(10)	//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö

//////YawÖá½ÇËÙ¶È»·
//#define PID_YAW_SPEED_KP			(500.0f)
////150
//#define PID_YAW_SPEED_KI			(0.5f)
////0.5
//#define PID_YAW_SPEED_KD			(1000.0f)
////2000
//#define PID_YAW_SPEED_I_MAX		(400)	//»ı·Ö×î´óÖµ
//#define PID_YAW_SPEED_I_Err		(100)	//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö

//YawÖá½ÇËÙ¶È»·
#define PID_YAW_SPEED_KP			(20.0f)
#define PID_YAW_SPEED_KI			(0.1f)
#define PID_YAW_SPEED_KD			(300.0f)
#define PID_YAW_SPEED_I_MAX		(400)	//»ı·Ö×î´óÖµ
#define PID_YAW_SPEED_I_Err		(100)	//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö

//YawÖá½Ç¶È»·
#define PID_YAW_ANGLE_KP			(20.0f)
#define PID_YAW_ANGLE_KI			(0.0f)
#define PID_YAW_ANGLE_KD			(0.0f)
#define PID_YAW_ANGLE_I_MAX		(50)	//»ı·Ö×î´óÖµ
#define PID_YAW_ANGLE_I_Err		(10)	//»ı·Ö·ÖÀëÖµ£¬²îÖµÔÚ´ËÖµÒÔÄÚ²Å½øĞĞ»ı·Ö


//²¦µ¯µç»ú
#define PID_FIRE_SPEED_KP			(3.8f)
#define PID_FIRE_SPEED_KI			(0.8f)
#define PID_FIRE_SPEED_KD			(2.5f)
#define PID_FIRE_SPEED_I_MAX	(50)	//»ı·Ö×î´óÖµ

//×Ô¶¯Ãé×¼
#define VISION_X_KP						(0.01f)
#define VISION_X_KI						(0)
#define VISION_X_KD						(0)
#define VISION_Y_KP						(0)
#define VISION_Y_KI						(0)
#define VISION_Y_KD						(0)


//***********************IMU parameter************************
#define IMU_TEMP				9000		//target temperature
#define TEMP_Tolerance	60			//tolerance of temperature error
#define TEMP_KP					2.4f
#define TEMP_KI					1
#define TEMP_KD					1

//***********************·äÃùÆ÷²ÎÊı************************
#define BUZZER_TIME			300			//·äÃùÆ÷¹¤×÷Ò»´ÎµÄÊ±¼ä³¤¶È£¬ms



//***********************snail motor 2132 parameter************************
#define Snail_Direction 	1
#define Fric_UP   				1500
#define Fric_MID					1400
#define Fric_DOWN 				1250
#define Fric_OFF  				1000

#endif

