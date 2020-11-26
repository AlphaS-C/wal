static const char norm_fg[] = "#d6dad6";
static const char norm_bg[] = "#131c1c";
static const char norm_border[] = "#959895";

static const char sel_fg[] = "#d6dad6";
static const char sel_bg[] = "#8EB9B7";
static const char sel_border[] = "#d6dad6";

static const char urg_fg[] = "#d6dad6";
static const char urg_bg[] = "#75AFAF";
static const char urg_border[] = "#75AFAF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
