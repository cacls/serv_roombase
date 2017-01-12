#ifdef _MSC_VER
#include "stdafx.h"
#endif

#include "time.h"

using namespace Public;

// the definations of the class.
/***************************************
public:
	void CTime();
	void UpDate();
	byte_8 GetTime();
	static byte_8 GetRealTime();
	
private:
	byte_8 update_time;
	byte_8 last_update;
***************************************/

CTime::CTime()
{
	update_time = 0;
	last_update = 0;
}


void 
CTime::Update()
{
	last_update = update_time;
	update_time = time(NULL);
}

byte_8
cTime::GetTime()
{
	return last_update;
}

byte_8
cTime::GetRealTime()
{
	return time(NULL);
}
