//
//  AppDelegate+APNS.h
//  CatPetAPP
//
//  Created by weibo02 on 2018/5/9.
//  Copyright © 2018年 yaohr. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (APNS)
- (void)registerRemoteNotificationWithLaunchOptions:(NSDictionary *)launchOptions;
@end
