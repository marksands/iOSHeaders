//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@class NSString;

@interface HKWorkoutDurationNumberFormatter : NSObject <HKNumberFormatter>
{
    _Bool _allowMillisecondPrecision;
}

@property(nonatomic) _Bool allowMillisecondPrecision; // @synthesize allowMillisecondPrecision=_allowMillisecondPrecision;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

