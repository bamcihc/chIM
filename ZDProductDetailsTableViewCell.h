//
//  ProductDetailsTableViewCell.h
//  五粮特曲
//
//  Created by yangchengyou on 16/3/15.
//  Copyright © 2016年 YCheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZDProductListModel.h"
#import "ZDProductListModelTwo.h"
@interface ZDProductDetailsTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *image;
@property (strong, nonatomic) IBOutlet UILabel *standard;
@property (strong, nonatomic) IBOutlet UILabel *code;

@property (strong, nonatomic) IBOutlet UILabel *title;


- (void)configureForCell:(ZDProductListModelTwoBotCode *)model;
@end
