//
//  DefineTheme.h
//  BaseProject
//
//  Created by Anpai on 2017/10/15.
//

#ifndef DefineTheme_h
#define DefineTheme_h

/**常用的距离 */
#define SCREEN_WIDTH  [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
/**iPhoneX的适配 */
#define ISIPHONEX  (SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0)

#define MAINSTATUSHEIGHT ((SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0) ? 44.0 : 20.0)

#define MAINNAVHEIGHT ((SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0) ? 88.0 : 64.0)
#define MAINTABHEIGHT ((SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0) ? 83.0 : 49.0)

#define ADJUSTOPHEIGHT ((SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0) ? 44.0 : 0.0)
#define ADJUSBOTHEIGHT ((SCREEN_HEIGHT== 812.0 || SCREEN_HEIGHT== 896.0) ? 34.0 : 0.0)
/**有导航栏二级子页面高度 */
#define GLOBALSUBHEIGHT (SCREEN_HEIGHT-MAINNAVHEIGHT-ADJUSBOTHEIGHT)

/**新的导航栏文字颜色 */
#define MainNavTextColor 0x000000
/**文字三级色彩 */
#define FirstTextColor 0x333333
#define SecondTextColor 0x666666
#define ThirdTextColor 0x999999
/**分割线颜色 */
#define SeparatorColor 0xE9E9E9
/**统一的背景色 */
#define MainBgColor 0xF6F6F6

/**定义根据屏幕比例调整控件大小、字体大小的宏方法 */
#define  CONVERT_SCALE(a) ((int)(a*([UIScreen mainScreen].bounds.size.width/375.0)))


#endif /* DefineTheme_h */
