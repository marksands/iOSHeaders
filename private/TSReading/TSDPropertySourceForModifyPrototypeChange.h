//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSSPropertySource.h"

@class NSString, TSDModifyPrototypeChange;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource>
{
    TSDModifyPrototypeChange *mChange;
    _Bool mAfterChange;
}

- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (id)p_propertyMap;
- (id)initWithPrototypeChange:(id)arg1 afterChange:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

