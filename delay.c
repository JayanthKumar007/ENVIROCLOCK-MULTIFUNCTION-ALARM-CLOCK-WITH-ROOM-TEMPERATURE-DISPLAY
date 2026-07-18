#include"types.h"
void delayUS(u32 dlyUS)
{
	dlyUS*=12;
	while(dlyUS--);
}
void delayMS(u32 dlyMS)
{
	dlyMS*=12000;
	while(dlyMS--);
}
void delayS(u32 dlyS)
{
	dlyS*=1200000;
	while(dlyS--);
}
