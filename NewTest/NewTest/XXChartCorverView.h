//
//  XXChartCorverView.h
//  NewTest
//
//  Created by 王旭 on 16/5/31.
//  Copyright © 2016年 pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XXChartCorverView : UIView
- (instancetype)initWithAnimation:(BOOL)animation;

@property (nonatomic, assign) NSInteger yTittleCount;
@property (nonatomic, strong) NSArray *xTittles;
@property (nonatomic, strong) NSArray *values;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *axisTitleColor;




@property (nonatomic, strong) UIColor *axisColor;
@property (nonatomic, strong) UIColor *backLineColor;
@property (nonatomic, strong) UIColor *circleColor;
@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, strong) UIColor *downColor;


@end
