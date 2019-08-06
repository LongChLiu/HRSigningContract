//
//  BHTracker.h
//  BHFaceDetector
//
//  Created by bh on 16/3/1.
//  Copyright © 2016年 BoomHope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "BHFaceEnumType.h"
#import "STLivenessDetectorDelegate.h"
@interface STTracker : NSObject

/**
 *  初始化方法
 *
 *  @param strModelPath          模型资源 face_1.0.model 的路径
 *  @param strFinanceLicensePath bh_liveness.lic的路径.
 *  @return 人脸跟踪器实例,当SDK绑定的包名与实际包名不符或者测试版SDK过期时会初始化失败,返回nil
 */

- (instancetype)initWithModelPath:(NSString *)strModelPath
                      financeLicensePath:(NSString *)strFinanceLicensePath;

/**
 *  对连续输入帧进行人脸跟踪
 *  @param sampleBuffer    每一帧的图像数据
 *  @param faceOrientation 人脸的朝向
 *
 */
- (void)trackWithCMSanmpleBuffer:(CMSampleBufferRef)sampleBuffer
                  faceOrientaion:(LivefaceOrientaion)faceOrientation;

/**
 *  检测器配置方法
 *
 *  @param delegate     回调代理
 *  @param queue        回调线程
 *  @param point        人脸对准目标框（圆的）的的中心点的X和Y
 *  @param radius       人脸对准目标框（圆的）的半径
 */

- (void)setDelegate:(id <STLivenessDetectorDelegate>)delegate callBackQueue:(dispatch_queue_t)queue prepareCenterPoint:(CGPoint)point prepareRadius:(CGFloat)radius;

/** 开始检测人脸*/
- (void)startTracking;

/** 停止检测人脸*/
- (void)stopTracking;

@end
