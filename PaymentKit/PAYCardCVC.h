//
//  PTKCardCVC.h
//  PTKPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PAYCardType.h"
#import "PAYComponent.h"

@interface PAYCardCVC : PAYComponent

@property (nonatomic, readonly) NSString *string;

+ (instancetype)cardCVCWithString:(NSString *)string;
- (BOOL)isValidWithType:(PAYCardType)type;
- (BOOL)isPartiallyValidWithType:(PAYCardType)type;

@end
