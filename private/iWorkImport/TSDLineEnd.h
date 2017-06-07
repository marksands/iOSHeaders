//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDLineEnd : NSObject <NSCopying, TSDMixing>
{
    struct CGPath *mPath;
    struct CGPath *mWrapPath;
    struct CGPoint mEndPoint;
    _Bool mIsFilled;
    NSString *mIdentifier;
    int mLineJoin;
}

+ (id)lineEndWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5;
+ (id)lineEndWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)line;
+ (id)invertedArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)filledSquare;
+ (id)filledArrow;
+ (id)openArrow;
+ (id)filledDiamond;
+ (id)filledCircle;
+ (id)simpleArrow;
+ (id)instanceWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=mLineJoin;
@property(readonly, nonatomic) _Bool isFilled; // @synthesize isFilled=mIsFilled;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEndPoint;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=mPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
- (double)scaleForStrokeWidth:(double)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)description;
@property(readonly, nonatomic) _Bool isNone;
@property(readonly, nonatomic) struct CGPath *wrapPath;
- (struct CGImage *)newLineEndImageOnRight:(_Bool)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;
- (id)initWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (void)saveToArchive:(struct LineEndArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;

@end

