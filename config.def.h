/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, instantmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int followcursor = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

static int instant = 0;
static int fuzzy = 1;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Cantarell-Regular:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][3] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ffffff", "#292f3a", "#3579CA" },
	[SchemeSel] = { "#ffffff", "#5294E2", "#3579CA" },
	[SchemeOut] = { "#000000", "#3579CA", "#3579CA" },
};

/* -l option; if nonzero, instantmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static unsigned int border_width = 0;
