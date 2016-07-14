//
//  PTKPaymentField.h
//  PTKPayment Example
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

__attribute__((deprecated("We've moved development of PaymentKit into github.com/stripe/stripe-ios. You should migrate to use that instead. For help, see https://github.com/stripe/paymentkit#migration .")))
@protocol PTKViewDelegate <NSObject>

@optional
- (void)paymentView:(PAYView *)paymentView withCard:(PAYCard *)card isValid:(BOOL)valid;

@end

__attribute__((deprecated("We've moved development of PaymentKit into github.com/stripe/stripe-ios. You should migrate to use that instead. For help, see https://github.com/stripe/paymentkit#migration .")))
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
@property (nonatomic, weak) id <PTKViewDelegate> delegate;
@property (readonly) PAYCard *card;

@end
