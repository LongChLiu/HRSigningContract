//
//  HRSaving.m
//  huiRong
//
//  Created by archie on 16/9/6.
//  Copyright © 2016年 hr. All rights reserved.



#import "HRSaving.h"

@interface HRSaving()

@end
@implementation HRSaving

+(instancetype)shareInstance{
    static HRSaving*inst;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        inst=[[HRSaving alloc]init];
    });
    return inst;
}
+(BOOL)isNull:(id)object{
    if ( [object isEqual:[NSNull null]] || object == nil) {
        return YES;
    }else{
        if ([object isKindOfClass:[NSString class]]) {
            if ([object isEqualToString:@""]) {
                return YES;
            }
        }
        return NO;
    }
}
+(NSString*)getContentString:(id)object placeholderString:(NSString*)pl{
    return [self isNull:object]?pl:object;
}


@end
