//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

#import "NSCopying.h"

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    UIColor *_backgroundColor;
    long long _position;
    double _zoomingImageAlpha;
    double _zoomingImageWidth;
    double _zoomingImageImposedAlphaOfOtherViews;
    double _zoomingImageLambda;
}

@property(nonatomic, getter=_zoomingImageLambda, setter=_setZoomingImageLambda:) double zoomingImageLambda; // @synthesize zoomingImageLambda=_zoomingImageLambda;
@property(nonatomic) double zoomingImageImposedAlphaOfOtherViews; // @synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews;
@property(nonatomic) double zoomingImageWidth; // @synthesize zoomingImageWidth=_zoomingImageWidth;
@property(nonatomic) double zoomingImageAlpha; // @synthesize zoomingImageAlpha=_zoomingImageAlpha;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

