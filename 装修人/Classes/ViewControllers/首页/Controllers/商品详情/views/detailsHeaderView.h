//
//  detailsHeaderView.h
//  装修人
//
//  Created by liuhang on 17/1/12.
//  Copyright © 2017年 熊维东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface detailsHeaderView : UIView
//点击回调
@property (nonatomic, copy) void (^tappedBlock) ();
@end
