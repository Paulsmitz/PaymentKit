//
//  PAYTextField.h
//  PaymentKit Example
//
//  Created by Michaël Villar on 3/20/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PAYTextField;

@protocol PAYTextFieldDelegate <UITextFieldDelegate>

@optional

- (void)pkTextFieldDidBackSpaceWhileTextIsEmpty:(PAYTextField *)textField;

@end

@interface PAYTextField : UITextField

+ (NSString*)textByRemovingUselessSpacesFromString:(NSString*)string;

@property (nonatomic, weak) id<PAYTextFieldDelegate> delegate;

@end

