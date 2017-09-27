//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKNumberFormatter.h"

@class NSString;

@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter>
{
    long long _decimalPrecision;
}

+ (id)formatterWithDecimalPrecision:(long long)arg1;
@property(nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (_Bool)returnsUnitWithValueForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

