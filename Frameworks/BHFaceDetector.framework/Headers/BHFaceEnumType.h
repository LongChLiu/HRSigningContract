//
//  BHLivenessEnumType.h
//  
//
//  Created by bh on 17/11/4.
//  Copyright © 2017年 BoomHope. All rights reserved.
//

#ifndef BHLivenessEnumType_h
#define BHLivenessEnumType_h

/**
 *  活体检测失败类型
 */
typedef NS_ENUM(NSInteger, LivefaceErrorType) {
    /**
     *  算法SDK初始化失败-授权文件路径错误(SenseID_Liveness.lic)
     */
    LIVENESS_FINANCELICENS_FILE_NOT_FOUND = 0,
    
    /**
     *  算法SDK初始化失败-授权文件的内容不合法(SenseID_Liveness.lic)
     */
    LIVENESS_FINANCELICENS_CHECK_LICENSE_FAIL,
    
    /**
     *  算法SDK初始化失败-绑定包名不符
     */
    LIVENESS_INVALID_APPID,
    
    /**
     *  算法SDK初始化失败-SDK权限过期
     */
    LIVENESS_AUTH_EXPIRE,
    
    /**
     *  算法SDK初始化失败-模型路径错误
     */
    LIVENESS_MODELSBUNDLE_FILE_NOT_FOUND,
    
    /**
     *  算法SDK初始化失败-模型文件错误
     */
    LIVENESS_MODELSBUNDLE_CHECK_MODEL_FAIL,

    /**
     *  相机权限获取失败
     */
    LIVENESS_CAMERA_ERROR,
    
    /**
     * 没有人脸
     */
    LIVENESS_NOFACE,    
    /**
     * 人脸距离手机过远
     */
    LIVENESS_FACE_TOO_FAR,
    
    /**
     * 人脸距离手机过近
     */
    LIVENESS_FACE_TOO_CLOSE,
    
    /**
     * 人脸对准中
     */
    LIVENESS_DETECTING,
    
    /**
     * 人脸对准成功
     */
    LIVENESS_SUCCESS,
    /**
     *  检测超时
     */
    LIVENESS_TIMEOUT,
    
    /**
     *  应用即将被挂起
     */
    LIVENESS_WILL_RESIGN_ACTIVE,
    
    /**
     *  配置错误
     */
    LIVENESS_CONFIG_FAIL,
    
};

/**
 *  检测模块类型
 */
typedef NS_ENUM(NSInteger, LivefaceDetectionType) {
    
    /**
     *  未定义类型
     */
    LIVE_NONE = 0,
    
    /**
     *  眨眼检测
     */
    LIVE_BLINK,
    
    /**
     *  上下点头检测
     */
    LIVE_NOD,
    
    /**
     *  张嘴检测
     */
    LIVE_MOUTH,
    
    /**
     *  左右转头检测
     */
    LIVE_YAW
};


/**
 *  人脸方向
 */
typedef NS_ENUM(NSUInteger, LivefaceOrientaion) {
    /**
     *  人脸向上，即人脸朝向正常
     */
    LIVE_FACE_UP = 0,
    /**
     *  人脸向左，即人脸被逆时针旋转了90度
     */
    LIVE_FACE_LEFT = 1,
    /**
     *  人脸向下，即人脸被逆时针旋转了180度
     */
    LIVE_FACE_DOWN = 2,
    /**
     *  人脸向右，即人脸被逆时针旋转了270度
     */
    LIVE_FACE_RIGHT = 3
};

/**
 *  活体检测复杂度
 */
typedef NS_ENUM(NSUInteger, LivefaceComplexity) {
    
    /**
     *  简单, 人脸变更时不会回调 LIVENESS_FACE_CHANGED 错误, 活体阈值低
     */
    LIVE_COMPLEXITY_EASY,
    
    /**
     *  一般, 人脸变更时会回调 LIVENESS_FACE_CHANGED 错误, 活体阈值较低
     */
    LIVE_COMPLEXITY_NORMAL,
    
    /**
     *  较难, 人脸变更时会回调 LIVENESS_FACE_CHANGED 错误, 活体阈较高
     */
    LIVE_COMPLEXITY_HARD,
    
    /**
     *  困难, 人脸变更时会回调 LIVENESS_FACE_CHANGED 错误, 活体阈值高
     */
    LIVE_COMPLEXITY_HELL
};

#endif /* BHLivenessEnumType_h */
