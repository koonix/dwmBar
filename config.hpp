#ifndef config_hpp
#define config_hpp

#include <string>
#include <vector>

/* delimiter between modules */
/* the stuff enclosed in ^ characters are for my status2d patch */
static const std::string topDelimiter("^v^^c#555555^][^t^ ");

/* string that comes before the first module */
static const std::string beginDelimiter("^c#888888^^v^^#c#555555^[^t^ ");

/* string that comes after the last module */
static const std::string endDelimiter("^c#555555^]");

/* enable if you have the dwm-extrabar patch. */
static const bool twoBars = false;

/* delimiter between modules on your extra (bottom) bar */
static const std::string bottomDelimiter(" | ");

/* the delimiter used by the dwm-extrabar patch. */
static const std::string botTopDelimiter(";");

/*
  list of modules

. module-name: is name or path to a script or program.
    can start with ~/... for stuff in your home directory.
. internal/external: use internal if you want to use
. refresh-interval: in seconds, 0 means only update on receiving a real-time signal
. signal-id: SIGRTMIN signal id; must be between 0 and 30.*/

/*  module-name       internal/external   refresh-interval   signal-id */
static const std::vector< std::vector<std::string> > topModuleList = {
    {"dwmbar-net",      "external",       "8",               "4"},
    {"dwmbar-tor",      "external",       "9",               "3"},
    {"dwmbar-mem",      "external",       "3",               "2"},
    {"dwmbar-audio",    "external",       "0",               "5"},
    {"dwmbar-date",     "external",       "30",              "1"},
};

/* list of modules for extra (bottom) bar */
static const std::vector< std::vector<std::string> > bottomModuleList = {};

/* date format for the internal date/time module */
static const std::string dateFormat("%a %b %e %H:%M %Z");

/* list of file systems to monitor */
/* file systems to monitor for available space using the built-in disk space module. */
static const std::vector<std::string> fsNames{"/home", "/mnt/hdd"};

#endif
