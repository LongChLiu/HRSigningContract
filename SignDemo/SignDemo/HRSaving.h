//
//  HRSaving.h
//  huiRong
//
//  Created by archie on 16/9/6.
//  Copyright © 2016年 hr. All rights reserved.
//


typedef void(^PromptBlock)(int index);

#import <Foundation/Foundation.h>

@interface HRSaving : NSObject

+(instancetype)shareInstance;

+(BOOL)isNull:(id)object;

+(NSString*)getContentString:(id)object placeholderString:(NSString*)pl;





@end
