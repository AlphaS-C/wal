static const char norm_fg[] = "#d7acb7";
static const char norm_bg[] = "#252544";
static const char norm_border[] = "#967880";

static const char sel_fg[] = "#d7acb7";
static const char sel_bg[] = "#715B85";
static const char sel_border[] = "#d7acb7";

static const char urg_fg[] = "#d7acb7";
static const char urg_bg[] = "#CB6874";
static const char urg_border[] = "#CB6874";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
