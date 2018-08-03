//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

#import "XCTestExpectationDelegate.h"

@class NSArray, NSString, _XCTCompoundExpectationImplementation;

@interface XCTCompoundExpectation : XCTestExpectation <XCTestExpectationDelegate>
{
    id _internalCompoundExpectation;
}

+ (id)orExpectationWithSubexpectations:(id)arg1;
+ (id)andExpectationWithSubexpectations:(id)arg1;
@property(readonly) _XCTCompoundExpectationImplementation *internalCompoundExpectation; // @synthesize internalCompoundExpectation=_internalCompoundExpectation;
- (void).cxx_destruct;
- (void)didFulfillExpectation:(id)arg1;
- (void)cleanup;
- (_Bool)_queue_validateSubexpectationsFulfillment;
- (void)_updateFulfilledState;
@property(readonly, copy) NSArray *subexpectations;
@property(readonly) unsigned long long compoundExpectationType;
- (id)initWithType:(unsigned long long)arg1 subexpectations:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

