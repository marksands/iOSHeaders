//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_ICLexiconSourcing.h"
#import "_ICPredictionSourcing.h"

@interface _ICNullSource : NSObject <_ICPredictionSourcing, _ICLexiconSourcing>
{
}

- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterNameDelegate:(id)arg1;
- (void)registerNameDelegate:(id)arg1;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(CDUnknownBlockType)arg5;

@end

