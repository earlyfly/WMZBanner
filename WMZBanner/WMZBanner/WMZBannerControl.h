//
//  WMZBannerControl.h
//  WMZBanner
//
//  Created by wmz on 2019/9/6.
//  Copyright © 2019 wmz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMZBannerParam.h"
NS_ASSUME_NONNULL_BEGIN
@interface WMZBannerControl : UIControl
@property (nonatomic, strong) UIImage *currentImage;
@property (nonatomic, strong) UIImage *inactiveImage;
@property (nonatomic, assign) CGSize currentImageSize;
@property (nonatomic, assign) CGSize inactiveImageSize;
@property (nonatomic, assign) NSInteger numberOfPages;
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic,strong)  UIColor *currentPageIndicatorTintColor;
@property (nonatomic,strong)  UIColor *pageIndicatorTintColor;
@property (nonatomic, strong) WMZBannerParam *param;
- (instancetype)initWithFrame:(CGRect)frame WithModel:(WMZBannerParam *)param;

@end

NS_ASSUME_NONNULL_END
