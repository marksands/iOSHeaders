//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes
{
    double _contentAlpha;
    double _darkeningAlphaUniform;
    double _shadowAlpha;
    double _scale;
    struct CGRect _unitFrameOnScreen;
    struct CGRect _computedFrame;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect computedFrame; // @synthesize computedFrame=_computedFrame;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) struct CGRect unitFrameOnScreen; // @synthesize unitFrameOnScreen=_unitFrameOnScreen;
@property(nonatomic) double darkeningAlphaUniform; // @synthesize darkeningAlphaUniform=_darkeningAlphaUniform;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

