#ifndef __WIRING_NULL_H__
#define __WIRING_NULL_H__
// Basic wiringPi functions

#define	OUTPUT			 1

static inline int  wiringPiSetup       (void) { return 0; }
/* static inline int  wiringPiSetupSys    (void) {} */
/* static inline int  wiringPiSetupGpio   (void) {} */
/* static inline int  wiringPiSetupPiFace (void) {} */

/* static inline int  piBoardRev          (void) {} */
/* static inline int  wpiPinToGpio        (int wpiPin) {} */

/* static inline int  wiringPiSetupPiFaceForGpioProg (void) {}	// Don't use this - for gpio program only */

static inline void pinMode(int pin, int mode) {}
/* static inline int  getAlt(int pin) { return 0; } */
/* static inline void pullUpDnControl(int pin, int pud)  {} */
static inline void digitalWrite(int pin, int value) {}
/* static inline void digitalWriteByte(int value) {} */
/* static inline void gpioClockSet(int pin, int freq) {} */
/* static inline void pwmWrite(int pin, int value) {} */
/* static inline void setPadDrive(int group, int value) {} */
static inline int  digitalRead(int pin) { return 0; }
/* static inline void pwmSetMode(int mode) {} */
/* static inline void pwmSetRange(unsigned int range) {} */
/* static inline void pwmSetClock(int divisor) {} */

// Interrupts

/* static inline int  (*waitForInterrupt) (int pin, int mS) ; */
/* static inline int  wiringPiISR         (int pin, int mode, void (*function)(void)) ; */

/* // Threads */

/* static inline int  piThreadCreate (void *(*fn)(void *)) ; */
/* static inline void piLock         (int key) ; */
/* static inline void piUnlock       (int key) ; */

/* // Schedulling priority */

/* static inline int piHiPri (int pri) ; */


/* // Extras from arduino land */

/* static inline void         delay             (unsigned int howLong) ; */
/* static inline void         delayMicroseconds (unsigned int howLong) ; */
/* static inline unsigned int millis            (void) ; */
/* static inline unsigned int micros            (void) ; */

#endif // __WIRING_NULL_H__

