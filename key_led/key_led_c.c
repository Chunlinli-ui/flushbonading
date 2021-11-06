#define GPFCON      (*(volatile unsigned long*)0x56000050)
#define GPFDAT      (*(volatile unsigned long*)0x56000054)
#define GPBCON      (*(volatile unsigned long*)0x56000010)
#define GPBDAT      (*(volatile unsigned long*)0x56000014)

int main()
{
        unsigned long dwDat;
        
        GPFCON &= 0xFFFFFF3F;
        GPFCON |= 0x00000040;
        
        GPBCON &= 0xFFFFCFFF;
        
        while(1){
                dwDat = GPBDAT;
                
                if(dwDat & (1<<6))
                    GPFDAT |= 0x00000008;
                else
                    GPFDAT &= 0xFFFFFFF7;
        }
        return 0;
}




