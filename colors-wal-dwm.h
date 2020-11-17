static const char norm_fg[] = "#9eb1b9";
static const char norm_bg[] = "#04060D";
static const char norm_border[] = "#6e7b81";

static const char sel_fg[] = "#9eb1b9";
static const char sel_bg[] = "#3C6278";
static const char sel_border[] = "#9eb1b9";

static const char urg_fg[] = "#9eb1b9";
static const char urg_bg[] = "#315369";
static const char urg_border[] = "#315369";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
