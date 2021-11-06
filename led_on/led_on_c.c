#define GPFCON		(*(volatile unsigned long *)0x56000050)//GPFCON寄存器地址
#define GPFDAT		(*(volatile unsigned long *)0x56000054)//GPDAT寄存器地址

int main()
{
	//GPFCON = GPFCON & 0xFFFFFF3F;
//	GPFCON = GPFCON | 0x00000040;

	//GPFDAT = GPFDAT & 0xFFFFFFF7;
    
    GPFCON = GPFCON & 0xFFFFC03F;//相应位清零
    
    GPFCON = GPFCON | 0x00001540;//设置GPF3\4\5\6为输出口

	PFDAT = GPFDAT & 0xFFFFFF87;//输出口为0输出低电平
    

	return 0;
}
