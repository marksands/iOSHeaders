//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff
{
    _Bool _hasChanges;
}

@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateHasChanges;
- (void)updateObject:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)initWithFromSet:(id)arg1;

@end

