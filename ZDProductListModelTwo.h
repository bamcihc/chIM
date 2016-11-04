//
//  ProductListModelTwo.h
//  五粮特曲(经销商)
//
//  Created by ba on 16/7/27.
//  Copyright © 2016年 YCheng. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ZDProductListModelTwoObj,ZDProductListModelTwoBotCode;
@interface ZDProductListModelTwo : NSObject
@property(nonatomic,strong)NSArray<ZDProductListModelTwoObj*> *obj;

@end
@interface ZDProductListModelTwoObj : NSObject
@property(nonatomic,strong)NSArray<ZDProductListModelTwoBotCode*> *botCode;
@property(nonatomic,strong)NSString *boxCode;
@end
@interface ZDProductListModelTwoBotCode : NSObject
@property(nonatomic,strong)NSString *boxCode;
@property(nonatomic,strong)NSString *logisticscode;
@property(nonatomic,strong)NSString *productName;
@property(nonatomic,strong)NSString *productStandard;
@end
