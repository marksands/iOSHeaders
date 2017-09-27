//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSISVariableDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate>
{
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableSet *variablesToIntegralize;
    NSMutableSet *userObservableVariables;
}

- (id)secondAnchor;
- (id)firstAnchor;
- (id)secondItem;
- (id)firstItem;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (void)dealloc;
- (id)unwrapLinearExpression:(id)arg1;
- (id)unwrapVariable:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

