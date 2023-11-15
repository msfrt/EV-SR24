#ifndef APPMONITOR_H
#define APPMONITOR_H

typedef enum {
  APPMON_RUNALWAYS,
  APPMON_RUN,
  APPMON_PAUSE,
  APPMON_STEP,
  APPMON_REBOOT,
} E_AppMonState;

typedef enum {
  FOREGROUND_OVERRUN_ACTION_STOP,
  FOREGROUND_OVERRUN_ACTION_COUNT,
} E_AppMonForegroundOverrunAction;

typedef enum {
  STACK_OVERRUN_ACTION_STOP,
  STACK_OVERRUN_ACTION_COUNT,
} E_AppMonStackOverrunAction;

#endif                                 // APPMONITOR_H
