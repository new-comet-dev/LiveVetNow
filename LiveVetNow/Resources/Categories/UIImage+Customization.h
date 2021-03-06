//
//  UIImage+Customization.h
//  LiveVetNow
//
//  Created by Apple on 03/06/17.
//  Copyright © 2017 iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Customization)

+ (UIImage *)imageFromColor:(UIColor *)color forSize:(CGSize)size withCornerRadius:(CGFloat)radius;

@end
