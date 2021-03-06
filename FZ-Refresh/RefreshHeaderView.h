//
//  RefreshHeaderView.h
//  NavigationTest
//
//  Created by 王欣 on 2018/8/16.
//  Copyright © 2018年 王欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RefreshComponent.h"
#import "BaseAnimationView.h"
#import "NormalAniationView.h"
@interface RefreshHeaderView : RefreshComponent


+ (RefreshHeaderView*)headerWithRefreshingBlock:(RefreshBlock)refreshingBlock AnimationType:(AnimationType)type;

@end
