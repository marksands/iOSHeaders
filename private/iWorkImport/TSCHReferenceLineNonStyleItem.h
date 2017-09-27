//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, TSCHReferenceLineNonStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLineNonStyleItem : NSObject
{
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
}

@property(retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // @synthesize nonStyle=mNonStyle;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
- (void)saveToArchiver:(id)arg1 message:(struct ChartReferenceLineNonStyleItem *)arg2;
- (id)initFromUnarchiver:(id)arg1 message:(const struct ChartReferenceLineNonStyleItem *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;

@end

