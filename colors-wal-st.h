const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252544", /* black   */
  [1] = "#CB6874", /* red     */
  [2] = "#715B85", /* green   */
  [3] = "#745A84", /* yellow  */
  [4] = "#895B81", /* blue    */
  [5] = "#8E678A", /* magenta */
  [6] = "#AB6884", /* cyan    */
  [7] = "#d7acb7", /* white   */

  /* 8 bright colors */
  [8]  = "#967880",  /* black   */
  [9]  = "#CB6874",  /* red     */
  [10] = "#715B85", /* green   */
  [11] = "#745A84", /* yellow  */
  [12] = "#895B81", /* blue    */
  [13] = "#8E678A", /* magenta */
  [14] = "#AB6884", /* cyan    */
  [15] = "#d7acb7", /* white   */

  /* special colors */
  [256] = "#252544", /* background */
  [257] = "#d7acb7", /* foreground */
  [258] = "#d7acb7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
