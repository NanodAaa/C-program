

unsigned char Busy_Check(); //检测LCD1602繁忙

void write_lcd1602_command(unsigned char com); //向LCD1602写入命令

void lcd1602_write_data(unsigned char dat); //向LCD1602写入数据

void lcd1602_write_char(unsigned char Hang, unsigned char Lie, unsigned char n); //向LCD1602写入字符

void lcd1602_write_string(unsigned char Hang1, unsigned char Lie1, unsigned char *s); //向LCD1602写入字符串

void lcd1602_clear(); //清屏

void lcd1602_init();  //显示初始化

void lcd1602_alarm_init(); //闹钟设置初始化命令

void lcd1602_course_move(); //光标移动指令

void lcd1602_change_number(); //改变lcd1602屏幕数字

unsigned char lcd1602_read_data(); //从lcd1602中读取?

unsigned char read_lcd1602_char(unsigned char hang, unsigned char lie); //读取字符

void ds1302_write_data(unsigned char cmd, unsigned char dat); //向DS1302写入数据

unsigned char ds1302_read(unsigned char cmd); //从DS1302读出数据

unsigned char dat_to_BCD(unsigned char dat); //转码

unsigned char BCD_to_dat(unsigned char dat); //转码

void DelayUs(unsigned char tu); //延时函数

void DelayMs(unsigned char tm);