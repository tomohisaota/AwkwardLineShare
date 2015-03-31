//
//  UIColor+HexString.h
//  AwkwardLineShare
//
//  Created by YuheiMiyazato on 3/27/15.
//  Copyright (c) 2015 mitolab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)
+ (UIColor *) colorFromHexString:(NSString *)hexString;
@end
