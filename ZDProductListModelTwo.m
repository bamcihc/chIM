//
//  ProductListModelTwo.m
//  五粮特曲(经销商)
//
//  Created by ba on 16/7/27.
//  Copyright © 2016年 YCheng. All rights reserved.
//

#import "ZDProductListModelTwo.h"

@implementation ZDProductListModelTwo
+(NSDictionary *)mj_objectClassInArray
{
    return @{@"obj":[ZDProductListModelTwoObj class]};

}
@end
@implementation ZDProductListModelTwoObj
+(NSDictionary *)mj_objectClassInArray
{
    return @{@"botCode":[ZDProductListModelTwoBotCode class]};
    
}
@end
@implementation ZDProductListModelTwoBotCode

@end
