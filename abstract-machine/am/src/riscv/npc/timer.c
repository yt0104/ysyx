#include <am.h>

static uint64_t boot_time = 0;

#define DEVICE_BASE     0xa0000000
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)

static uint64_t read_time() {

  uint64_t time = *(uint64_t*)RTC_ADDR;
  return time ;
}

void __am_timer_init() {
    boot_time = read_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  read_time();  /*???*/
  uptime->us = read_time() - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
