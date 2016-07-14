//
//  PAYCardCVCTest.m
//  PAYPayment Example
//
//  Created by Alex MacCaw on 2/6/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import "PAYCardCVCTest.h"
#import "PAYCardCVC.h"
#define CCVC(string) [PAYCardCVC cardCVCWithString:string]

@implementation PAYCardCVCTest

- (void) testStripsNonIntegers
{
    
    XCTAssertEqualObjects([CCVC(@"123") string], @"123", @"Strips non integers");
    XCTAssertEqualObjects([CCVC(@"12d3") string], @"123", @"Strips non integers");
}

- (void) testIsValid
{
    XCTAssertTrue([CCVC(@"123") isValid], @"Test is valid");
    XCTAssertTrue(![CCVC(@"12334") isValid], @"Test is valid");
    XCTAssertTrue(![CCVC(@"34") isValid], @"Test is valid");
}

- (void) testIsPartiallyValid
{
    XCTAssertTrue([CCVC(@"123") isPartiallyValid], @"Test is valid");
    XCTAssertTrue(![CCVC(@"12334") isPartiallyValid], @"Test is valid");
    XCTAssertTrue([CCVC(@"1234") isPartiallyValid], @"Test is valid");
    XCTAssertTrue([CCVC(@"34")isPartiallyValid], @"Test is valid");
}

- (void) testIsPartiallyValidWithType
{
    XCTAssertTrue([CCVC(@"123") isPartiallyValidWithType:PAYCardTypeVisa], @"Test is valid");
    XCTAssertTrue(![CCVC(@"1234") isPartiallyValidWithType:PAYCardTypeVisa], @"Test is valid");

    XCTAssertTrue([CCVC(@"123") isPartiallyValidWithType:PAYCardTypeAmex], @"Test is valid");
    XCTAssertTrue([CCVC(@"1234") isPartiallyValidWithType:PAYCardTypeAmex], @"Test is valid");
}

@end
