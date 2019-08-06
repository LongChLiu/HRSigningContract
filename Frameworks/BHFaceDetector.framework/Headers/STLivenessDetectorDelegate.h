//
//   BHLivenessDetectorDelegate.h
//   STLivenessDetectorDelegate
//
//  Created by bh on 17/11/4.
//  Copyright © 2017年 BoomHope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BHFaceEnumType.h"
#import "BHImage.h"
#import "BHRect.h"
/**
 *  活体检测器代理
 */
@protocol STLivenessDetectorDelegate <NSObject>

@optional

/**
 *  每个检测模块开始的回调方法
 *
 *  @param iDetectionType 当前开始检测的模块类型
 */


/**
 *  每个检测模块开始的回调方法
 *
 *  @param iDetectionType  当前开始检测的模块类型
 *  @param iDetectionIndex 当前开始检测的模块在动作序列中的位置, 从0开始.
 */
- (void)livenessDidStartDetectionWithDetectionType:(LivefaceDetectionType)iDetectionType detectionIndex:(int)iDetectionIndex;

/**
 *  每一帧数据回调一次,回调当前模块已用时间及当前模块允许的最大处理时间.
 *
 *  @param dPast             当前模块检测已用时间
 *  @param dDurationPerModel 当前模块检测总时间
 */
- (void)livenessTimeDidPast:(double)dPast durationPerModel:(double)dDurationPerModel;

@required

/**
 *  活体检测成功回调
 *
 *  @param data       回传加密后的二进制数据
 *  @param arrSTImage 根据指定输出方案回传 STImage 数组 , STImage属性见 STImage.h
 */
- (void)livenessDidSuccessfulGetData:(NSData *)data stImages:(NSArray *)arrSTImage;


/**
 *  活体检测失败回调
 *
 *  @param iErrorType      失败的类型
 *  @param iDetectionType  失败时的检测模块类型
 *  @param iDetectionIndex 失败时的检测模块在动作序列中的位置, 从0开始
 *  @param data            回传加密后的二进制数据
 *  @param arrSTImage      根据指定输出方案回传 STImage 数组 , STImage属性见 STImage.h
 */
- (void)livenessDidFailWithErrorType:(LivefaceErrorType)iErrorType
                       detectionType:(LivefaceDetectionType)iDetectionType
                      detectionIndex:(int)iDetectionIndex
                                data:(NSData *)data
                            stImages:(NSArray *)arrSTImage;

/**
 *  活体检测被取消的回调
 *
 *  @param iDetectionType  检测被取消时的检测模块类型
 *  @param iDetectionIndex 检测被取消时的检测模块在动作序列中的位置, 从0开始
 */
- (void)livenessDidCancelWithDetectionType:(LivefaceDetectionType)iDetectionType
                            detectionIndex:(int)iDetectionIndex;


@optional
/**
 *  人脸对准的回调
 *  @param status      对准的类型
 */
- (void)livenessTrackerStatus:(LivefaceErrorType)status;

/**
 *  每一帧数据回调一次,返回每帧人脸框位置信息.
 *
 *  @param rect  返回每帧人脸框位置信息
 */

- (void)livenessFaceRect:(BHRect *)rect;

/** 帧率 */
- (void)videoFrameRate:(int)rate;

@end
