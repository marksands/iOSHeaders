//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDMixing.h"
#import "TSSPropertyCommandSerializing.h"
#import "TSSPropertyValueArchiving.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPPadding : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing>
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
+ (id)padding;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct PaddingArchive *)arg1 archiver:(id)arg2;
- (id)paddingByMirroringHorizontal;
- (void)transform:(struct CGAffineTransform)arg1;
- (id)initWithArchive:(const struct PaddingArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

