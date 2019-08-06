//
//  BHFaceCommon.h
//  BHFaceController
//
//  Created by bh on 17/11/4.
//  Copyright © 2017年 BoomHope. All rights reserved.
//

#ifndef BHFaceCommon_h
#define BHFaceCommon_h


#define kSTColorWithRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]

#define kSTScreenWidth [UIScreen mainScreen].bounds.size.width
#define kSTScreenHeight [UIScreen mainScreen].bounds.size.height

#define kSTViewTagBase 1000

#endif /* BHFaceCommon_h */
