//
//  BHFace.h
//  STLivenessDetector
//
//  Created by bh on 16/2/29.
//  Copyright © 2016年 BoomHope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BHRect.h"
#import "BHPoint.h"

@interface BHFace : NSObject

/**
 *  相对于原图人脸框的位置
 */
@property (nonatomic , strong) BHRect *BHRect;

/**
 *  面部关键点集合 , 元素为 BHPoint 对象
 */
@property (nonatomic , copy) NSArray *arrBHPoints;

@end
