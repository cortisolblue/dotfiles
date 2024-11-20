const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C0B08", /* black   */
  [1] = "#704B33", /* red     */
  [2] = "#3E3F40", /* green   */
  [3] = "#695A48", /* yellow  */
  [4] = "#685D4E", /* blue    */
  [5] = "#865036", /* magenta */
  [6] = "#916D52", /* cyan    */
  [7] = "#c2c2c1", /* white   */

  /* 8 bright colors */
  [8]  = "#696255",  /* black   */
  [9]  = "#704B33",  /* red     */
  [10] = "#3E3F40", /* green   */
  [11] = "#695A48", /* yellow  */
  [12] = "#685D4E", /* blue    */
  [13] = "#865036", /* magenta */
  [14] = "#916D52", /* cyan    */
  [15] = "#c2c2c1", /* white   */

  /* special colors */
  [256] = "#0C0B08", /* background */
  [257] = "#c2c2c1", /* foreground */
  [258] = "#c2c2c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
