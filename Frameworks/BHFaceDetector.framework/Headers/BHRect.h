//
//  BHRect.h
//
//  Created by bh on 16/2/29.
//  Copyright © 2016年 BoomHope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BHRect : NSObject

/**
 *  相对于原图,人脸框最左边的坐标
 */
@property (nonatomic , assign) int iLeft;

/**
 *  相对于原图,人脸框最上边的坐标
 */
@property (nonatomic , assign) int iTop;

/**
 *  相对于原图,人脸框最右边的坐标
 */
@property (nonatomic , assign) int iRight;

/**
 *  相对于原图,人脸框最下边的坐标
 */
@property (nonatomic , assign) int iBottom;

@end
