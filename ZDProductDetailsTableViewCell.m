//
//  ProductDetailsTableViewCell.m
//  五粮特曲
//
//  Created by yangchengyou on 16/3/15.
//  Copyright © 2016年 YCheng. All rights reserved.
//

#import "ZDProductDetailsTableViewCell.h"

@implementation ZDProductDetailsTableViewCell

- (void)configureForCell:(ZDProductListModelTwoBotCode *)model{
    self.title.text = model.productName;
    self.standard.text = model.productStandard;
    self.code.text = model.logisticscode;
}

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
