//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDAbstractLayout, TSDLayoutGeometry, TSDWrapSegments, TSUBezierPath;

@protocol TSDWrappable <NSObject>
@property(copy, nonatomic) TSDLayoutGeometry *geometry;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (TSDWrapSegments *)wrapSegments;
- (TSUBezierPath *)wrapPath;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (TSDAbstractLayout *)parent;
@end

