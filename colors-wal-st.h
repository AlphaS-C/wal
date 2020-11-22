const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090914", /* black   */
  [1] = "#6F3441", /* red     */
  [2] = "#673D47", /* green   */
  [3] = "#953343", /* yellow  */
  [4] = "#944644", /* blue    */
  [5] = "#AB4D47", /* magenta */
  [6] = "#BF4047", /* cyan    */
  [7] = "#cca8a5", /* white   */

  /* 8 bright colors */
  [8]  = "#8e7573",  /* black   */
  [9]  = "#6F3441",  /* red     */
  [10] = "#673D47", /* green   */
  [11] = "#953343", /* yellow  */
  [12] = "#944644", /* blue    */
  [13] = "#AB4D47", /* magenta */
  [14] = "#BF4047", /* cyan    */
  [15] = "#cca8a5", /* white   */

  /* special colors */
  [256] = "#090914", /* background */
  [257] = "#cca8a5", /* foreground */
  [258] = "#cca8a5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
