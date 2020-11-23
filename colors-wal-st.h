const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#11000a", /* black   */
  [1] = "#EA1E1B", /* red     */
  [2] = "#F52F1B", /* green   */
  [3] = "#D51B23", /* yellow  */
  [4] = "#DC1F20", /* blue    */
  [5] = "#FF481C", /* magenta */
  [6] = "#FB5E25", /* cyan    */
  [7] = "#f0ae9c", /* white   */

  /* 8 bright colors */
  [8]  = "#a8796d",  /* black   */
  [9]  = "#EA1E1B",  /* red     */
  [10] = "#F52F1B", /* green   */
  [11] = "#D51B23", /* yellow  */
  [12] = "#DC1F20", /* blue    */
  [13] = "#FF481C", /* magenta */
  [14] = "#FB5E25", /* cyan    */
  [15] = "#f0ae9c", /* white   */

  /* special colors */
  [256] = "#11000a", /* background */
  [257] = "#f0ae9c", /* foreground */
  [258] = "#f0ae9c",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
