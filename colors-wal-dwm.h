static const char norm_fg[] = "#f0ae9c";
static const char norm_bg[] = "#11000a";
static const char norm_border[] = "#a8796d";

static const char sel_fg[] = "#f0ae9c";
static const char sel_bg[] = "#F52F1B";
static const char sel_border[] = "#f0ae9c";

static const char urg_fg[] = "#f0ae9c";
static const char urg_bg[] = "#EA1E1B";
static const char urg_border[] = "#EA1E1B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
