//
//  PAYCardCVC.m
//  PAYPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import "PAYCardCVC.h"

@implementation PAYCardCVC {
@private
    NSString *_cvc;
}

+ (instancetype)cardCVCWithString:(NSString *)string
{
    return [[self alloc] initWithString:string];
}

- (instancetype)initWithString:(NSString *)string
{
   if (self = [super init]) {
        // Strip non-digits
        if (string) {
            _cvc = [string stringByReplacingOccurrencesOfString:@"\\D"
                                                     withString:@""
                                                        options:NSRegularExpressionSearch
                                                          range:NSMakeRange(0, string.length)];
        } else {
            _cvc = [NSString string];
        }
    }
    return self;
}

- (NSString *)string
{
    return _cvc;
}

- (BOOL)isValid
{
    return _cvc.length >= 3 && _cvc.length <= 4;
}

- (BOOL)isValidWithType:(PAYCardType)type
{
    if (type == PAYCardTypeAmex) {
        return _cvc.length == 4;
    } else {
        return _cvc.length == 3;
    }
}

- (BOOL)isPartiallyValid
{
    return _cvc.length <= 4;
}

- (BOOL)isPartiallyValidWithType:(PAYCardType)type
{
    if (type == PAYCardTypeAmex) {
        return _cvc.length <= 4;
    } else {
        return _cvc.length <= 3;
    }
}
@end
