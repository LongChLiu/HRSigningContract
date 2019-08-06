//
//  BHPoint.h
//
//  Created by bh on 16/2/29.
//  Copyright © 2016年 BoomHope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BHPoint : NSObject

/**
 *  相对于原图点的水平方向坐标,为浮点数
 */
@property (nonatomic , assign) CGFloat fX;


/**
 *  相对于原图点的竖直方向坐标,为浮点数
 */
@property (nonatomic , assign) CGFloat fY;

@end
