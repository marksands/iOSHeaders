//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAbstractDefaultDomain.h"

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain
{
}

- (void)clearUsageDefaults;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(retain, nonatomic) NSNumber *batteryUsageTime; // @dynamic batteryUsageTime;
@property(nonatomic) _Bool hasChargedPartially; // @dynamic hasChargedPartially;
@property(retain, nonatomic) NSNumber *standbyTime; // @dynamic standbyTime;

@end

