//
//  UIColor+ZCFoundation.h
//  ZCBEcommerce
//
//  Created by ZCB-MAC on 15/11/12.
//  Copyright © 2015年 ZCB-MAC. All rights reserved.
//

#import <UIKit/UIKit.h>

//颜色创建
#undef  RGBCOLOR
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]

#undef  RGBACOLOR
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#undef	HEX_RGB
#define HEX_RGB(V)		[UIColor colorWithRGBHex:V]

@interface UIColor (ZCFoundation)

+ (UIColor *)colorWithRGBHex:(UInt32)hex;
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;
@end
