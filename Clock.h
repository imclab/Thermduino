#ifndef CLOCK_H
#define CLOCK_H

#include <WProgram.h>

#include <Persistant.h>


class Clock {
	public:
		Clock(void);
		
		void tick(void);
		
		void setDayNumber(uint8_t dayNumber);
		void setDayOfWeek(uint8_t dayOfWeek);
		
		uint8_t getDayNumber(void);
		uint8_t getDayOfWeek(void);
	
	private:
		unsigned long secsToday;  // Number of seconds that have elapsed today
		uint8_t       dayNumber;  // The day number today is
		uint8_t       dayOfWeek;  // 0 = Mon, ..., Sun = 6
		
		unsigned long lastMillis; // Value recorded by millis at last tick
};


#endif
