//
//  PAYCardType.h
//  PAYPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#ifndef PAYCardType_h
#define PAYCardType_h

typedef NS_ENUM(NSInteger, PAYCardType) {
    PAYCardTypeVisa,
    PAYCardTypeMasterCard,
    PAYCardTypeAmex,
    PAYCardTypeDiscover,
    PAYCardTypeJCB,
    PAYCardTypeDinersClub,
    PAYCardTypeUnknown
};

#endif
