#ifndef _H_STRUKTURY_
#define _H_STRUKTURY_

struct helm
{
	int def;
	char nazwa[30];
	
	

}OP_HELM, IRON_HELMET;
struct kostur
{
	int atk;
	double szyb_atk;
	char nazwa[30];
}RAINBOW_STAFF;
struct postac
{
	double zycie;
	double obrazenia;
	int str;
	int AC;
	float atk_spd;


}GRACZ_1;
struct wrog
{
	double zycie;
	float atk_spd;
	double obrazenia;

}snake_e;

#endif