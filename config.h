/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 350;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "jetbrainsmononerdfont:size=10:style=bold:antialias=true:autohint=true", "notocoloremoji:size=12" };
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */

static const char col_black[]  = "#000000";
static const char col_gray1[]  = "#111111";
static const char col_gray4[]  = "#eeeeee";
static const char col_orange[] = "#cc5500";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray4, col_gray1 },
	[SchemeSel] = { col_black, col_orange},
	[SchemeSelHighlight] = { col_black, col_orange},
  [SchemeNormHighlight] = { col_gray4, col_gray1 },
	[SchemeOut] = { col_orange, col_gray1 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
