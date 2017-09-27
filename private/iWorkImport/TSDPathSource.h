//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSDMixing.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDPathSource : NSObject <TSDMixing, NSCopying>
{
    _Bool mHorizontalFlip;
    _Bool mVerticalFlip;
    NSString *mLocalizationKey;
    NSString *mName;
}

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize)arg2;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive *)arg1;
@property _Bool hasVerticalFlip; // @synthesize hasVerticalFlip=mVerticalFlip;
@property _Bool hasHorizontalFlip; // @synthesize hasHorizontalFlip=mHorizontalFlip;
@property(copy, nonatomic) NSString *userDefinedName; // @synthesize userDefinedName=mName;
@property(copy, nonatomic) NSString *localizationKey; // @synthesize localizationKey=mLocalizationKey;
- (void).cxx_destruct;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)valueForSetSelector:(SEL)arg1;
- (struct CGAffineTransform)pathFlipTransform;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (Class)preferredControllerClass;
- (id)interiorWrapPathForInset:(double)arg1 joinStyle:(unsigned long long)arg2;
- (id)interiorWrapPath;
- (id)bezierPathWithoutFlips;
- (id)bezierPath;
@property(readonly, nonatomic, getter=isClosed) _Bool closed;
- (_Bool)isCircular;
- (_Bool)isRectangularForever;
- (_Bool)isRectangular;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (void)saveSharedToArchive:(struct PathSourceArchive *)arg1;
- (void)loadSharedFromArchive:(const struct PathSourceArchive *)arg1;

@end

