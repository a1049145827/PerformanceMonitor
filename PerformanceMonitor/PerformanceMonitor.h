//
//  PerformanceMonitor.h
//  SuperApp
//
//  Created by tanhao on 15/11/12.
//  Copyright © 2015年 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PerformanceMonitor : NSObject

+ (instancetype)sharedInstance;

- (void)start;
- (void)stop;

@end
