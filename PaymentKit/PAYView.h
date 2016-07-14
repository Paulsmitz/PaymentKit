//
//  PAYPaymentField.h
//  PAYPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PAYCard.h"
#import "PAYCardNumber.h"
#import "PAYCardExpiry.h"
#import "PAYCardCVC.h"
#import "PAYAddressZip.h"
#import "PAYUSAddressZip.h"

@class PAYView, PAYTextField;

@protocol PAYViewDelegate <NSObject>

@optional
- (void)paymentView:(PAYView *)paymentView withCard:(PAYCard *)card isValid:(BOOL)valid;

@end

@interface PAYView : UIView

- (BOOL)isValid;

@property (nonatomic, readonly) UIView *opaqueOverGradientView;
@property (nonatomic, readonly) PAYCardNumber *cardNumber;
@property (nonatomic, readonly) PAYCardExpiry *cardExpiry;
@property (nonatomic, readonly) PAYCardCVC *cardCVC;
@property (nonatomic, readonly) PAYAddressZip *addressZip;

@property IBOutlet UIView *innerView;
@property IBOutlet UIView *clipView;
@property IBOutlet PAYTextField *cardNumberField;
@property IBOutlet PAYTextField *cardExpiryField;
@property IBOutlet PAYTextField *cardCVCField;
@property IBOutlet UIImageView *placeholderView;
@property (nonatomic, weak) id <PAYViewDelegate> delegate;
@property (readonly) PAYCard *card;

@end
