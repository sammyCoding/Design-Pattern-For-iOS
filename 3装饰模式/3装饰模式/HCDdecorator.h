//
//  HCDdecorator.h
//  3装饰模式
//
//  Created by yifan on 15/8/12.
//  Copyright (c) 2015年 黄成都. All rights reserved.
//

#import "HCDstractCellPhone.h"

@interface HCDdecorator : HCDstractCellPhone
@property(nonatomic,strong) HCDstractCellPhone *abstractCellPhone;
- (void)setComponents:(HCDstractCellPhone *)component;
@end
