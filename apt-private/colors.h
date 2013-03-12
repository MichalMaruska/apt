
#ifndef __COLORS_H__
#define __COLORS_H__

// I want these simple global variables:
// color::info
//
// at first I can compute them, and these would be
// default values:

#define escape_sequence "\x1b"

#define info_color  "\x1b[47;30m"
#define warn_color "\x1b[01;32;41m"

#define install_color "\x1b[33;01m"

#define remove_color "\x1b[38;5;160m"
// xy
// x:  4 bg,  3 fg
//
// y:
// red   1
// white 7
// blue  4
// cyan  6


#define blocked_color "\x1b[47;31m"

#define version_color "\x1b[38;5;226m"

#define color_reset "\x1b[0m"


#endif /* __COLORS_H__ */
