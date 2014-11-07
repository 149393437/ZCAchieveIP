//
//  ZCAchieveIP.h
//  Socket_TCP_demo
//
//  Created by ZhangCheng on 14-4-11.
//  Copyright (c) 2014年 zhangcheng. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
NSDictionary*dic=[ZCAchieveIP fetchSSIDInfo];
 需要真机测试 模拟器无效，真机测试后返回结果如下
 {
 BSSID = "c8:3a:35:3a:95:48";
 SSID = "Tenda_3A9548";
 SSIDDATA = <54656e64 615f3341 39353438>;
 }
 其中SSID为WIFI名称
 
 
 */
@interface ZCAchieveIP : NSObject
+(NSString *)getWiFiIPAddress;
//获取当前wifi名称
+(id)fetchSSIDInfo
@end
