static const char norm_fg[] = "#c2c2c1";
static const char norm_bg[] = "#0C0B08";
static const char norm_border[] = "#696255";

static const char sel_fg[] = "#c2c2c1";
static const char sel_bg[] = "#3E3F40";
static const char sel_border[] = "#c2c2c1";

static const char urg_fg[] = "#c2c2c1";
static const char urg_bg[] = "#704B33";
static const char urg_border[] = "#704B33";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
