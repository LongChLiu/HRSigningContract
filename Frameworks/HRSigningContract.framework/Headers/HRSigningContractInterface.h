//
//  CreditInterface.h
//  CreditInformation
//
//  Created by hr on 2018/6/30.
//  Copyright © 2018年 CreditInformation.com. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^successAlertResultBlock)(NSDictionary *successAlertDic);
typedef void(^errorResultBlock)(NSDictionary *errorDic);
typedef void(^bankCardCertificationResultBlock)(NSDictionary *bankCardCertificationResultDic);

typedef void(^signCompleteBlock)(NSDictionary *signCompleteDic);

//! Project version string for YourSDK.
FOUNDATION_EXPORT const unsigned char HRSigningContractVersionString[];


@interface HRSigningContractInterface : NSObject

@property(nonatomic,strong) NSString* orderNo;
@property(nonatomic,strong) NSString* assurerNo;

/**
 *  类方法
 */
+ (HRSigningContractInterface *)sharedUtil;

+ (NSString *)getSdkVersion;

/**
 电子签约调用
 @param orderNo 订单号
 @param assurerNo 合作商户号
 @param hrdns sdk环境 1开发环境 2生产环境 3银行测试环境
 @param successAlert 调启征信页面成功
 @param bankCardCertificationResult 四要素认证结果返回
 @param signComplete 签署成功回调
 @param error 页面跳转失败，1.有些参数为nil 2.接口请求失败或者没有网络

 */
//
- (void)signingContractOrderNo:(NSString *)orderNo assurerNo:(NSString *)assurerNo  domainNameSystem:(NSString *)hrdns successAlert:(successAlertResultBlock)successAlert bankCardCertificationResult:(bankCardCertificationResultBlock)bankCardCertificationResult signComplete:(signCompleteBlock)signComplete  error:(errorResultBlock)error;


@end
