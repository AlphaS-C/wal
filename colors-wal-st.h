const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#131c1c", /* black   */
  [1] = "#75AFAF", /* red     */
  [2] = "#8EB9B7", /* green   */
  [3] = "#ACB3AB", /* yellow  */
  [4] = "#D79588", /* blue    */
  [5] = "#D0AA9D", /* magenta */
  [6] = "#B7C3BB", /* cyan    */
  [7] = "#d6dad6", /* white   */

  /* 8 bright colors */
  [8]  = "#959895",  /* black   */
  [9]  = "#75AFAF",  /* red     */
  [10] = "#8EB9B7", /* green   */
  [11] = "#ACB3AB", /* yellow  */
  [12] = "#D79588", /* blue    */
  [13] = "#D0AA9D", /* magenta */
  [14] = "#B7C3BB", /* cyan    */
  [15] = "#d6dad6", /* white   */

  /* special colors */
  [256] = "#131c1c", /* background */
  [257] = "#d6dad6", /* foreground */
  [258] = "#d6dad6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
