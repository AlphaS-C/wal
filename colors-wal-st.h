const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04060D", /* black   */
  [1] = "#315369", /* red     */
  [2] = "#3C6278", /* green   */
  [3] = "#51666F", /* yellow  */
  [4] = "#4A6879", /* blue    */
  [5] = "#84816D", /* magenta */
  [6] = "#3E6A81", /* cyan    */
  [7] = "#9eb1b9", /* white   */

  /* 8 bright colors */
  [8]  = "#6e7b81",  /* black   */
  [9]  = "#315369",  /* red     */
  [10] = "#3C6278", /* green   */
  [11] = "#51666F", /* yellow  */
  [12] = "#4A6879", /* blue    */
  [13] = "#84816D", /* magenta */
  [14] = "#3E6A81", /* cyan    */
  [15] = "#9eb1b9", /* white   */

  /* special colors */
  [256] = "#04060D", /* background */
  [257] = "#9eb1b9", /* foreground */
  [258] = "#9eb1b9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
